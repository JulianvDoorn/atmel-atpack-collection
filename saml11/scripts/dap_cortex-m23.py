import sys
import time

nvmCtrl = 0
class sam_d_info:
    dsu_address = 0x41002000
    ctrl_reg_offset = 0x100
    statusa_offset = 0x101
    ctrl_ce_bit = 0x10
    erase_size = 0x100

L11SDAL0 = 100
L11SDAL1 = 101
L11CHIPERASE0 = 103
L11CHIPERASE1 = 104
L11CHIPERASE2 = 105
CHIP_ERASE = 102

dap.LogPackets(1)
log.getLogLevelThreshold()
log.setShowOutput(True)
#log.log(LEVEL_SEVERE,"Test")
log.info("sample of info output")
log.error("sample of error output")

def printDHCSR(text):
    d = dap.ReadD32(dap.DHCSR)
    decodeAndPrintDHCSR(text, d)

def decodeAndPrintDHCSR(text, d):
    strDHCSR=" %s %x : " % (text,d)
    if (d & 0x02000000):
        strDHCSR = strDHCSR +  "S_RESET_ST."
    if (d & 0x01000000):
        strDHCSR = strDHCSR +  "S_RETIRE."
    if (d & 0x00100000):
        strDHCSR = strDHCSR +  "S_SDE."
    if (d & 0x00080000):
        strDHCSR = strDHCSR +  "S_LOCKUP."
    if (d & 0x00040000):
        strDHCSR = strDHCSR +  "S_SLEEP."
    if (d & 0x00020000):
        strDHCSR = strDHCSR +  "S_HALT."
    if (d & 0x00010000):
        strDHCSR = strDHCSR +  "S_REGRDY."
    if (d & 0x00000020):
        strDHCSR = strDHCSR +  "C_SNAPSTALL."
    if (d & 0x00000008):
        strDHCSR = strDHCSR +  "C_MASKINTS."
    if (d & 0x00000004):
        strDHCSR = strDHCSR +  "C_STEP."
    if (d & 0x00000002):
        strDHCSR = strDHCSR +  "C_HALT."
    if (d & 0x00000001):
        strDHCSR = strDHCSR +  "C_DEBUGEN"
    log.log(LEVEL_INFO,strDHCSR)

#import program_api
#reload (debug_api)
# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4ProgramInterface

def set_program_exec(address, data):
  log.log(LEVEL_INFO,"RI4ProgramInterface: Program exec at 0x%x, is %d bytes long" % (address, len(data)))


def set_debug_exec(address, data):
  log.log(LEVEL_INFO,"RI4ProgramInterface: Debug exec at 0x%x, is %d bytes long" % (address, len(data)))

def blank_check():
  log.log(LEVEL_INFO,"RI4ProgramInterface: Blank check")

def resetExtension():
  timeout=1000
  log.log(LEVEL_INFO,"Reset extension")
  dap.Pins(0,dap.RESET,timeout)  # 1 msec with reset high
  dap.Pins(dap.RESET,dap.RESET,timeout) # 1 msec with floating reset
  dap.Pins(0,dap.RESET | dap.SWCLK,timeout); # 1 msec with reset and clock low
  dap.Pins(dap.RESET,dap.RESET,timeout); # now float reset back

def erase():
  log.log(LEVEL_INFO,"RI4ProgramInterface: Erase")
  resetExtension()
  dap.Connect(True,2000000L)
  #ExitResetExtensionL10()
  
  key = "255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255"
  SamL10Chiperase(device,key,L11CHIPERASE2)
  
def issueResetAndWait():
  log.log(LEVEL_INFO,"RI4ProgramInterface: issueResetAndWait")
  dap.WriteD32(dap.DEMCR, 0x01000001) #VC_CORERESET|TRCENA
  dap.WriteD32(dap.AIRCR, 0x05fa0004) # 1=VECTRESET 4=sysresetreq
  n = 0
  seenReset = False
  while n<10:
    r=dap.ReadD32(dap.DHCSR)
    decodeAndPrintDHCSR("dap.DHCSR",r)
    if (r & 0x02000000): # wait for S_RESET_ST
      seenReset=True
      dap.WriteD32(dap.DHCSR, 0xa05f0003) #DBGKEY | C_DEBUGEN | C_HALT
      dap.WriteD8(0x41002101,0x2)
      printDHCSR("After clearing CRSTEXT")
    hasHalted = 0 != (r & 0x00020000)
    if seenReset:
      if hasHalted: # wait for S_HALT
        break
    time.sleep(0.1)
    n=n+1
  dap.WriteD32(dap.DEMCR, 0x01000000) #TRCENA
  testRegs()
  if n==100:
    raise "timeout in reset"

def hold_in_reset():
  log.log(LEVEL_INFO,"RI4ProgramInterface: Hold in reset")

def release_from_reset():
  log.log(LEVEL_INFO,"RI4ProgramInterface: Release from reset")
  dap.Pins(0,dap.RESET,1000)  # 1 msec with reset high
  dap.Pins(dap.RESET,dap.RESET,1000) # 1 msec with floating reset
 
prevCfgReg = 0
prevCfgReg2 = 0
L11 = True
OFFSET_CTRLB_2802 = 4 # ctrlb offset 4 size 4
OFFSET_CTRLC_2802 = 8 # offset 8 size 1

def save_cfg_word():
  global prevCfgReg,prevCfgReg2
  findNvmCtrl()
  if L11:
      #OFFSET_CTRLC_2802_SIZE = 1
      if 0 == prevCfgReg2:
        prevCfgReg2 = dap.ReadD8(nvmCtrl+OFFSET_CTRLC_2802)
      newCfgReg2 = prevCfgReg2 & 0x00fe # on L11 we want manual writes
      if newCfgReg2 != prevCfgReg2:
         dap.WriteD8(nvmCtrl+OFFSET_CTRLC_2802, newCfgReg2)

  # CTRLB size = 4
  #global prevCfgReg
  if 0 == prevCfgReg:
    prevCfgReg = dap.ReadD32(nvmCtrl+OFFSET_CTRLB_2802)
  wait_states = 15
  newCfgReg = (prevCfgReg & ~0x1e) | (wait_states << 1) # wait states 15
  if newCfgReg != prevCfgReg:
     dap.WriteD32(nvmCtrl+OFFSET_CTRLB_2802, newCfgReg)

def reset_cfg_word():
  dap.WriteD8(nvmCtrl + OFFSET_CTRLC_2802, prevCfgReg2)
  dap.WriteD32(nvmCtrl + OFFSET_CTRLB_2802, prevCfgReg)

def eraseRow(addr):
  dap.WriteD32(addr, 0xFFFFFFFF) # write a few bytes to the page buffer to set address register
  CMD_ERASE_ROW = 0xA502 #works on all flash sections on L10
  writeCommand (CMD_ERASE_ROW, 20)


def writeCommand(command, t):
  dap.WriteD16(nvmCtrl + 0, command)
  while t > 0 :
    if isNvmReady():
      return
    time.sleep(0.001)
    t  = t - 1
  if t == 0:
    raise "timeout executing NVM command"

def writeRow(adr, ofs, data):
  page_size = 64
  written = 0
  while written < sam_d_info.erase_size:
    # print "write_flash_page call dap.WriteMem address = 0x%x-+0x%x" % (adr, adr + page_size-1)
    dap.WriteMem(adr, data, ofs + written, page_size)
    writeCommand(0xA504,20)  # writePage
    adr += page_size
    written += page_size

def write_transfer(type_of_mem, address, data, length):
  log.log(LEVEL_INFO,"RI4ProgramInterface: Writing %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))
  orig_address = address

  save_cfg_word()
  # assumes flash is pre erased, so no row erase
  written = 0
  if address == 0x804000 or address == 0x0080C000:
    writeCfgPage(address, data, length)
  else:
    while written < length:
      writeRow(address,written,data)
      written += sam_d_info.erase_size
      address += sam_d_info.erase_size

  print "RI4ProgramInterface: Written %d bytes to address 0x%0x of %s memory" % (length, orig_address, type_of_mem)
  reset_cfg_word()

def read_transfer(type_of_mem, address, data, length):
  dap.ReadMem(address,data,0,length)
  log.log(LEVEL_INFO,"RI4ProgramInterface: Reading %d bytes from address 0x%0x of %s memory" % (length, address, type_of_mem))

def verify_transfer(type_of_mem, address, data, length):
  log.log(LEVEL_INFO,"RI4ProgramInterface: Verifying %d bytes to address 0x%0x of %s memory" % (length, address, type_of_mem))

def end_of_operations():
  log.log(LEVEL_INFO,"RI4ProgramInterface: End of operations")


# this file contains all the methods that satisfy the APIs exposed by ScriptBasedController
# RI4DebugInterfaceWithBP

global g_in_debug_mode
g_in_debug_mode = False

global g_is_running
g_is_running = False

def init_debug_session():
  log.log(LEVEL_INFO,"Debug:: Init debug session")
  global g_in_debug_mode
  global g_is_running
  issueResetAndWait()
  testRegs()
  g_in_debug_mode = True
  g_is_running = False

def hold_in_reset():
  log.log(LEVEL_INFO,"top Debug:: Hold in reset")

def debug_read_target_memory(mem_type, start, end, data):
  len = end-start+1
  log.log(LEVEL_INFO,"Debug:: Reading %d bytes at start address 0x%0x (%s)" % (len, start, mem_type))
  dap.ReadMem(start,data,0,len)

def debug_write_target_memory(mem_type, start, end, data):
  len = end-start+1
  log.log(LEVEL_INFO,"Debug:: Writing %d bytes at start address 0x%0x (%s)" % (len, start, mem_type))
  dap.WriteMem(start,data,0,len)

def is_target_in_debug_mode():
  log.log(LEVEL_INFO,"Debug:: Is target in debug mode? %s" % g_in_debug_mode)
  return g_in_debug_mode


def get_pc():
  rv = dap.GetARMReg(13)
  pc = dap.GetARMReg(15)
  log.log(LEVEL_INFO,"get_pc SP=%x PC=%x" %  (rv,pc))
  return pc

def run_target():
  global g_is_running
  g_is_running = True
  printDHCSR("Target to be set to running ")
  dap.WriteD32(dap.DHCSR, 0xa05f0001) #DBGKEY | C_DEBUGEN | C_HALT
  printDHCSR("Target should be running ")

def halt_target():
  global g_is_running
  g_is_running = False
  printDHCSR("Target to be halted ")
  dap.WriteD32(dap.DHCSR, 0xa05f0003) #DBGKEY | C_DEBUGEN | C_HALT
  printDHCSR("Target was halted ")


def step_target():
  printDHCSR("Debug:: step target")
  get_pc()
  dap.WriteD32(dap.DHCSR, 0xa05f000b)  #DBGKEY | C_DEBUGEN | C_HALT | C_MASKINTS
  dap.WriteD32(dap.DHCSR, 0xa05f000d)  #DBGKEY | C_DEBUGEN | C_STEP | C_MASKINTS
  dap.WriteD32(dap.DHCSR, 0xa05f0003)  #DBGKEY | C_DEBUGEN | C_HALT
  get_pc()

def set_pc(pc):
  log.log(LEVEL_INFO,"Debug:: set pc to 0x%0x" % pc)
  dap.SetARMReg(15,pc)
  get_pc()

def print_byte_array(text, array, index, size):
  string = text
  for i in range(size):
    string += " %x" % array[i+index]
  log.log(LEVEL_INFO,string)

def set_sw_bp(address, instruction, flags):
  log.log(LEVEL_INFO,"Debug:: set/reset pb at address 0x%0x, store instructions 0x%0x, flags = 0x%0x" % (address, instruction, flags))
  erase_page_start = address & ~(sam_d_info.erase_size-1)
  address_in_erase_page = address & sam_d_info.erase_size-1
  log.log(LEVEL_INFO,"set_sw_bp: erase_page_start = %x, address_in_erase_page = %x" % (erase_page_start, address_in_erase_page))

  data = bytearray(256)
  dap.ReadMem(erase_page_start, data, 0, sam_d_info.erase_size)
  print_byte_array("set_sw_bp: data[address_in_erase_page] =", data, address_in_erase_page, 4)
  return_value = data[address_in_erase_page] | (data[address_in_erase_page+1] << 8)
  log.log(LEVEL_INFO,"set_sw_bp: return_value (replaced instruction) = %x" % return_value)

  # Insert software breakpoint instruction in the data
  data[address_in_erase_page] = instruction & 0xFF
  data[address_in_erase_page+1] = (instruction >> 8) & 0xFF

  print_byte_array("set_sw_bp: data[address_in_erase_page] after changing instr =", data, address_in_erase_page, 4)
  write_transfer("Pgm", erase_page_start, data, sam_d_info.erase_size)

  return return_value

def reset_target():
  global regsAreInvalid
  log.log(LEVEL_INFO,"Debug:: Reset target")
  regsAreInvalid = True
  issueResetAndWait()

def is_running():
  global g_is_running, regsAreInvalid
  d = dap.ReadD32(dap.DHCSR)
  state =  0 == (d & 0x00020000)
  if state != g_is_running:
    log.log(LEVEL_INFO,"Debug:: is_running %s" % state)
    regsAreInvalid = True
    g_is_running = state
  return g_is_running

def setHardwareBreakpoint(number, address):
  log.log(LEVEL_INFO,"Debug:: set hw bp number %d, at address 0x%0x"  % (number, address))

def clearHardwareBreakpoint(number):
  log.log(LEVEL_INFO,"Debug:: clear hw bp number %d" % number)

def end_debug_session():
  global g_in_debug_mode
  global g_is_running
  g_is_running = False
  g_in_debug_mode = False


def testRegs():
  get_pc()
  return


def programRow(adr,buf,ofs):
  return

def computeAndWriteKey(idauBsSize , idauBnscSize, bootopt):
  bootHashAddr = 0
  BOOTKEYLEN = 0x20
  NVMCTRL_ROW_SIZE = 256
  u8BootKey = bytearray(BOOTKEYLEN)

  if bootopt == 0:
    return
  utils.sha256_reset()
  FLASH_ADDR = 0
  bsSize = idauBsSize - idauBnscSize
  if bootopt != 1:
    FUSES_BOOTROM_BOOTKEY_0_ADDR = 0x0080C050
    #Read bootkey
    dap.ReadMem(FUSES_BOOTROM_BOOTKEY_0_ADDR, u8BootKey,0,BOOTKEYLEN)
    utils.sha256_update(u8BootKey, 0, BOOTKEYLEN)
    utils.sha256_update(u8BootKey, 0, BOOTKEYLEN)

  buffNvmData  = bytearray(idauBsSize)
  #Read bootloader
  dap.ReadMem(FLASH_ADDR, buffNvmData, 0, idauBsSize)
  utils.sha256_update(buffNvmData,0,bsSize - SHA_HASHSIZE_IN_BYTES)
  if idauBnscSize > 0 :
      utils.sha256_update(buffNvmData,bsSize, idauBnscSize)
  hashOffset = bsSize - SHA_HASHSIZE_IN_BYTES
  # Compute hash and store it in the last page of boot section
  utils.sha256_compute(buffNvmData,hashOffset)

  rowStartAddr = NVMCTRL_ROW_SIZE*(hashOffset / NVMCTRL_ROW_SIZE)
  programRow(rowStartAddr,  buffNvmData, rowStartAddr - FLASH_ADDR)



dsuAddress = 0x41002100 # external address range to bypass security filter
BCC = 0x20 # bootrom communication channel
STATUSA = 1
STATUSB = 2
CRSTEXTBIT = 2 # CRSTEXT bit in STATUSA
BREXTBIT = 0x20 # BREXT bit in STATUSA

DEBUGGER_CMD_INIT = 0x55 #,    /**< Initiate communication to enter trap functions */
DEBUGGER_CMD_EXIT = 0xAA #,    /**< Goto exit function */

def isNvmReady():
  OFFSET_INTFLAG_2802 = 0x14
  intReg = dap.ReadD8(nvmCtrl + OFFSET_INTFLAG_2802)
  isReady = 0 != (intReg & 1)
  if not (intReg & 0xfe): # if no ERROR bit is set 
    return isReady
  # clear error bits in INTFLAG
  dap.WriteD8(nvmCtrl + OFFSET_INTFLAG_2802, 1, 2 |4 |8 | 16 | 32 | 64);
  raise "NVMctrl reports an error" 


def CLEAR_BREXT():
    dap.WriteD8(dsuAddress + STATUSA, BREXTBIT) # clear brext so future resets dont go in interactive mode

def CLEAR_CRSTEXT():
    dap.WriteD8(dsuAddress + STATUSA, CRSTEXTBIT) # clear brext so future resets dont go in interactive mode

def SEND_CMD_EXIT():
    dap.WriteD32(dsuAddress + BCC, 0x44424700 | DEBUGGER_CMD_EXIT)

def READ_ROM_STATUS():
    return dap.ReadD32(dsuAddress + BCC + 4)

def  ExitResetExtensionL10():
    reply = 0
    statusa = dap.ReadD8(dsuAddress + STATUSA) # debug
    if 0 == (statusa & CRSTEXTBIT):
        log.error("SAML1x - could not enter reset extension")
        return False

    CLEAR_CRSTEXT() #  ROM starts running after clearing reset extension
    time.sleep(0.005)
    reply = 0
    if (dap.ReadD8(dsuAddress+STATUSB) & 0x80):
        reply =  READ_ROM_STATUS()
    if reply != 0:
        print "User page validation failure with error code %x", reply & 0xff
        raise "Page validation"
    SEND_CMD_EXIT()

    # after cmdexit , BOOTROM does boot validation, which may take up to 500msec
    # after which it enters the park loop and can be halted, if bootldr verify ok
    for  i in range(0,9):
        if 0 != (dap.ReadD8(dsuAddress + STATUSB) & 0x80) :
            reply = READ_ROM_STATUS()
            if reply != 0xEC000039:
                log.error ("Boot validation failed with error code  {}".format(reply&0xff))
                raise "Boot validation"
            break

    halt_target() # halt it
    if is_running() :
        LOG_INFO("l11", "Could not halt L11 after exiting reset extension")
        return false;

    CLEAR_BREXT() #clear brext so future resets dont go in interactive mode
    return True

DSU_STATUSB_BCCD0 = 1 << 6

dsuAddress = 0x41002100  # external address range to bypass security filter
BCC = 0x20               # bootrom communication channel

def WriteBootRomPollingL11(data, nbdata, timeout):
    for i in range(0,nbdata):
        dap.WriteD32(dsuAddress + BCC, data[i])
        while timeout > 0 :
            u8regval = dap.ReadD8(dsuAddress + 2) # read statusb
            if 0 == (u8regval & DSU_STATUSB_BCCD0):  # break if BCC was read
                break
            time.sleep(0.001)
            timeout = timeout - 1
        if timeout == 0 :
            return 1
    return 0


def READ_ROM_STATUS():
    return dap.ReadD32(dsuAddress + BCC + 4)

def SamL10Chiperase(deviceName, key ,ceMode):
    DEBUGGER_CMD_INIT = 0x55 # Initiate communication to enter trap functions
    DEBUGGER_CMD_EXIT = 0xAA # Goto exit function
    DEBUGGER_CMD_CE0 = 0xE0  # SECEN0 Chip erase
    L10_DEBUGGER_CMD_CE = 0xe3
    SIG_COMM = 0xec000020
    SIG_CMD_SUCCESS = 0xec000021
    SIG_CMD_VALID  = 0xec000024
    SIG_CMD_INVALID= 0xec000025
    SIG_BOOT_OK = 0xEC000039
    STATUSA = 1
    STATUSB = 2
    CRSTEXTMASK = 2 #CRSTEXT bit in STATUSA
    statusa = dap.ReadD8(dsuAddress + STATUSA)
    if 0 == (statusa & CRSTEXTMASK):
        raise  "SAM L1x could not enter reset extension. Please check the reset line is connected to debugger."

    dap.WriteD8(dsuAddress + STATUSA, CRSTEXTMASK)
    time.sleep(0.005) # // wait for device validation
    errCode = 0
    if 0 != (dap.ReadD8(dsuAddress + STATUSB) & 0x80) :
        errCode = READ_ROM_STATUS()

    if ceMode == L11SDAL0  or ceMode == L11SDAL1 :
        if errCode != 0:
            raise "SAML1x - SDAL failed to boot. Error code %x"
        # exit bootrom, without releasing brext, i.e. park mode
        dap.WriteD32(dsuAddress + BCC, 0x44424700 | DEBUGGER_CMD_EXIT)
        halt_target()
        ### todo device->specialOperation(stat, ceMode == IDeviceContext::L11SDAL0 ? IDeviceContext::OPERATION_SECURE_FLASH : IDeviceContext::OPERATION_SECURE_MIX_FLASH);
        reset_target()
        return

    if errCode != 0 :
        log.info( "SAML1x - SDAL failed to boot. Error code {}".format(errCode)) # log the error, but proceed with chip erase

    dap.WriteD32(dsuAddress + BCC, 0x44424700 | DEBUGGER_CMD_INIT)
    reply = READ_ROM_STATUS()
    if (errCode == 0 and reply != SIG_COMM) :
        raise  "SAM L1x chip erase failed to enter command loop." # shouldnt happen

    if (ceMode != CHIP_ERASE and (ceMode < L11CHIPERASE0 or ceMode > L11CHIPERASE2)) :
        raise  "SAM L1x chip erase failed (invalid mode)."
    if ceMode == 0 :
        ceMode = L10_DEBUGGER_CMD_CE
    else:
        ceMode = DEBUGGER_CMD_CE0 + ceMode - L11CHIPERASE0
    dap.WriteD32(dsuAddress + BCC, 0x44424700 | ceMode)
    reply = READ_ROM_STATUS()
    if reply != SIG_CMD_VALID:
        log.info("SAML1x - chip erase failed because bootrom did not accept chip erase command")
        raise "SAM L1x chip erase failed (cmd error)"

    if (ceMode != L10_DEBUGGER_CMD_CE):
        decodedkey = map(int, key.split(","))
        key = [0,0,0,0]
        for k in range(0,4):
            for b in range(0,4):
                key[k] = key[k] | (decodedkey[k*4 + b] << (b*8))
        WriteBootRomPollingL11(key, 4,100)

    for j in range(0,20):
        reply = READ_ROM_STATUS()
        if reply != SIG_CMD_VALID and reply != 0 :
            break
        time.sleep(1.0)
    if reply != SIG_CMD_SUCCESS :
        log.info( "SAML1x - chip erase failed - error {}".format(reply))
        raise "SAM L1x chip erase failed error";
    else :
        log.info("SAML1x - chip erase done")
    #reset
    resetExtension()
    dap.Connect(True,8000000L)
    ExitResetExtensionL10()


def findNvmCtrl():
    global nvmCtrl
    if nvmCtrl != 0:
          return
    bSecAlias = False
    secEn = dap.ReadD32(dsuAddress + 0x18)  >> 16
    secEn = 3 == (secEn & 0x1f)
    dal = 3 & dap.ReadD8(dsuAddress + 2)
    if dal == 1 :
      #In DAL=1, use NS access to NS alias
      bNonSecAccess = 1
    else:
      #In DAL=0,2, use S access to S alias when SECEN=1, else target NS alias
      bSecAlias = secEn == 1
      bNonSecAccess = 0
    if bSecAlias :
      nvmCtrl = 0x41005000
    else:
      nvmCtrl = 0x41004000


def writeCfgPage(address, data, nBytes):
  pageCopy = bytearray(data)
  NVMCTRL_OTP1 = 0x00806000 #  (NVMCTRL) OTP1 Base Address 
  NVMCTRL_AUX1_ADDR = 0x00806000 # (NVMCTRL) AUX1 Base Address 
  NVMCTRL_OTP1_SIZE = 8 # (NVMCTRL) OTP1 Size 
  NVMCTRL_USER = 0x00804000 # (NVMCTRL) USER Base Address
  NVMCTRL_BOCOR_ADDR = 0x0080C000 # (NVMCTRL) USER Base Address 

  if address == NVMCTRL_USER:		# USER1+USER2+USER3/2 CRC area (part of USER)
      FUSES_IDAU_AS_ADDR = 0x00804008
      BOOTROM_CRC_USER1_USER2_LENGTH = 0x14 + 0x4
      FUSES_BOOTROM_USERCRC_ADDR = 0x0080401C
      crc = utils.crc32(pageCopy,FUSES_IDAU_AS_ADDR - NVMCTRL_USER, BOOTROM_CRC_USER1_USER2_LENGTH - 4)
      crc = crc ^ 0xFFFFFFFF

      pageCopy[(FUSES_BOOTROM_USERCRC_ADDR - NVMCTRL_USER) + 0] = crc & 255 # uncrc.u8crctab[0]
      pageCopy[(FUSES_BOOTROM_USERCRC_ADDR - NVMCTRL_USER) + 1] = (crc >> 8) & 255 #uncrc.u8crctab[1];
      pageCopy[(FUSES_BOOTROM_USERCRC_ADDR - NVMCTRL_USER) + 2] = (crc >> 16) & 255
      pageCopy[(FUSES_BOOTROM_USERCRC_ADDR - NVMCTRL_USER) + 3] = (crc >> 24) & 255

  if address != NVMCTRL_BOCOR_ADDR:	
    eraseRow(address)
    writeRow(address,pageCopy,0)
    return
  #Handle changes in the BOCOR row, computing CRC and hash and boothash if needed 
  # BOCOR first doubleword CRC area
  crc = utils.crc32(pageCopy,0,8)
  crc = crc ^ 0xFFFFFFFF

  pageCopy[8 + 0] = (crc >> 0) & 255
  pageCopy[8 + 1] = (crc >> 8) & 255
  pageCopy[8 + 2] = (crc >> 16) & 255
  pageCopy[8 + 3] = (crc >> 32) & 255

  #Perform SHA on DW0, [DW8 .. DW19] and place the computed hash at BOCORHASH addr
  bHashWithBootkey = 0
  utils.sha256_reset()
  # Check whether bootkey is part of hash 
  FUSES_BOOTROM_BOOTOPT = 24
  u8bootopt = (pageCopy[FUSES_BOOTROM_BOOTOPT / 8] & 0x0F) & 0x03
  if u8bootopt > 1 :
    # If SHA-256 with BOOTKEY is specified, the SHA hash calculation begins with a
    # virtual 512-bit chunk, consisting of BOOTKEY from BOCOR replicated twice
    bHashWithBootkey = 1
    FUSES_BOOTROM_BOOTKEY = 640/8
    FUSES_BOOTROM_BOOTKEYSIZE = (896-640)/8
    utils.sha256_update(pageCopy,FUSES_BOOTROM_BOOTKEY, FUSES_BOOTROM_BOOTKEYSIZE)
    utils.sha256_update(pageCopy,FUSES_BOOTROM_BOOTKEY, FUSES_BOOTROM_BOOTKEYSIZE)

  # add the BOCOR data
  utils.sha256_update(pageCopy, 0, 0x100 - 0x20)
  FUSES_BOOTROM_BOCORHASH = 1792/8
  #finalize sha and store it in pageCopy
  utils.sha256_compute(pageCopy, FUSES_BOOTROM_BOCORHASH)
  eraseRow(address)
  writeRow(address, pageCopy, 0)

  if u8bootopt == 0:
    return

  IDAU_GRANULARITY_ANSC     = 0x20     # Application Non-Secure Callable region granularity
  IDAU_GRANULARITY_AS       = 0x100    # Application Secure region granularity
  IDAU_GRANULARITY_BNSC     = 0x20     # Boot Flash Non-Secure Callable region granularity
  IDAU_GRANULARITY_BOOTPROT = 0x100    # BOOTPROT region granularity
  IDAU_GRANULARITY_BS       = 0x100    # Boot Flash Secure region granularity
  IDAU_GRANULARITY_DS       = 0x100    # DS region granularity
  IDAU_GRANULARITY_RS       = 0x80     # RAM Secure region granularity

  idauBootprotSize = getFuse(pageCopy, 32, 39)*IDAU_GRANULARITY_BOOTPROT
  idauBsSize = getFuse(pageCopy, 8, 15)*IDAU_GRANULARITY_BS
  idauBnscSize = getFuse(pageCopy, 16, 21)*IDAU_GRANULARITY_BNSC

  if (idauBootprotSize >= idauBsSize and idauBsSize-idauBnscSize >= 0x100):
    log.log(LEVEL_INFO,"Configured sizes : bootprot=0x%x, bs=0x%x, bnsc=0x%x , bootopt=%x\n" % (idauBootprotSize, idauBsSize, idauBnscSize, u8bootopt))
    AddBootHashL11(idauBsSize, idauBnscSize, u8bootopt)
  else:
    raise "BOOTPROT region too small or BNSC too small"


