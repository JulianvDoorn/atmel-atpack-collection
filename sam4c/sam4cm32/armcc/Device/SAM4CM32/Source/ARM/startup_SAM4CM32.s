;/*****************************************************************************
; * @file     startup_SAM4CM32.s
; * @brief    CMSIS Cortex-M4 Core Device Startup File for
; *           Atmel SAM4CM32 Device Series
; * @version  V1.00
; * @date     13. March 2014
; *
; * @note
; * Copyright (C) 2014 ARM Limited. All rights reserved.
; *
; * @par
; * ARM Limited (ARM) is supplying this software for use with Cortex-M
; * processor based microcontrollers.  This file can be freely distributed
; * within development tools that are supporting such ARM based processors.
; *
; * @par
; * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
; * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
; * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
; * ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
; * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
; *
; ******************************************************************************/
;/*
;//-------- <<< Use Configuration Wizard in Context Menu >>> ------------------
;*/


; <h> Stack Configuration
;   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Stack_Size      EQU     0x00000200

                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Heap_Size       EQU     0x00000200

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit


                PRESERVE8
                THUMB


; Vector Table Mapped to Address 0 at Reset

                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors
                EXPORT  __Vectors_End
                EXPORT  __Vectors_Size

__Vectors       DCD     __initial_sp              ;    Top of Stack
                DCD     Reset_Handler             ;    Reset Handler
                DCD     NMI_Handler               ;    NMI Handler
                DCD     HardFault_Handler         ;    Hard Fault Handler
                DCD     MemManage_Handler         ;    MPU Fault Handler
                DCD     BusFault_Handler          ;    Bus Fault Handler
                DCD     UsageFault_Handler        ;    Usage Fault Handler
                DCD     0                         ;    Reserved
                DCD     0                         ;    Reserved
                DCD     0                         ;    Reserved
                DCD     0                         ;    Reserved
                DCD     SVC_Handler               ;    SVCall Handler
                DCD     DebugMon_Handler          ;    Debug Monitor Handler
                DCD     0                         ;    Reserved
                DCD     PendSV_Handler            ;    PendSV Handler
                DCD     SysTick_Handler           ;    SysTick Handler

                ; External Interrupts
                DCD     SUPC_Handler              ;  0 Supply Controller
                DCD     RSTC_Handler              ;  1 Reset Controller
                DCD     RTC_Handler               ;  2 Real Time Clock
                DCD     RTT_Handler               ;  3 Real Time Timer
                DCD     WDT_Handler               ;  4 Watchdog Timer
                DCD     PMC_Handler               ;  5 Power Management Controller
                DCD     EFC0_Handler              ;  6 Enhanced Embedded Flash Controller 0
                DCD     EFC1_Handler              ;  7 Enhanced Embedded Flash Controller 1
                DCD     UART0_Handler             ;  8 UART 0
                DCD     0                         ;  9 Reserved
                DCD     0                         ; 10 Reserved
                DCD     PIOA_Handler              ; 11 Parallel I/O Controller A
                DCD     PIOB_Handler              ; 12 Parallel I/O Controller B
                DCD     0                         ; 13 Reserved
                DCD     USART0_Handler            ; 14 USART 0
                DCD     USART1_Handler            ; 15 USART 1
                DCD     USART2_Handler            ; 16 USART 2
                DCD     USART3_Handler            ; 17 USART 3
                DCD     0                         ; 18 Reserved
                DCD     TWI0_Handler              ; 19 Two Wire Interface 0
                DCD     TWI1_Handler              ; 20 Two Wire Interface 1
                DCD     SPI0_Handler              ; 21 Serial Peripheral Interface 0
                DCD     0                         ; 22 Reserved
                DCD     TC0_Handler               ; 23 Timer/Counter 0
                DCD     TC1_Handler               ; 24 Timer/Counter 1
                DCD     TC2_Handler               ; 25 Timer/Counter 2
                DCD     TC3_Handler               ; 26 Timer/Counter 3
                DCD     TC4_Handler               ; 27 Timer/Counter 4
                DCD     TC5_Handler               ; 28 Timer/Counter 5
                DCD     ADC_Handler               ; 29 Analog To Digital Converter
                DCD     ARM1_Handler              ; 30 FPU signals : FPIXC, FPOFC, FPUFC, FPIOC, FPDZC, FPIDC, FPIXC
                DCD     IPC0_Handler              ; 31 Interprocessor communication 0
                DCD     SLCDC_Handler             ; 32 Segment LCD Controller
                DCD     TRNG_Handler              ; 33 True Random Generator
                DCD     ICM_Handler               ; 34 Integrity Check Module
                DCD     CPKCC_Handler             ; 35 Public Key Cryptography Controller
                DCD     AES_Handler               ; 36 Advanced Enhanced Standard
                DCD     PIOC_Handler              ; 37 Parallel I/O Controller C
                DCD     UART1_Handler             ; 38 UART 1
                DCD     IPC1_Handler              ; 39 Interprocessor communication 1
                DCD     SPI1_Handler              ; 40 Serial Peripheral interface 1
                DCD     PWM_Handler               ; 41 Pulse Width Modulation
__Vectors_End

__Vectors_Size  EQU     __Vectors_End - __Vectors

                AREA    |.text|, CODE, READONLY


; Reset Handler

Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main
                LDR     R0, =SystemInit
                BLX     R0
                LDR     R0, =__main
                BX      R0
                ENDP


; Dummy Exception Handlers (infinite loops which can be modified)

NMI_Handler     PROC
                EXPORT  NMI_Handler               [WEAK]
                B       .
                ENDP
HardFault_Handler\
                PROC
                EXPORT  HardFault_Handler         [WEAK]
                B       .
                ENDP
MemManage_Handler\
                PROC
                EXPORT  MemManage_Handler         [WEAK]
                B       .
                ENDP
BusFault_Handler\
                PROC
                EXPORT  BusFault_Handler          [WEAK]
                B       .
                ENDP
UsageFault_Handler\
                PROC
                EXPORT  UsageFault_Handler        [WEAK]
                B       .
                ENDP
SVC_Handler     PROC
                EXPORT  SVC_Handler               [WEAK]
                B       .
                ENDP
DebugMon_Handler\
                PROC
                EXPORT  DebugMon_Handler          [WEAK]
                B       .
                ENDP
PendSV_Handler  PROC
                EXPORT  PendSV_Handler            [WEAK]
                B       .
                ENDP
SysTick_Handler PROC
                EXPORT  SysTick_Handler           [WEAK]
                B       .
                ENDP

Default_Handler PROC

                EXPORT  SUPC_Handler              [WEAK]
                EXPORT  RSTC_Handler              [WEAK]
                EXPORT  RTC_Handler               [WEAK]
                EXPORT  RTT_Handler               [WEAK]
                EXPORT  WDT_Handler               [WEAK]
                EXPORT  PMC_Handler               [WEAK]
                EXPORT  EFC0_Handler              [WEAK]
                EXPORT  EFC1_Handler              [WEAK]
                EXPORT  UART0_Handler             [WEAK]
                EXPORT  PIOA_Handler              [WEAK]
                EXPORT  PIOB_Handler              [WEAK]
                EXPORT  USART0_Handler            [WEAK]
                EXPORT  USART1_Handler            [WEAK]
                EXPORT  USART2_Handler            [WEAK]
                EXPORT  USART3_Handler            [WEAK]
                EXPORT  TWI0_Handler              [WEAK]
                EXPORT  TWI1_Handler              [WEAK]
                EXPORT  SPI0_Handler              [WEAK]
                EXPORT  TC0_Handler               [WEAK]
                EXPORT  TC1_Handler               [WEAK]
                EXPORT  TC2_Handler               [WEAK]
                EXPORT  TC3_Handler               [WEAK]
                EXPORT  TC4_Handler               [WEAK]
                EXPORT  TC5_Handler               [WEAK]
                EXPORT  ADC_Handler               [WEAK]
                EXPORT  ARM1_Handler              [WEAK]
                EXPORT  IPC0_Handler              [WEAK]
                EXPORT  SLCDC_Handler             [WEAK]
                EXPORT  TRNG_Handler              [WEAK]
                EXPORT  ICM_Handler               [WEAK]
                EXPORT  CPKCC_Handler             [WEAK]
                EXPORT  AES_Handler               [WEAK]
                EXPORT  PIOC_Handler              [WEAK]
                EXPORT  UART1_Handler             [WEAK]
                EXPORT  IPC1_Handler              [WEAK]
                EXPORT  SPI1_Handler              [WEAK]
                EXPORT  PWM_Handler               [WEAK]

SUPC_Handler
RSTC_Handler
RTC_Handler
RTT_Handler
WDT_Handler
PMC_Handler
EFC0_Handler
EFC1_Handler
UART0_Handler
PIOA_Handler
PIOB_Handler
USART0_Handler
USART1_Handler
USART2_Handler
USART3_Handler
TWI0_Handler
TWI1_Handler
SPI0_Handler
TC0_Handler
TC1_Handler
TC2_Handler
TC3_Handler
TC4_Handler
TC5_Handler
ADC_Handler
ARM1_Handler
IPC0_Handler
SLCDC_Handler
TRNG_Handler
ICM_Handler
CPKCC_Handler
AES_Handler
PIOC_Handler
UART1_Handler
IPC1_Handler
SPI1_Handler
PWM_Handler
                B       .
                ENDP


                ALIGN


; User Initial Stack & Heap

                IF      :DEF:__MICROLIB

                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit

                ELSE

                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap
__user_initial_stackheap

                LDR     R0, =  Heap_Mem
                LDR     R1, =(Stack_Mem + Stack_Size)
                LDR     R2, = (Heap_Mem +  Heap_Size)
                LDR     R3, = Stack_Mem
                BX      LR

                ALIGN

                ENDIF


                END
