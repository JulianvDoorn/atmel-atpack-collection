;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;*
;* Number            : AVR000
;* File Name         : A5787def.inc
;* Title             : Register/Bit Definitions for the ATA5787
;* Created           : 2017-11-21 16:21
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : ATA5787
;*
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and
;* Z have been assigned names XL - ZH. Highest RAM address for Internal
;* SRAM is also defined
;*
;*************************************************************************

#ifndef _A5787DEF_INC_
#define _A5787DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATA5787
#pragma AVRPART ADMIN PART_NAME ATA5787
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x94
.equ	SIGNATURE_002	= 0x6C

#pragma AVRPART CORE CORE_VERSION V3


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	TRCIDH	= 0x181 ; MEMORY MAPPED
.equ	TRCIDL	= 0x180 ; MEMORY MAPPED
.equ	TRCDR	= 0x17F ; MEMORY MAPPED
.equ	TRCCR	= 0x17E ; MEMORY MAPPED
.equ	LINDAT	= 0x17D ; MEMORY MAPPED
.equ	LINSEL	= 0x17C ; MEMORY MAPPED
.equ	LINIDR	= 0x17B ; MEMORY MAPPED
.equ	LINDLR	= 0x17A ; MEMORY MAPPED
.equ	LINBRRH	= 0x179 ; MEMORY MAPPED
.equ	LINBRRL	= 0x178 ; MEMORY MAPPED
.equ	LINBTR	= 0x177 ; MEMORY MAPPED
.equ	LINERR	= 0x176 ; MEMORY MAPPED
.equ	LINENIR	= 0x175 ; MEMORY MAPPED
.equ	LINSIR	= 0x174 ; MEMORY MAPPED
.equ	LINCR	= 0x173 ; MEMORY MAPPED
.equ	OCGATE	= 0x172 ; MEMORY MAPPED
.equ	OCCNT	= 0x171 ; MEMORY MAPPED
.equ	OCCR	= 0x170 ; MEMORY MAPPED
.equ	RSCOM	= 0x16F ; MEMORY MAPPED
.equ	RSHDV	= 0x16E ; MEMORY MAPPED
.equ	RSLDV	= 0x16D ; MEMORY MAPPED
.equ	RSIFG	= 0x16C ; MEMORY MAPPED
.equ	RSHSG	= 0x16B ; MEMORY MAPPED
.equ	EEST	= 0x16A ; MEMORY MAPPED
.equ	PGMST	= 0x169 ; MEMORY MAPPED
.equ	EECR2	= 0x168 ; MEMORY MAPPED
.equ	SFIR	= 0x167 ; MEMORY MAPPED
.equ	SFFR	= 0x166 ; MEMORY MAPPED
.equ	DBGSW	= 0x165 ; MEMORY MAPPED
.equ	DBENC	= 0x164 ; MEMORY MAPPED
.equ	DBENB	= 0x163 ; MEMORY MAPPED
.equ	DBTC	= 0x162 ; MEMORY MAPPED
.equ	DBCR	= 0x161 ; MEMORY MAPPED
.equ	RSSC	= 0x160 ; MEMORY MAPPED
.equ	RSSH	= 0x15F ; MEMORY MAPPED
.equ	RSSL	= 0x15E ; MEMORY MAPPED
.equ	RSSPK	= 0x15D ; MEMORY MAPPED
.equ	RSSAV	= 0x15C ; MEMORY MAPPED
.equ	IDS	= 0x15B ; MEMORY MAPPED
.equ	IDC	= 0x15A ; MEMORY MAPPED
.equ	IDB3	= 0x159 ; MEMORY MAPPED
.equ	IDB2	= 0x158 ; MEMORY MAPPED
.equ	IDB1	= 0x157 ; MEMORY MAPPED
.equ	IDB0	= 0x156 ; MEMORY MAPPED
.equ	CRCDOR	= 0x155 ; MEMORY MAPPED
.equ	CRCCR	= 0x154 ; MEMORY MAPPED
.equ	RXDSA	= 0x153 ; MEMORY MAPPED
.equ	RXCPHA	= 0x152 ; MEMORY MAPPED
.equ	RXCPLA	= 0x151 ; MEMORY MAPPED
.equ	RXCIHA	= 0x150 ; MEMORY MAPPED
.equ	RXCILA	= 0x14F ; MEMORY MAPPED
.equ	RXCSBA	= 0x14E ; MEMORY MAPPED
.equ	RXCRHA	= 0x14D ; MEMORY MAPPED
.equ	RXCRLA	= 0x14C ; MEMORY MAPPED
.equ	RXTLHA	= 0x14B ; MEMORY MAPPED
.equ	RXTLLA	= 0x14A ; MEMORY MAPPED
.equ	RXDSB	= 0x149 ; MEMORY MAPPED
.equ	RXCPHB	= 0x148 ; MEMORY MAPPED
.equ	RXCPLB	= 0x147 ; MEMORY MAPPED
.equ	RXCIHB	= 0x146 ; MEMORY MAPPED
.equ	RXCILB	= 0x145 ; MEMORY MAPPED
.equ	RXCSBB	= 0x144 ; MEMORY MAPPED
.equ	RXCRHB	= 0x143 ; MEMORY MAPPED
.equ	RXCRLB	= 0x142 ; MEMORY MAPPED
.equ	RXTLHB	= 0x141 ; MEMORY MAPPED
.equ	RXTLLB	= 0x140 ; MEMORY MAPPED
.equ	RXBC2	= 0x13F ; MEMORY MAPPED
.equ	RXBC1	= 0x13E ; MEMORY MAPPED
.equ	SSMFCR	= 0x12E ; MEMORY MAPPED
.equ	SOTTOB	= 0x12D ; MEMORY MAPPED
.equ	SOTTOA	= 0x12C ; MEMORY MAPPED
.equ	WCOTOB	= 0x12B ; MEMORY MAPPED
.equ	WCOTOA	= 0x12A ; MEMORY MAPPED
.equ	EOTC3B	= 0x129 ; MEMORY MAPPED
.equ	EOTC2B	= 0x128 ; MEMORY MAPPED
.equ	EOTC1B	= 0x127 ; MEMORY MAPPED
.equ	EOTC3A	= 0x126 ; MEMORY MAPPED
.equ	EOTC2A	= 0x125 ; MEMORY MAPPED
.equ	EOTC1A	= 0x124 ; MEMORY MAPPED
.equ	SOTC2B	= 0x123 ; MEMORY MAPPED
.equ	SOTC1B	= 0x122 ; MEMORY MAPPED
.equ	SOTC2A	= 0x121 ; MEMORY MAPPED
.equ	SOTC1A	= 0x120 ; MEMORY MAPPED
.equ	SPARE1	= 0x10D ; MEMORY MAPPED
.equ	FEBIA	= 0x10C ; MEMORY MAPPED
.equ	FEVCO	= 0x10B ; MEMORY MAPPED
.equ	FECR	= 0x10A ; MEMORY MAPPED
.equ	FETN4	= 0x109 ; MEMORY MAPPED
.equ	FEMS	= 0x108 ; MEMORY MAPPED
.equ	FEBT	= 0x107 ; MEMORY MAPPED
.equ	FEVCT	= 0x106 ; MEMORY MAPPED
.equ	FEAS	= 0x104 ; MEMORY MAPPED
.equ	FELNA	= 0x103 ; MEMORY MAPPED
.equ	FEEN2	= 0x102 ; MEMORY MAPPED
.equ	FEEN1	= 0x101 ; MEMORY MAPPED
.equ	FESR	= 0x100 ; MEMORY MAPPED
.equ	GTCR	= 0xFD ; MEMORY MAPPED
.equ	MSMCR4	= 0xFC ; MEMORY MAPPED
.equ	MSMCR3	= 0xFB ; MEMORY MAPPED
.equ	MSMCR2	= 0xFA ; MEMORY MAPPED
.equ	MSMCR1	= 0xF9 ; MEMORY MAPPED
.equ	SSMXSR	= 0xF8 ; MEMORY MAPPED
.equ	SSMSTR	= 0xF7 ; MEMORY MAPPED
.equ	MSMSTR	= 0xF6 ; MEMORY MAPPED
.equ	SSMIMR	= 0xF5 ; MEMORY MAPPED
.equ	SSMIFR	= 0xF4 ; MEMORY MAPPED
.equ	SSMSR	= 0xF3 ; MEMORY MAPPED
.equ	SSMRR	= 0xF2 ; MEMORY MAPPED
.equ	SSMFBR	= 0xF1 ; MEMORY MAPPED
.equ	SSMRCR	= 0xF0 ; MEMORY MAPPED
.equ	SSMCR	= 0xEF ; MEMORY MAPPED
.equ	SFC	= 0xEE ; MEMORY MAPPED
.equ	SFI	= 0xED ; MEMORY MAPPED
.equ	SFD	= 0xEC ; MEMORY MAPPED
.equ	SFRP	= 0xEB ; MEMORY MAPPED
.equ	SFWP	= 0xEA ; MEMORY MAPPED
.equ	SFL	= 0xE9 ; MEMORY MAPPED
.equ	SFS	= 0xE8 ; MEMORY MAPPED
.equ	DFC	= 0xE7 ; MEMORY MAPPED
.equ	DFI	= 0xE6 ; MEMORY MAPPED
.equ	DFD	= 0xE5 ; MEMORY MAPPED
.equ	DFRP	= 0xE4 ; MEMORY MAPPED
.equ	DFWP	= 0xE3 ; MEMORY MAPPED
.equ	DFL	= 0xE2 ; MEMORY MAPPED
.equ	DFTLH	= 0xE1 ; MEMORY MAPPED
.equ	DFTLL	= 0xE0 ; MEMORY MAPPED
.equ	DFS	= 0xDF ; MEMORY MAPPED
.equ	DCC2	= 0xDE ; MEMORY MAPPED
.equ	DCC1	= 0xDD ; MEMORY MAPPED
.equ	RCTUNE4	= 0xDC ; MEMORY MAPPED
.equ	CALRDY	= 0xDA ; MEMORY MAPPED
.equ	DCTST	= 0xD9 ; MEMORY MAPPED
.equ	DCCAL3	= 0xD8 ; MEMORY MAPPED
.equ	DCCAL2	= 0xD7 ; MEMORY MAPPED
.equ	DCCAL1	= 0xD6 ; MEMORY MAPPED
.equ	SUPCA4	= 0xD5 ; MEMORY MAPPED
.equ	SUPCA3	= 0xD4 ; MEMORY MAPPED
.equ	SUPCA2	= 0xD3 ; MEMORY MAPPED
.equ	SUPCA1	= 0xD2 ; MEMORY MAPPED
.equ	SUPCR	= 0xD1 ; MEMORY MAPPED
.equ	SUPFR	= 0xD0 ; MEMORY MAPPED
.equ	CMOCR	= 0xCF ; MEMORY MAPPED
.equ	CMSR	= 0xCE ; MEMORY MAPPED
.equ	FRCCAL	= 0xCD ; MEMORY MAPPED
.equ	SRCCAL	= 0xCC ; MEMORY MAPPED
.equ	XFUSE	= 0xCB ; MEMORY MAPPED
.equ	CLKOCR	= 0xCA ; MEMORY MAPPED
.equ	CLKOD	= 0xC9 ; MEMORY MAPPED
.equ	WUP4A	= 0xC8 ; MEMORY MAPPED
.equ	WUP3A	= 0xC7 ; MEMORY MAPPED
.equ	WUP2A	= 0xC6 ; MEMORY MAPPED
.equ	WUP1A	= 0xC5 ; MEMORY MAPPED
.equ	SFID4A	= 0xC4 ; MEMORY MAPPED
.equ	SFID3A	= 0xC3 ; MEMORY MAPPED
.equ	SFID2A	= 0xC2 ; MEMORY MAPPED
.equ	SFID1A	= 0xC1 ; MEMORY MAPPED
.equ	WUPLA	= 0xC0 ; MEMORY MAPPED
.equ	WUPTA	= 0xBF ; MEMORY MAPPED
.equ	SFIDLA	= 0xBE ; MEMORY MAPPED
.equ	SFIDCA	= 0xBD ; MEMORY MAPPED
.equ	WUP4B	= 0xBC ; MEMORY MAPPED
.equ	WUP3B	= 0xBB ; MEMORY MAPPED
.equ	WUP2B	= 0xBA ; MEMORY MAPPED
.equ	WUP1B	= 0xB9 ; MEMORY MAPPED
.equ	SFID4B	= 0xB8 ; MEMORY MAPPED
.equ	SFID3B	= 0xB7 ; MEMORY MAPPED
.equ	SFID2B	= 0xB6 ; MEMORY MAPPED
.equ	SFID1B	= 0xB5 ; MEMORY MAPPED
.equ	WUPLB	= 0xB4 ; MEMORY MAPPED
.equ	WUPTB	= 0xB3 ; MEMORY MAPPED
.equ	SFIDLB	= 0xB2 ; MEMORY MAPPED
.equ	SFIDCB	= 0xB1 ; MEMORY MAPPED
.equ	CHDN	= 0xB0 ; MEMORY MAPPED
.equ	CHCR	= 0xAF ; MEMORY MAPPED
.equ	DMDN	= 0xAE ; MEMORY MAPPED
.equ	DMCRA	= 0xAD ; MEMORY MAPPED
.equ	DMCRB	= 0xAC ; MEMORY MAPPED
.equ	DMCDA	= 0xAB ; MEMORY MAPPED
.equ	DMCDB	= 0xAA ; MEMORY MAPPED
.equ	DMMA	= 0xA9 ; MEMORY MAPPED
.equ	DMMB	= 0xA8 ; MEMORY MAPPED
.equ	DMSRA	= 0xA7 ; MEMORY MAPPED
.equ	DMSRB	= 0xA6 ; MEMORY MAPPED
.equ	DMPCA	= 0xA5 ; MEMORY MAPPED
.equ	DMPCB	= 0xA4 ; MEMORY MAPPED
.equ	DMPC	= 0xA3 ; MEMORY MAPPED
.equ	DMPATA	= 0xA2 ; MEMORY MAPPED
.equ	DMPATB	= 0xA1 ; MEMORY MAPPED
.equ	RXFOA	= 0xA0 ; MEMORY MAPPED
.equ	RXFOB	= 0x9F ; MEMORY MAPPED
.equ	SYCA	= 0x9E ; MEMORY MAPPED
.equ	SYCB	= 0x9D ; MEMORY MAPPED
.equ	TEMPH	= 0x9C ; MEMORY MAPPED
.equ	TEMPL	= 0x9B ; MEMORY MAPPED
.equ	RDOCR	= 0x99 ; MEMORY MAPPED
.equ	RDSIMR	= 0x98 ; MEMORY MAPPED
.equ	TESRA	= 0x96 ; MEMORY MAPPED
.equ	TESRB	= 0x95 ; MEMORY MAPPED
.equ	SOTCA	= 0x94 ; MEMORY MAPPED
.equ	SOTCB	= 0x93 ; MEMORY MAPPED
.equ	SOTSA	= 0x92 ; MEMORY MAPPED
.equ	SOTSB	= 0x91 ; MEMORY MAPPED
.equ	GTCCR	= 0x90 ; MEMORY MAPPED
.equ	T5IMR	= 0x8F ; MEMORY MAPPED
.equ	T5CNTH	= 0x8E ; MEMORY MAPPED
.equ	T5CNTL	= 0x8D ; MEMORY MAPPED
.equ	T5CCR	= 0x8C ; MEMORY MAPPED
.equ	T5OCRH	= 0x8B ; MEMORY MAPPED
.equ	T5OCRL	= 0x8A ; MEMORY MAPPED
.equ	T4IMR	= 0x88 ; MEMORY MAPPED
.equ	T4MRB	= 0x87 ; MEMORY MAPPED
.equ	T4MRA	= 0x86 ; MEMORY MAPPED
.equ	T4ICRH	= 0x85 ; MEMORY MAPPED
.equ	T4ICRL	= 0x84 ; MEMORY MAPPED
.equ	T4CORH	= 0x83 ; MEMORY MAPPED
.equ	T4CORL	= 0x82 ; MEMORY MAPPED
.equ	T4CNTH	= 0x81 ; MEMORY MAPPED
.equ	T4CNTL	= 0x80 ; MEMORY MAPPED
.equ	T3IMR	= 0x7F ; MEMORY MAPPED
.equ	T3MRB	= 0x7E ; MEMORY MAPPED
.equ	T3MRA	= 0x7D ; MEMORY MAPPED
.equ	T3ICRH	= 0x7C ; MEMORY MAPPED
.equ	T3ICRL	= 0x7B ; MEMORY MAPPED
.equ	T3CORH	= 0x7A ; MEMORY MAPPED
.equ	T3CORL	= 0x79 ; MEMORY MAPPED
.equ	T3CNTH	= 0x78 ; MEMORY MAPPED
.equ	T3CNTL	= 0x77 ; MEMORY MAPPED
.equ	T2IMR	= 0x76 ; MEMORY MAPPED
.equ	T2MR	= 0x75 ; MEMORY MAPPED
.equ	T2COR	= 0x74 ; MEMORY MAPPED
.equ	T2CNT	= 0x73 ; MEMORY MAPPED
.equ	T1IMR	= 0x72 ; MEMORY MAPPED
.equ	T1MR	= 0x71 ; MEMORY MAPPED
.equ	T1COR	= 0x70 ; MEMORY MAPPED
.equ	T1CNT	= 0x6F ; MEMORY MAPPED
.equ	WDTCR	= 0x6E ; MEMORY MAPPED
.equ	PCMSK1	= 0x6D ; MEMORY MAPPED
.equ	PCMSK0	= 0x6C ; MEMORY MAPPED
.equ	EICRA	= 0x6B ; MEMORY MAPPED
.equ	FFREQ2H	= 0x69 ; MEMORY MAPPED
.equ	FFREQ2M	= 0x68 ; MEMORY MAPPED
.equ	FFREQ2L	= 0x67 ; MEMORY MAPPED
.equ	FFREQ1H	= 0x66 ; MEMORY MAPPED
.equ	FFREQ1M	= 0x65 ; MEMORY MAPPED
.equ	FFREQ1L	= 0x64 ; MEMORY MAPPED
.equ	FSEN	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	CLPR	= 0x3C ; 
.equ	CMIMR	= 0x3B ; 
.equ	CMCR	= 0x3A ; 
.equ	SMCR	= 0x39 ; 
.equ	SPMCSR	= 0x37 ; 
.equ	EOTCB	= 0x36 ; 
.equ	EOTSB	= 0x35 ; 
.equ	EOTCA	= 0x34 ; 
.equ	EOTSA	= 0x33 ; 
.equ	RDCR	= 0x32 ; 
.equ	DWDR	= 0x31 ; 
.equ	T0IFR	= 0x2F ; 
.equ	SPDR	= 0x2E ; 
.equ	SPSR	= 0x2D ; 
.equ	SPCR	= 0x2C ; 
.equ	MCUSR	= 0x2B ; 
.equ	VMCSR	= 0x2A ; 
.equ	CRCDIR	= 0x29 ; 
.equ	EIFR	= 0x28 ; 
.equ	EIMSK	= 0x27 ; 
.equ	PCICR	= 0x26 ; 
.equ	GPIOR2	= 0x25 ; 
.equ	GPIOR1	= 0x24 ; 
.equ	EEPR	= 0x23 ; 
.equ	EEARH	= 0x22 ; 
.equ	EEARL	= 0x21 ; 
.equ	EEDR	= 0x20 ; 
.equ	EECR	= 0x1F ; 
.equ	GPIOR6	= 0x1E ; 
.equ	GPIOR5	= 0x1D ; 
.equ	GPIOR4	= 0x1C ; 
.equ	GPIOR3	= 0x1B ; 
.equ	GPIOR0	= 0x1A ; 
.equ	T5IFR	= 0x19 ; 
.equ	T4IFR	= 0x18 ; 
.equ	T3IFR	= 0x17 ; 
.equ	T2IFR	= 0x16 ; 
.equ	T1IFR	= 0x15 ; 
.equ	T4CR	= 0x14 ; 
.equ	T3CR	= 0x13 ; 
.equ	T2CR	= 0x12 ; 
.equ	T1CR	= 0x11 ; 
.equ	T0CR	= 0x10 ; 
.equ	PCIFR	= 0x0F ; 
.equ	MCUCR	= 0x0E ; 
.equ	RDSIFR	= 0x0D ; 
.equ	PORTC	= 0x0A ; 
.equ	DDRC	= 0x09 ; 
.equ	PINC	= 0x08 ; 
.equ	PORTB	= 0x07 ; 
.equ	DDRB	= 0x06 ; 
.equ	PINB	= 0x05 ; 
.equ	RDPR	= 0x04 ; 
.equ	PRR2	= 0x03 ; 
.equ	PRR1	= 0x02 ; 
.equ	PRR0	= 0x01 ; 


; ***** BIT DEFINITIONS **************************************************

; ***** CALIB *****************
; CALRDY - Calibration Ready Signature
.equ	CALRDY0	= 0 ; Calibration Ready Signature Bit 0
.equ	CALRDY1	= 1 ; Calibration Ready Signature Bit 1
.equ	CALRDY2	= 2 ; Calibration Ready Signature Bit 2
.equ	CALRDY3	= 3 ; Calibration Ready Signature Bit 3
.equ	CALRDY4	= 4 ; Calibration Ready Signature Bit 4
.equ	CALRDY5	= 5 ; Calibration Ready Signature Bit 5
.equ	CALRDY6	= 6 ; Calibration Ready Signature Bit 6
.equ	CALRDY7	= 7 ; Calibration Ready Signature Bit 7

; FRCCAL - Fast RC Oscillator Calibration
.equ	FRCCAL0	= 0 ; Fast RC Oscillator Calibration
.equ	FRCCAL1	= 1 ; Fast RC Oscillator Calibration
.equ	FRCCAL2	= 2 ; Fast RC Oscillator Calibration
.equ	FRCCAL3	= 3 ; Fast RC Oscillator Calibration
.equ	FRCCAL4	= 4 ; Fast RC Oscillator Calibration
.equ	FRCTC	= 5 ; Fast RC Oscillator Temperature Compensation

; SRCCAL - Slow RC Oscillator Calibration
.equ	SRCCAL0	= 0 ; Slow RC Oscillator Calibration
.equ	SRCCAL1	= 1 ; Slow RC Oscillator Calibration
.equ	SRCCAL2	= 2 ; Slow RC Oscillator Calibration
.equ	SRCCAL3	= 3 ; Slow RC Oscillator Calibration
.equ	SRCCAL4	= 4 ; Slow RC Oscillator Calibration
.equ	SRCCAL5	= 5 ; Slow RC Oscillator Calibration
.equ	SRCTC0	= 6 ; Slow RC Oscillator Temperature Compensation
.equ	SRCTC1	= 7 ; Slow RC Oscillator Temperature Compensation

; SUPCA1 - Supply Calibration 1
.equ	DVCAL0	= 0 ; DVCC Regulator Voltage Calibration
.equ	DVCAL1	= 1 ; DVCC Regulator Voltage Calibration
.equ	VVCAL0	= 2 ; VMEM Regulator Voltage Calibration
.equ	VVCAL1	= 3 ; VMEM Regulator Voltage Calibration
.equ	AVCAL0	= 4 ; AVCC Regulator Voltage Calibration
.equ	AVCAL1	= 5 ; AVCC Regulator Voltage Calibration

; SUPCA2 - Supply Calibration 2
.equ	BGCAL0	= 0 ; Band Gap Calibration
.equ	BGCAL1	= 1 ; Band Gap Calibration
.equ	BGCAL2	= 2 ; Band Gap Calibration
.equ	BGCAL3	= 3 ; Band Gap Calibration
.equ	BGCAL4	= 4 ; Band Gap Calibration
.equ	BGCAL5	= 5 ; Band Gap Calibration

; SUPCA3 - Supply Calibration 3
.equ	DMCAL0	= 0 ; DVCC Monitor Calibration
.equ	DMCAL1	= 1 ; DVCC Monitor Calibration
.equ	VMCAL0	= 2 ; VMEM Monitor Calibration
.equ	VMCAL1	= 3 ; VMEM Monitor Calibration
.equ	AMCAL0	= 4 ; AVCC Monitor Calibration
.equ	AMCAL1	= 5 ; AVCC Monitor Calibration
.equ	VMOCAL0	= 6 ; Voltage Monitor Calibration
.equ	VMOCAL1	= 7 ; Voltage Monitor Calibration

; SUPCA4 - Supply Calibration 4
.equ	PTCAL0	= 0 ; Bandgap PTAT Calibration
.equ	PTCAL1	= 1 ; Bandgap PTAT Calibration
.equ	PTCAL2	= 2 ; Bandgap PTAT Calibration
.equ	PTCAL3	= 3 ; Bandgap PTAT Calibration
.equ	PTCAL4	= 4 ; Bandgap PTAT Calibration
.equ	PTCAL5	= 5 ; Bandgap PTAT Calibration
.equ	PTCAL6	= 6 ; Bandgap PTAT Calibration
.equ	PTCAL7	= 7 ; Bandgap PTAT Calibration

; XFUSE - XROW Fuse
.equ	FLPT0	= 0 ; Flash Memory Programming Time
.equ	FLPT1	= 1 ; Flash Memory Programming Time
.equ	E2PT0	= 2 ; EEPROM Programming Time
.equ	E2PT1	= 3 ; EEPROM Programming Time
.equ	NVPTE	= 4 ; NVM Variable Programming Time Enable
.equ	CKOUT	= 6 ; CP2 Output on Port ckout


; ***** CHFLT *****************
; CHCR - Channel Filter Configuration Register
.equ	BWM0	= 0 ; Bandwidth Mode
.equ	BWM1	= 1 ; Bandwidth Mode
.equ	BWM2	= 2 ; Bandwidth Mode
.equ	BWM3	= 3 ; Bandwidth Mode

; CHDN - Channel Filter Down Sampling Register
.equ	BBDN0	= 0 ; Baseband Filter Down Sampling Ratio
.equ	BBDN1	= 1 ; Baseband Filter Down Sampling Ratio
.equ	BBDN2	= 2 ; Baseband Filter Down Sampling Ratio
.equ	BBDN3	= 3 ; Baseband Filter Down Sampling Ratio
.equ	BBDN4	= 4 ; Baseband Filter Down Sampling Ratio
.equ	ADCDN	= 5 ; ADC Down Sampling Configuration


; ***** CLK *****************
; CLKOCR - Clock output control Register
.equ	CLKOS0	= 0 ; Clock Output Source
.equ	CLKOS1	= 1 ; Clock Output Source
.equ	CLKOEN	= 2 ; Clock Output Driver Enable

; CLKOD - Clock Output Divider
.equ	CLKOD0	= 0 ; Clock Output Divider Bit 0
.equ	CLKOD1	= 1 ; Clock Output Divider Bit 1
.equ	CLKOD2	= 2 ; Clock Output Divider Bit 2
.equ	CLKOD3	= 3 ; Clock Output Divider Bit 3
.equ	CLKOD4	= 4 ; Clock Output Divider Bit 4
.equ	CLKOD5	= 5 ; Clock Output Divider Bit 5
.equ	CLKOD6	= 6 ; Clock Output Divider Bit 6
.equ	CLKOD7	= 7 ; Clock Output Divider Bit 7

; CLPR - Clock Prescaler
.equ	CLKPS0	= 0 ; System Clock Prescaler Select
.equ	CLKPS1	= 1 ; System Clock Prescaler Select
.equ	CLKPS2	= 2 ; System Clock Prescaler Select
.equ	CLTPS0	= 3 ; Timer Clock Prescaler Select
.equ	CLTPS1	= 4 ; Timer Clock Prescaler Select
.equ	CLTPS2	= 5 ; Timer Clock Prescaler Select
.equ	CLPCE	= 7 ; Clock Prescaler Change Enable

; CMCR - Clock Management Control Register
.equ	CMM0	= 0 ; Clock Management Mode
.equ	CMM1	= 1 ; Clock Management Mode
.equ	CMM2	= 2 ; Clock Management Mode
.equ	CCS	= 3 ; Core Clock Select
.equ	CMONEN	= 6 ; Clock Monitor Enable
.equ	CMCCE	= 7 ; Clock Management Control Change Enable

; CMIMR - Clock Management Interrupt Mask Register
.equ	ECIE	= 0 ; External Clock Interrupt Enable

; CMOCR - Clock Management Override Control Register
.equ	FRCAO	= 0 ; FRC Oscillator Always On
.equ	SRCAO	= 1 ; SRC Oscillator Always On
.equ	FRCACT	= 2 ; FRC Oscillator Active
.equ	SRCACT	= 3 ; SRC Oscillator Active

; CMSR - Clock Management Status Register
.equ	ECF	= 0 ; External Clock Fail

; PRR0 - Power Reduction Register 0
.equ	PRSPI	= 0 ; Power Reduction Serial Peripheral Interface
.equ	PRRXDC	= 1 ; Power Reduction Receive DSP Control
.equ	PRTXDC	= 2 ; Power Reduction Transmit DSP Control
.equ	PRCRC	= 3 ; Power Reduction CRC
.equ	PRVM	= 4 ; Power Reduction Voltage Monitor
.equ	PRCO	= 5 ; Power Reduction Clock Output
.equ	PRUART	= 6 ; Power Reduction UART
.equ	PRTRC	= 7 ; Power Reduction Trace Unit

; PRR1 - Power Reduction Register 1
.equ	PRT1	= 0 ; Power Reduction Timer 1
.equ	PRT2	= 1 ; Power Reduction Timer 2
.equ	PRT3	= 2 ; Power Reduction Timer 3
.equ	PRT4	= 3 ; Power Reduction Timer 4
.equ	PRT5	= 4 ; Power Reduction Timer 5

; PRR2 - Power Reduction Register 2
.equ	PRXB	= 0 ; Power Reduction Rx Buffer B
.equ	PRXA	= 1 ; Power Reduction Rx Buffer A
.equ	PRSF	= 2 ; Power Reduction Support FIFO
.equ	PRDF	= 3 ; Power Reduction Data FIFO
.equ	PRIDS	= 4 ; Power Reduction ID Check
.equ	PRRS	= 5 ; Power Reduction RSSI Buffer
.equ	PRSSM	= 7 ; Power Reduction Sequencer State Machine

; SMCR - Sleep Mode Control Register
.equ	SE	= 0 ; Sleep Mode Enable
.equ	SM0	= 1 ; Sleep Mode Select
.equ	SM1	= 2 ; Sleep Mode Select


; ***** CPU *****************
; DWDR - Debug Wire Data Register
.equ	DWDR0	= 0 ; Debug Wire Data Register Bit 0
.equ	DWDR1	= 1 ; Debug Wire Data Register Bit 1
.equ	DWDR2	= 2 ; Debug Wire Data Register Bit 2
.equ	DWDR3	= 3 ; Debug Wire Data Register Bit 3
.equ	DWDR4	= 4 ; Debug Wire Data Register Bit 4
.equ	DWDR5	= 5 ; Debug Wire Data Register Bit 5
.equ	DWDR6	= 6 ; Debug Wire Data Register Bit 6
.equ	DWDR7	= 7 ; Debug Wire Data Register Bit 7

; MCUCR - MCU Control Register
.equ	IVCE	= 0 ; Interrupt Vector Change Enable
.equ	IVSEL	= 1 ; Interrupt Vector Select
.equ	SPIIO	= 2 ; SPI Interrupt Only
.equ	ENPS	= 3 ; Enable Port Settings
.equ	PUD	= 4 ; Pull-up Resistors Disable
.equ	PB4HS	= 5 ; Port B4 High Side Driver Enable
.equ	PB7LS	= 6 ; Port B7 Low Side Driver Enable
.equ	PB7HS	= 7 ; Port B7 High Side Driver Enable

; MCUSR - MCU Status Register
.equ	PORF	= 0 ; Power-On Reset Flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag
.equ	DWRF	= 4 ; DebugWire Reset Flag

; SP - Stack Pointer
.equ	SPH0	= 0 ; Stack Pointer High Bit 8
.equ	SPH1	= 1 ; Stack Pointer High Bit 9
.equ	SPH2	= 2 ; Stack Pointer High Bit 10

.equ	SPL0	= 0 ; Stack Pointer Low Bit 0
.equ	SPL1	= 1 ; Stack Pointer Low Bit 1
.equ	SPL2	= 2 ; Stack Pointer Low Bit 2
.equ	SPL3	= 3 ; Stack Pointer Low Bit 3
.equ	SPL4	= 4 ; Stack Pointer Low Bit 4
.equ	SPL5	= 5 ; Stack Pointer Low Bit 5
.equ	SPL6	= 6 ; Stack Pointer Low Bit 6
.equ	SPL7	= 7 ; Stack Pointer Low Bit 7

; SPMCSR - Store Program Memory Control and Status Register
.equ	SELFPRGEN	= 0 ; Self Programming Enable
.equ	PGERS	= 1 ; Page Erase
.equ	PGWRT	= 2 ; Page Write
.equ	BLBSET	= 3 ; Boot Lock Bit Set
.equ	SPMIE	= 7 ; SPM Interrupt Enable

; SREG - Status Register
.equ	SREG_C	= 0 ; Carry Flag
.equ	SREG_Z	= 1 ; Zero Flag
.equ	SREG_N	= 2 ; Negative Flag
.equ	SREG_V	= 3 ; Two's Complement Overflow Flag
.equ	SREG_S	= 4 ; Sign Bit
.equ	SREG_H	= 5 ; Half Carry Flag
.equ	SREG_T	= 6 ; Bit Copy Storage
.equ	SREG_I	= 7 ; Global Interrupt Enable


; ***** CRC *****************
; CRCCR - CRC Control Register
.equ	CRCRS	= 0 ; CRC Data Register Reset
.equ	REFLI	= 1 ; Reflect Data Input Byte
.equ	REFLO	= 2 ; Reflect Data Output Byte

; CRCDIR - CRC Data Input Register
.equ	CRCDIR0	= 0 ; CRC Data Input Register Bit 0
.equ	CRCDIR1	= 1 ; CRC Data Input Register Bit 1
.equ	CRCDIR2	= 2 ; CRC Data Input Register Bit 2
.equ	CRCDIR3	= 3 ; CRC Data Input Register Bit 3
.equ	CRCDIR4	= 4 ; CRC Data Input Register Bit 4
.equ	CRCDIR5	= 5 ; CRC Data Input Register Bit 5
.equ	CRCDIR6	= 6 ; CRC Data Input Register Bit 6
.equ	CRCDIR7	= 7 ; CRC Data Input Register Bit 7

; CRCDOR - CRC Data Output Register
.equ	CRCDOR0	= 0 ; CRC Data Output Register Bit 0
.equ	CRCDOR1	= 1 ; CRC Data Output Register Bit 1
.equ	CRCDOR2	= 2 ; CRC Data Output Register Bit 2
.equ	CRCDOR3	= 3 ; CRC Data Output Register Bit 3
.equ	CRCDOR4	= 4 ; CRC Data Output Register Bit 4
.equ	CRCDOR5	= 5 ; CRC Data Output Register Bit 5
.equ	CRCDOR6	= 6 ; CRC Data Output Register Bit 6
.equ	CRCDOR7	= 7 ; CRC Data Output Register Bit 7


; ***** DEMOD *****************
; DMCDA - Demodulator Carrier Detect Path A
.equ	DMCLA0	= 0 ; Demodulator Carrier Detect Limit Path A
.equ	DMCLA1	= 1 ; Demodulator Carrier Detect Limit Path A
.equ	DMCLA2	= 2 ; Demodulator Carrier Detect Limit Path A
.equ	DMCLA3	= 3 ; Demodulator Carrier Detect Limit Path A
.equ	DMCLA4	= 4 ; Demodulator Carrier Detect Limit Path A
.equ	DMCTA0	= 5 ; Demodulator Carrier Detect Time Path A
.equ	DMCTA1	= 6 ; Demodulator Carrier Detect Time Path A
.equ	DMCTA2	= 7 ; Demodulator Carrier Detect Time Path A

; DMCDB - Demodulator Carrier Detect Path B
.equ	DMCLB0	= 0 ; Demodulator Carrier Detect Limit Path B
.equ	DMCLB1	= 1 ; Demodulator Carrier Detect Limit Path B
.equ	DMCLB2	= 2 ; Demodulator Carrier Detect Limit Path B
.equ	DMCLB3	= 3 ; Demodulator Carrier Detect Limit Path B
.equ	DMCLB4	= 4 ; Demodulator Carrier Detect Limit Path B
.equ	DMCTB0	= 5 ; Demodulator Carrier Detect Time Path B
.equ	DMCTB1	= 6 ; Demodulator Carrier Detect Time Path B
.equ	DMCTB2	= 7 ; Demodulator Carrier Detect Time Path B

; DMCRA - Demodulator Control Path A
.equ	DMPGA0	= 0 ; Demodulator PLL Loop Gain Path A
.equ	DMPGA1	= 1 ; Demodulator PLL Loop Gain Path A
.equ	DMPGA2	= 2 ; Demodulator PLL Loop Gain Path A
.equ	DMPGA3	= 3 ; Demodulator PLL Loop Gain Path A
.equ	DMPGA4	= 4 ; Demodulator PLL Loop Gain Path A
.equ	SASKA	= 5 ; Select ASK Demodulation Path A
.equ	SY1TA	= 6 ; Symbol Check with only 1T Path A
.equ	DMARA	= 7 ; Demodulator Automatic Restart Path A

; DMCRB - Demodulator Control Path B
.equ	DMPGB0	= 0 ; Demodulator PLL Loop Gain Path B
.equ	DMPGB1	= 1 ; Demodulator PLL Loop Gain Path B
.equ	DMPGB2	= 2 ; Demodulator PLL Loop Gain Path B
.equ	DMPGB3	= 3 ; Demodulator PLL Loop Gain Path B
.equ	DMPGB4	= 4 ; Demodulator PLL Loop Gain Path B
.equ	SASKB	= 5 ; Select ASK Demodulation Path B
.equ	SY1TB	= 6 ; Symbol Check with only 1T Path B
.equ	DMARB	= 7 ; Demodulator Automatic Restart Path B

; DMDN - Demodulator Down Sampling
.equ	DMDNA0	= 0 ; Demodulator Down-sampling Path A
.equ	DMDNA1	= 1 ; Demodulator Down-sampling Path A
.equ	DMDNA2	= 2 ; Demodulator Down-sampling Path A
.equ	DMDNA3	= 3 ; Demodulator Down-sampling Path A
.equ	DMDNB0	= 4 ; Demodulator Down-sampling Path B
.equ	DMDNB1	= 5 ; Demodulator Down-sampling Path B
.equ	DMDNB2	= 6 ; Demodulator Down-sampling Path B
.equ	DMDNB3	= 7 ; Demodulator Down-sampling Path B

; DMMA - Demodulator Mode Path A
.equ	DMATA0	= 0 ; Demodulator Amplitude Threshold Path A
.equ	DMATA1	= 1 ; Demodulator Amplitude Threshold Path A
.equ	DMATA2	= 2 ; Demodulator Amplitude Threshold Path A
.equ	DMATA3	= 3 ; Demodulator Amplitude Threshold Path A
.equ	DMATA4	= 4 ; Demodulator Amplitude Threshold Path A
.equ	DMPA	= 5 ; Demodulator Data Polarity Path A
.equ	DMHA	= 6 ; Demodulator Hold Mode Path A
.equ	DMNEA	= 7 ; Demodulator NRZ Enable Path A

; DMMB - Demodulator Mode Path B
.equ	DMATB0	= 0 ; Demodulator Amplitude Threshold Path B
.equ	DMATB1	= 1 ; Demodulator Amplitude Threshold Path B
.equ	DMATB2	= 2 ; Demodulator Amplitude Threshold Path B
.equ	DMATB3	= 3 ; Demodulator Amplitude Threshold Path B
.equ	DMATB4	= 4 ; Demodulator Amplitude Threshold Path B
.equ	DMPB	= 5 ; Demodulator Data Polarity Path B
.equ	DMHB	= 6 ; Demodulator Hold Mode Path B
.equ	DMNEB	= 7 ; Demodulator NRZ Enable Path B

; DMPATA - Demodulator Signal Check Pattern Path A
.equ	DMPATA0	= 0 ; Demodulator Signal Check Pattern Path A Bit 0
.equ	DMPATA1	= 1 ; Demodulator Signal Check Pattern Path A Bit 1
.equ	DMPATA2	= 2 ; Demodulator Signal Check Pattern Path A Bit 2
.equ	DMPATA3	= 3 ; Demodulator Signal Check Pattern Path A Bit 3
.equ	DMPATA4	= 4 ; Demodulator Signal Check Pattern Path A Bit 4
.equ	DMPATA5	= 5 ; Demodulator Signal Check Pattern Path A Bit 5
.equ	DMPATA6	= 6 ; Demodulator Signal Check Pattern Path A Bit 6
.equ	DMPATA7	= 7 ; Demodulator Signal Check Pattern Path A Bit 7

; DMPATB - Demodulator Signal Check Pattern Path B
.equ	DMPATB0	= 0 ; Demodulator Signal Check Pattern Path B Bit 0
.equ	DMPATB1	= 1 ; Demodulator Signal Check Pattern Path B Bit 1
.equ	DMPATB2	= 2 ; Demodulator Signal Check Pattern Path B Bit 2
.equ	DMPATB3	= 3 ; Demodulator Signal Check Pattern Path B Bit 3
.equ	DMPATB4	= 4 ; Demodulator Signal Check Pattern Path B Bit 4
.equ	DMPATB5	= 5 ; Demodulator Signal Check Pattern Path B Bit 5
.equ	DMPATB6	= 6 ; Demodulator Signal Check Pattern Path B Bit 6
.equ	DMPATB7	= 7 ; Demodulator Signal Check Pattern Path B Bit 7

; DMPC - Demodulator Pattern Check Control
.equ	PCFTDA	= 0 ; Pattern Check Frequency Tracking Disable Path A
.equ	PCIALA	= 1 ; Pattern Check Ignore Amplitude Low Path A
.equ	PCSIGA	= 2 ; Pattern Check Signal Path A
.equ	PCENA	= 3 ; Pattern Check Enable Path A
.equ	PCFTDB	= 4 ; Pattern Check Frequency Tracking Disable Path B
.equ	PCIALB	= 5 ; Pattern Check Ignore Amplitude Low Path B
.equ	PCSIGB	= 6 ; Pattern Check Signal Path B
.equ	PCENB	= 7 ; Pattern Check Enable Path B

; DMPCA - Demodulator Pattern Check Control Path A
.equ	PCSEVA0	= 0 ; Pattern Check Severity Path A
.equ	PCSEVA1	= 1 ; Pattern Check Severity Path A
.equ	PCSEVA2	= 2 ; Pattern Check Severity Path A
.equ	PCLENA0	= 3 ; Pattern Check Length Path A
.equ	PCLENA1	= 4 ; Pattern Check Length Path A
.equ	PCLENA2	= 5 ; Pattern Check Length Path A
.equ	PSELA0	= 6 ; Pattern Select Path A
.equ	PSELA1	= 7 ; Pattern Select Path A

; DMPCB - Demodulator Pattern Check Control Path B
.equ	PCSEVB0	= 0 ; Pattern Check Severity Path B
.equ	PCSEVB1	= 1 ; Pattern Check Severity Path B
.equ	PCSEVB2	= 2 ; Pattern Check Severity Path B
.equ	PCLENB0	= 3 ; Pattern Check Length Path B
.equ	PCLENB1	= 4 ; Pattern Check Length Path B
.equ	PCLENB2	= 5 ; Pattern Check Length Path B
.equ	PSELB0	= 6 ; Pattern Select Path B
.equ	PSELB1	= 7 ; Pattern Select Path B

; DMSRA - Demodulator Symbol Rate Path A
.equ	DMSRA0	= 0 ; Demodulator Symbol Rate Path A Bit 0
.equ	DMSRA1	= 1 ; Demodulator Symbol Rate Path A Bit 1
.equ	DMSRA2	= 2 ; Demodulator Symbol Rate Path A Bit 2
.equ	DMSRA3	= 3 ; Demodulator Symbol Rate Path A Bit 3
.equ	DMSRA4	= 4 ; Demodulator Symbol Rate Path A Bit 4
.equ	DMSRA5	= 5 ; Demodulator Symbol Rate Path A Bit 5
.equ	DMSRA6	= 6 ; Demodulator Symbol Rate Path A Bit 6
.equ	DMSRA7	= 7 ; Demodulator Symbol Rate Path A Bit 7

; DMSRB - Demodulator Symbol Rate Path B
.equ	DMSRB0	= 0 ; Demodulator Symbol Rate Path B Bit 0
.equ	DMSRB1	= 1 ; Demodulator Symbol Rate Path B Bit 1
.equ	DMSRB2	= 2 ; Demodulator Symbol Rate Path B Bit 2
.equ	DMSRB3	= 3 ; Demodulator Symbol Rate Path B Bit 3
.equ	DMSRB4	= 4 ; Demodulator Symbol Rate Path B Bit 4
.equ	DMSRB5	= 5 ; Demodulator Symbol Rate Path B Bit 5
.equ	DMSRB6	= 6 ; Demodulator Symbol Rate Path B Bit 6
.equ	DMSRB7	= 7 ; Demodulator Symbol Rate Path B Bit 7

; RXFOA - Received Frequency Offset vs Intermediate Frequency Path A
.equ	RXFOA0	= 0 ; Received Frequency Offset vs Intermediate Frequency Path A Bit 0
.equ	RXFOA1	= 1 ; Received Frequency Offset vs Intermediate Frequency Path A Bit 1
.equ	RXFOA2	= 2 ; Received Frequency Offset vs Intermediate Frequency Path A Bit 2
.equ	RXFOA3	= 3 ; Received Frequency Offset vs Intermediate Frequency Path A Bit 3
.equ	RXFOA4	= 4 ; Received Frequency Offset vs Intermediate Frequency Path A Bit 4
.equ	RXFOA5	= 5 ; Received Frequency Offset vs Intermediate Frequency Path A Bit 5
.equ	RXFOA6	= 6 ; Received Frequency Offset vs Intermediate Frequency Path A Bit 6
.equ	RXFOA7	= 7 ; Received Frequency Offset vs Intermediate Frequency Path A Bit 7

; RXFOB - Received Frequency Offset vs Intermediate Frequency Path B
.equ	RXFOB0	= 0 ; Received Frequency Offset vs Intermediate Frequency Path B Bit 0
.equ	RXFOB1	= 1 ; Received Frequency Offset vs Intermediate Frequency Path B Bit 1
.equ	RXFOB2	= 2 ; Received Frequency Offset vs Intermediate Frequency Path B Bit 2
.equ	RXFOB3	= 3 ; Received Frequency Offset vs Intermediate Frequency Path B Bit 3
.equ	RXFOB4	= 4 ; Received Frequency Offset vs Intermediate Frequency Path B Bit 4
.equ	RXFOB5	= 5 ; Received Frequency Offset vs Intermediate Frequency Path B Bit 5
.equ	RXFOB6	= 6 ; Received Frequency Offset vs Intermediate Frequency Path B Bit 6
.equ	RXFOB7	= 7 ; Received Frequency Offset vs Intermediate Frequency Path B Bit 7

; SYCA - Symbol Check Configuration Path A
.equ	SYCSA0	= 0 ; Symbol Check Size Path A
.equ	SYCSA1	= 1 ; Symbol Check Size Path A
.equ	SYCSA2	= 2 ; Symbol Check Size Path A
.equ	SYCSA3	= 3 ; Symbol Check Size Path A
.equ	SYTLA0	= 4 ; Symbol Timing Limit Path A
.equ	SYTLA1	= 5 ; Symbol Timing Limit Path A
.equ	SYTLA2	= 6 ; Symbol Timing Limit Path A
.equ	SYTLA3	= 7 ; Symbol Timing Limit Path A

; SYCB - Symbol Check Configuration Path B
.equ	SYCSB0	= 0 ; Symbol Check Size Path B
.equ	SYCSB1	= 1 ; Symbol Check Size Path B
.equ	SYCSB2	= 2 ; Symbol Check Size Path B
.equ	SYCSB3	= 3 ; Symbol Check Size Path B
.equ	SYTLB0	= 4 ; Symbol Timing Limit Path B
.equ	SYTLB1	= 5 ; Symbol Timing Limit Path B
.equ	SYTLB2	= 6 ; Symbol Timing Limit Path B
.equ	SYTLB3	= 7 ; Symbol Timing Limit Path B


; ***** DFIFO *****************
; DFC - Data FIFO Configuration
.equ	DFFLC0	= 0 ; Data FIFO Fill Level Configuration
.equ	DFFLC1	= 1 ; Data FIFO Fill Level Configuration
.equ	DFFLC2	= 2 ; Data FIFO Fill Level Configuration
.equ	DFFLC3	= 3 ; Data FIFO Fill Level Configuration
.equ	DFFLC4	= 4 ; Data FIFO Fill Level Configuration
.equ	DFFLC5	= 5 ; Data FIFO Fill Level Configuration
.equ	DFDRA	= 7 ; Data FIFO Direct Read Access Operational Mode

; DFD - Data FIFO Data
.equ	DFD0	= 0 ; Data FIFO Data Bit 0
.equ	DFD1	= 1 ; Data FIFO Data Bit 1
.equ	DFD2	= 2 ; Data FIFO Data Bit 2
.equ	DFD3	= 3 ; Data FIFO Data Bit 3
.equ	DFD4	= 4 ; Data FIFO Data Bit 4
.equ	DFD5	= 5 ; Data FIFO Data Bit 5
.equ	DFD6	= 6 ; Data FIFO Data Bit 6
.equ	DFD7	= 7 ; Data FIFO Data Bit 7

; DFI - Data FIFO Interrupt Mask
.equ	DFFLIM	= 0 ; Data FIFO Fill Level Interrupt Mask
.equ	DFERIM	= 1 ; Data FIFO Error Interrupt Mask

; DFL - Data FIFO Fill Level
.equ	DFFLS0	= 0 ; Data FIFO Fill Level Status
.equ	DFFLS1	= 1 ; Data FIFO Fill Level Status
.equ	DFFLS2	= 2 ; Data FIFO Fill Level Status
.equ	DFFLS3	= 3 ; Data FIFO Fill Level Status
.equ	DFFLS4	= 4 ; Data FIFO Fill Level Status
.equ	DFFLS5	= 5 ; Data FIFO Fill Level Status
.equ	DFCLR	= 7 ; Data FIFO Clear

; DFRP - Data FIFO Read Pointer
.equ	DFRP0	= 0 ; Data FIFO Read Pointer Bit 0
.equ	DFRP1	= 1 ; Data FIFO Read Pointer Bit 1
.equ	DFRP2	= 2 ; Data FIFO Read Pointer Bit 2
.equ	DFRP3	= 3 ; Data FIFO Read Pointer Bit 3
.equ	DFRP4	= 4 ; Data FIFO Read Pointer Bit 4
.equ	DFRP5	= 5 ; Data FIFO Read Pointer Bit 5

; DFS - Data FIFO Status
.equ	DFFLRF	= 0 ; Data FIFO Fill Level Reached Status Flag
.equ	DFUFL	= 1 ; Data FIFO Underflow Flag
.equ	DFOFL	= 2 ; Data FIFO Overflow Flag

; DFTL - Data FIFO Telegram Length
.equ	DFTLH0	= 0 ; Data FIFO Telegram Length High Bit 8
.equ	DFTLH1	= 1 ; Data FIFO Telegram Length High Bit 9
.equ	DFTLH2	= 2 ; Data FIFO Telegram Length High Bit 10
.equ	DFTLH3	= 3 ; Data FIFO Telegram Length High Bit 11

.equ	DFTLL0	= 0 ; Data FIFO Telegram Length Low Bit 0
.equ	DFTLL1	= 1 ; Data FIFO Telegram Length Low Bit 1
.equ	DFTLL2	= 2 ; Data FIFO Telegram Length Low Bit 2
.equ	DFTLL3	= 3 ; Data FIFO Telegram Length Low Bit 3
.equ	DFTLL4	= 4 ; Data FIFO Telegram Length Low Bit 4
.equ	DFTLL5	= 5 ; Data FIFO Telegram Length Low Bit 5
.equ	DFTLL6	= 6 ; Data FIFO Telegram Length Low Bit 6
.equ	DFTLL7	= 7 ; Data FIFO Telegram Length Low Bit 7

; DFWP - Data FIFO Write Pointer
.equ	DFWP0	= 0 ; Data FIFO Write Pointer Bit 0
.equ	DFWP1	= 1 ; Data FIFO Write Pointer Bit 1
.equ	DFWP2	= 2 ; Data FIFO Write Pointer Bit 2
.equ	DFWP3	= 3 ; Data FIFO Write Pointer Bit 3
.equ	DFWP4	= 4 ; Data FIFO Write Pointer Bit 4


; ***** EEPROM *****************
; EEAR - EEPROM Address Register
.equ	EEARH0	= 0 ; EEPROM Address Register High Bit 8
.equ	EEARH1	= 1 ; EEPROM Address Register High Bit 9
.equ	EEARH2	= 2 ; EEPROM Address Register High Bit 10

.equ	EEARL0	= 0 ; EEPROM Address Register Low Bit 0
.equ	EEARL1	= 1 ; EEPROM Address Register Low Bit 1
.equ	EEARL2	= 2 ; EEPROM Address Register Low Bit 2
.equ	EEARL3	= 3 ; EEPROM Address Register Low Bit 3
.equ	EEARL4	= 4 ; EEPROM Address Register Low Bit 4
.equ	EEARL5	= 5 ; EEPROM Address Register Low Bit 5
.equ	EEARL6	= 6 ; EEPROM Address Register Low Bit 6
.equ	EEARL7	= 7 ; EEPROM Address Register Low Bit 7

; EECR - EEPROM Control Register
.equ	EERE	= 0 ; EEPROM Read Enable
.equ	EEWE	= 1 ; EEPROM Write Enable
.equ	EEMWE	= 2 ; EEPROM Master Write Enable
.equ	EERIE	= 3 ; EEPROM Ready Interrupt Enable
.equ	EEPM0	= 4 ; EEPROM Programming Mode
.equ	EEPM1	= 5 ; EEPROM Programming Mode
.equ	EEPAGE	= 6 ; EEPROM Page Access
.equ	NVMBSY	= 7 ; Non-Volatile Memory Busy

; EECR2 - EEPROM Control Register 2
.equ	EEBRE	= 0 ; EEPROM Burst Read Enable
.equ	EEFF	= 6 ; EEPROM Error Fault Flag
.equ	EECF	= 7 ; EEPROM Error Correction Flag

; EEDR - EEPROM Data Register
.equ	EEDR0	= 0 ; EEPROM Data Register Bit 0
.equ	EEDR1	= 1 ; EEPROM Data Register Bit 1
.equ	EEDR2	= 2 ; EEPROM Data Register Bit 2
.equ	EEDR3	= 3 ; EEPROM Data Register Bit 3
.equ	EEDR4	= 4 ; EEPROM Data Register Bit 4
.equ	EEDR5	= 5 ; EEPROM Data Register Bit 5
.equ	EEDR6	= 6 ; EEPROM Data Register Bit 6
.equ	EEDR7	= 7 ; EEPROM Data Register Bit 7

; EEPR - EEPROM Protect Register
.equ	EEAP0	= 0 ; EEPROM Access Protect
.equ	EEAP1	= 1 ; EEPROM Access Protect
.equ	EEAP2	= 2 ; EEPROM Access Protect
.equ	EEAP3	= 3 ; EEPROM Access Protect

; EEST - EEPROM Status Register
.equ	EESYN0	= 0 ; EEPROM Syndrome
.equ	EESYN1	= 1 ; EEPROM Syndrome
.equ	EESYN2	= 2 ; EEPROM Syndrome
.equ	EESYN3	= 3 ; EEPROM Syndrome

; PGMST - Program Memory Status Register
.equ	PGMSYN0	= 0 ; Program Memory Syndrome
.equ	PGMSYN1	= 1 ; Program Memory Syndrome
.equ	PGMSYN2	= 2 ; Program Memory Syndrome
.equ	PGMSYN3	= 3 ; Program Memory Syndrome
.equ	PGMSYN4	= 4 ; Program Memory Syndrome


; ***** FE *****************
; FEAS - RF Front End Antenna Switch
.equ	SDRX1	= 0 ; SPDT RF Switch Rx 1
.equ	SDTX1	= 1 ; SPDT RF Switch Tx 1
.equ	SDRX2	= 2 ; SPDT RF Switch Rx 2
.equ	SDTX2	= 3 ; SPDT RF Switch Tx 2
.equ	SDRX3	= 4 ; SPDT RF Switch Rx 3
.equ	SDTX3	= 5 ; SPDT RF Switch Tx 3

; FEBIA - RF Front End Amplifier Bias
.equ	HISEN	= 6 ; High Sensitivity Enable
.equ	IFAEN	= 7 ; IF Amplifier Enable

; FEBT - RF Front End RC Tuning
.equ	CTN20	= 0 ; 2 Bit Capacitor Tuning
.equ	CTN21	= 1 ; 2 Bit Capacitor Tuning
.equ	RTN20	= 2 ; 2 Bit Resistor Tuning
.equ	RTN21	= 3 ; 2 Bit Resistor Tuning

; FECR - RF Front End Control Register
.equ	LBNHB	= 0 ; Low-Band Not High-Band
.equ	S4N3	= 1 ; Select 433MHz Not 315MHz Band
.equ	ANDP	= 2 ; Antenna Damping
.equ	ADHS	= 3 ; ADC High Sample Rate
.equ	PLCKG	= 4 ; PLL Lock Detect Gate
.equ	ANPS	= 5 ; ASK Not DPSK Switch

; FEEN1 - RF Front End Enable 1
.equ	PLEN	= 0 ; PLL Enable
.equ	PLCAL	= 1 ; PLL Calibration Mode
.equ	XTOEN	= 2 ; Crystal Oscillator Enable
.equ	LNAEN	= 3 ; Low Noise Amplifier Enable
.equ	ADEN	= 4 ; Analog Digital Converter Enable
.equ	ADCLK	= 5 ; ADC Clock Enable
.equ	PLSP1	= 6 ; PLL Speedup 1

; FEEN2 - RF Front End Enable 2
.equ	PAEN	= 2 ; Power Amplifier Enable
.equ	TMPM	= 3 ; Temperature Measurement
.equ	PLPEN	= 4 ; PLL Post Enable
.equ	XTPEN	= 5 ; XTO Voltage Pump Enable
.equ	XTOEXT	= 7 ; XTO External Clock

; FELNA - RF Front End LNA Bias
.equ	LNABN0	= 0 ; LNA Bias Normal Sense Mode
.equ	LNABN1	= 1 ; LNA Bias Normal Sense Mode
.equ	LNABN2	= 2 ; LNA Bias Normal Sense Mode
.equ	LNABN3	= 3 ; LNA Bias Normal Sense Mode
.equ	LNABH0	= 4 ; LNA Bias High Sense Mode
.equ	LNABH1	= 5 ; LNA Bias High Sense Mode
.equ	LNABH2	= 6 ; LNA Bias High Sense Mode
.equ	LNABH3	= 7 ; LNA Bias High Sense Mode

; FEMS - RF Front End Main and Swallow Counter
.equ	PLLS0	= 0 ; PLL Swallow
.equ	PLLS1	= 1 ; PLL Swallow
.equ	PLLS2	= 2 ; PLL Swallow
.equ	PLLS3	= 3 ; PLL Swallow
.equ	PLLM0	= 4 ; PLL Main
.equ	PLLM1	= 5 ; PLL Main
.equ	PLLM2	= 6 ; PLL Main
.equ	PLLM3	= 7 ; PLL Main

; FESR - RF Front End Status Register
.equ	SAT	= 0 ; LNA Saturated
.equ	XRDY	= 2 ; XTO Ready
.equ	PLCK	= 3 ; PLL Locked

; FETN4 - RF Front End RC Tuning 4bit Register
.equ	CTN40	= 0 ; 4 Bit Capacitor Tuning
.equ	CTN41	= 1 ; 4 Bit Capacitor Tuning
.equ	CTN42	= 2 ; 4 Bit Capacitor Tuning
.equ	CTN43	= 3 ; 4 Bit Capacitor Tuning
.equ	RTN40	= 4 ; 4 Bit Resistor Tuning
.equ	RTN41	= 5 ; 4 Bit Resistor Tuning
.equ	RTN42	= 6 ; 4 Bit Resistor Tuning
.equ	RTN43	= 7 ; 4 Bit Resistor Tuning

; FEVCO - RF Front End VCO and PLL Control
.equ	CPCC0	= 0 ; Charge Pump Current Control
.equ	CPCC1	= 1 ; Charge Pump Current Control
.equ	CPCC2	= 2 ; Charge Pump Current Control
.equ	CPCC3	= 3 ; Charge Pump Current Control
.equ	VCOB0	= 4 ; VCO Bias
.equ	VCOB1	= 5 ; VCO Bias
.equ	VCOB2	= 6 ; VCO Bias
.equ	VCOB3	= 7 ; VCO Bias

; FEVCT - RF Front End VCO Tuning
.equ	FEVCT0	= 0 ; RF Front End VCO Tuning Bit 0
.equ	FEVCT1	= 1 ; RF Front End VCO Tuning Bit 1
.equ	FEVCT2	= 2 ; RF Front End VCO Tuning Bit 2
.equ	FEVCT3	= 3 ; RF Front End VCO Tuning Bit 3

; SPARE1 - RF Front End Spare Register 1
.equ	CHBIR0	= 0 ; Calibration of High Band Image Rejection
.equ	CHBIR1	= 1 ; Calibration of High Band Image Rejection
.equ	CHBIR2	= 2 ; Calibration of High Band Image Rejection
.equ	CHBIR3	= 3 ; Calibration of High Band Image Rejection
.equ	CHBIR4	= 4 ; Calibration of High Band Image Rejection
.equ	CHBIR5	= 5 ; Calibration of High Band Image Rejection
.equ	CHBIR6	= 6 ; Calibration of High Band Image Rejection
.equ	CHBIR7	= 7 ; Calibration of High Band Image Rejection


; ***** FREQS *****************
; FFREQ1H - Fractional Frequency 1 High Byte
.equ	FFREQ1H0	= 0 ; Fractional Frequency 1 High Byte Bit 0
.equ	FFREQ1H1	= 1 ; Fractional Frequency 1 High Byte Bit 1

; FFREQ1L - Fractional Frequency 1 Low Byte
.equ	FFREQ1L0	= 0 ; Fractional Frequency 1 Low Byte Bit 0
.equ	FFREQ1L1	= 1 ; Fractional Frequency 1 Low Byte Bit 1
.equ	FFREQ1L2	= 2 ; Fractional Frequency 1 Low Byte Bit 2
.equ	FFREQ1L3	= 3 ; Fractional Frequency 1 Low Byte Bit 3
.equ	FFREQ1L4	= 4 ; Fractional Frequency 1 Low Byte Bit 4
.equ	FFREQ1L5	= 5 ; Fractional Frequency 1 Low Byte Bit 5
.equ	FFREQ1L6	= 6 ; Fractional Frequency 1 Low Byte Bit 6
.equ	FFREQ1L7	= 7 ; Fractional Frequency 1 Low Byte Bit 7

; FFREQ1M - Fractional Frequency 1 Middle Byte
.equ	FFREQ1M0	= 0 ; Fractional Frequency 1 Middle Byte Bit 0
.equ	FFREQ1M1	= 1 ; Fractional Frequency 1 Middle Byte Bit 1
.equ	FFREQ1M2	= 2 ; Fractional Frequency 1 Middle Byte Bit 2
.equ	FFREQ1M3	= 3 ; Fractional Frequency 1 Middle Byte Bit 3
.equ	FFREQ1M4	= 4 ; Fractional Frequency 1 Middle Byte Bit 4
.equ	FFREQ1M5	= 5 ; Fractional Frequency 1 Middle Byte Bit 5
.equ	FFREQ1M6	= 6 ; Fractional Frequency 1 Middle Byte Bit 6
.equ	FFREQ1M7	= 7 ; Fractional Frequency 1 Middle Byte Bit 7

; FFREQ2H - Fractional Frequency 2 High Byte
.equ	FFREQ2H0	= 0 ; Fractional Frequency 2 High Byte Bit 0
.equ	FFREQ2H1	= 1 ; Fractional Frequency 2 High Byte Bit 1

; FFREQ2L - Fractional Frequency 2 Low Byte
.equ	FFREQ2L0	= 0 ; Fractional Frequency 2 Low Byte Bit 0
.equ	FFREQ2L1	= 1 ; Fractional Frequency 2 Low Byte Bit 1
.equ	FFREQ2L2	= 2 ; Fractional Frequency 2 Low Byte Bit 2
.equ	FFREQ2L3	= 3 ; Fractional Frequency 2 Low Byte Bit 3
.equ	FFREQ2L4	= 4 ; Fractional Frequency 2 Low Byte Bit 4
.equ	FFREQ2L5	= 5 ; Fractional Frequency 2 Low Byte Bit 5
.equ	FFREQ2L6	= 6 ; Fractional Frequency 2 Low Byte Bit 6
.equ	FFREQ2L7	= 7 ; Fractional Frequency 2 Low Byte Bit 7

; FFREQ2M - Fractional Frequency 2 Middle Byte
.equ	FFREQ2M0	= 0 ; Fractional Frequency 2 Middle Byte Bit 0
.equ	FFREQ2M1	= 1 ; Fractional Frequency 2 Middle Byte Bit 1
.equ	FFREQ2M2	= 2 ; Fractional Frequency 2 Middle Byte Bit 2
.equ	FFREQ2M3	= 3 ; Fractional Frequency 2 Middle Byte Bit 3
.equ	FFREQ2M4	= 4 ; Fractional Frequency 2 Middle Byte Bit 4
.equ	FFREQ2M5	= 5 ; Fractional Frequency 2 Middle Byte Bit 5
.equ	FFREQ2M6	= 6 ; Fractional Frequency 2 Middle Byte Bit 6
.equ	FFREQ2M7	= 7 ; Fractional Frequency 2 Middle Byte Bit 7

; FSEN - Frequency Synthesizer Enable
.equ	SDPU	= 0 ; Sigma-delta Modulator Power Up
.equ	SDEN	= 1 ; Sigma-delta Modulator Enable


; ***** FRSYNC *****************
; SFID1A - Start Frame ID Byte 1 Path A
.equ	SFID1A0	= 0 ; Start Frame ID Byte 1 Path A Bit 0
.equ	SFID1A1	= 1 ; Start Frame ID Byte 1 Path A Bit 1
.equ	SFID1A2	= 2 ; Start Frame ID Byte 1 Path A Bit 2
.equ	SFID1A3	= 3 ; Start Frame ID Byte 1 Path A Bit 3
.equ	SFID1A4	= 4 ; Start Frame ID Byte 1 Path A Bit 4
.equ	SFID1A5	= 5 ; Start Frame ID Byte 1 Path A Bit 5
.equ	SFID1A6	= 6 ; Start Frame ID Byte 1 Path A Bit 6
.equ	SFID1A7	= 7 ; Start Frame ID Byte 1 Path A Bit 7

; SFID1B - Start Frame ID Byte 1 Path B
.equ	SFID1B0	= 0 ; Start Frame ID Byte 1 Path B Bit 0
.equ	SFID1B1	= 1 ; Start Frame ID Byte 1 Path B Bit 1
.equ	SFID1B2	= 2 ; Start Frame ID Byte 1 Path B Bit 2
.equ	SFID1B3	= 3 ; Start Frame ID Byte 1 Path B Bit 3
.equ	SFID1B4	= 4 ; Start Frame ID Byte 1 Path B Bit 4
.equ	SFID1B5	= 5 ; Start Frame ID Byte 1 Path B Bit 5
.equ	SFID1B6	= 6 ; Start Frame ID Byte 1 Path B Bit 6
.equ	SFID1B7	= 7 ; Start Frame ID Byte 1 Path B Bit 7

; SFID2A - Start Frame ID Byte 2 Path A
.equ	SFID2A0	= 0 ; Start Frame ID Byte 2 Path A Bit 0
.equ	SFID2A1	= 1 ; Start Frame ID Byte 2 Path A Bit 1
.equ	SFID2A2	= 2 ; Start Frame ID Byte 2 Path A Bit 2
.equ	SFID2A3	= 3 ; Start Frame ID Byte 2 Path A Bit 3
.equ	SFID2A4	= 4 ; Start Frame ID Byte 2 Path A Bit 4
.equ	SFID2A5	= 5 ; Start Frame ID Byte 2 Path A Bit 5
.equ	SFID2A6	= 6 ; Start Frame ID Byte 2 Path A Bit 6
.equ	SFID2A7	= 7 ; Start Frame ID Byte 2 Path A Bit 7

; SFID2B - Start Frame ID Byte 2 Path B
.equ	SFID2B0	= 0 ; Start Frame ID Byte 2 Path B Bit 0
.equ	SFID2B1	= 1 ; Start Frame ID Byte 2 Path B Bit 1
.equ	SFID2B2	= 2 ; Start Frame ID Byte 2 Path B Bit 2
.equ	SFID2B3	= 3 ; Start Frame ID Byte 2 Path B Bit 3
.equ	SFID2B4	= 4 ; Start Frame ID Byte 2 Path B Bit 4
.equ	SFID2B5	= 5 ; Start Frame ID Byte 2 Path B Bit 5
.equ	SFID2B6	= 6 ; Start Frame ID Byte 2 Path B Bit 6
.equ	SFID2B7	= 7 ; Start Frame ID Byte 2 Path B Bit 7

; SFID3A - Start Frame ID Byte 3 Path A
.equ	SFID3A0	= 0 ; Start Frame ID Byte 3 Path A Bit 0
.equ	SFID3A1	= 1 ; Start Frame ID Byte 3 Path A Bit 1
.equ	SFID3A2	= 2 ; Start Frame ID Byte 3 Path A Bit 2
.equ	SFID3A3	= 3 ; Start Frame ID Byte 3 Path A Bit 3
.equ	SFID3A4	= 4 ; Start Frame ID Byte 3 Path A Bit 4
.equ	SFID3A5	= 5 ; Start Frame ID Byte 3 Path A Bit 5
.equ	SFID3A6	= 6 ; Start Frame ID Byte 3 Path A Bit 6
.equ	SFID3A7	= 7 ; Start Frame ID Byte 3 Path A Bit 7

; SFID3B - Start Frame ID Byte 3 Path B
.equ	SFID3B0	= 0 ; Start Frame ID Byte 3 Path B Bit 0
.equ	SFID3B1	= 1 ; Start Frame ID Byte 3 Path B Bit 1
.equ	SFID3B2	= 2 ; Start Frame ID Byte 3 Path B Bit 2
.equ	SFID3B3	= 3 ; Start Frame ID Byte 3 Path B Bit 3
.equ	SFID3B4	= 4 ; Start Frame ID Byte 3 Path B Bit 4
.equ	SFID3B5	= 5 ; Start Frame ID Byte 3 Path B Bit 5
.equ	SFID3B6	= 6 ; Start Frame ID Byte 3 Path B Bit 6
.equ	SFID3B7	= 7 ; Start Frame ID Byte 3 Path B Bit 7

; SFID4A - Start Frame ID Byte 4 Path A
.equ	SFID4A0	= 0 ; Start Frame ID Byte 4 Path A Bit 0
.equ	SFID4A1	= 1 ; Start Frame ID Byte 4 Path A Bit 1
.equ	SFID4A2	= 2 ; Start Frame ID Byte 4 Path A Bit 2
.equ	SFID4A3	= 3 ; Start Frame ID Byte 4 Path A Bit 3
.equ	SFID4A4	= 4 ; Start Frame ID Byte 4 Path A Bit 4
.equ	SFID4A5	= 5 ; Start Frame ID Byte 4 Path A Bit 5
.equ	SFID4A6	= 6 ; Start Frame ID Byte 4 Path A Bit 6
.equ	SFID4A7	= 7 ; Start Frame ID Byte 4 Path A Bit 7

; SFID4B - Start Frame ID Byte 4 Path B
.equ	SFID4B0	= 0 ; Start Frame ID Byte 4 Path B Bit 0
.equ	SFID4B1	= 1 ; Start Frame ID Byte 4 Path B Bit 1
.equ	SFID4B2	= 2 ; Start Frame ID Byte 4 Path B Bit 2
.equ	SFID4B3	= 3 ; Start Frame ID Byte 4 Path B Bit 3
.equ	SFID4B4	= 4 ; Start Frame ID Byte 4 Path B Bit 4
.equ	SFID4B5	= 5 ; Start Frame ID Byte 4 Path B Bit 5
.equ	SFID4B6	= 6 ; Start Frame ID Byte 4 Path B Bit 6
.equ	SFID4B7	= 7 ; Start Frame ID Byte 4 Path B Bit 7

; SFIDCA - Start Frame ID Configuration Path A
.equ	SFIDTA0	= 0 ; Start Frame ID Threshold Path A
.equ	SFIDTA1	= 1 ; Start Frame ID Threshold Path A
.equ	SFIDTA2	= 2 ; Start Frame ID Threshold Path A
.equ	SFIDTA3	= 3 ; Start Frame ID Threshold Path A
.equ	SFIDTA4	= 4 ; Start Frame ID Threshold Path A
.equ	SEMEA	= 7 ; Serial Mode Enable Path A

; SFIDCB - Start Frame ID Configuration Path B
.equ	SFIDTB0	= 0 ; Start Frame ID Threshold Path B
.equ	SFIDTB1	= 1 ; Start Frame ID Threshold Path B
.equ	SFIDTB2	= 2 ; Start Frame ID Threshold Path B
.equ	SFIDTB3	= 3 ; Start Frame ID Threshold Path B
.equ	SFIDTB4	= 4 ; Start Frame ID Threshold Path B
.equ	SEMEB	= 7 ; Serial Mode Enable Path B

; SFIDLA - Start Frame ID Length Path A
.equ	SFIDLA0	= 0 ; Start Frame ID Length Path A Bit 0
.equ	SFIDLA1	= 1 ; Start Frame ID Length Path A Bit 1
.equ	SFIDLA2	= 2 ; Start Frame ID Length Path A Bit 2
.equ	SFIDLA3	= 3 ; Start Frame ID Length Path A Bit 3
.equ	SFIDLA4	= 4 ; Start Frame ID Length Path A Bit 4
.equ	SFIDLA5	= 5 ; Start Frame ID Length Path A Bit 5

; SFIDLB - Start Frame ID Length Path B
.equ	SFIDLB0	= 0 ; Start Frame ID Length Path B Bit 0
.equ	SFIDLB1	= 1 ; Start Frame ID Length Path B Bit 1
.equ	SFIDLB2	= 2 ; Start Frame ID Length Path B Bit 2
.equ	SFIDLB3	= 3 ; Start Frame ID Length Path B Bit 3
.equ	SFIDLB4	= 4 ; Start Frame ID Length Path B Bit 4
.equ	SFIDLB5	= 5 ; Start Frame ID Length Path B Bit 5

; WUP1A - Wake-Up Pattern Byte 1 Path A
.equ	WUP1A0	= 0 ; Wake-Up Pattern Byte 1 Path A Bit 0
.equ	WUP1A1	= 1 ; Wake-Up Pattern Byte 1 Path A Bit 1
.equ	WUP1A2	= 2 ; Wake-Up Pattern Byte 1 Path A Bit 2
.equ	WUP1A3	= 3 ; Wake-Up Pattern Byte 1 Path A Bit 3
.equ	WUP1A4	= 4 ; Wake-Up Pattern Byte 1 Path A Bit 4
.equ	WUP1A5	= 5 ; Wake-Up Pattern Byte 1 Path A Bit 5
.equ	WUP1A6	= 6 ; Wake-Up Pattern Byte 1 Path A Bit 6
.equ	WUP1A7	= 7 ; Wake-Up Pattern Byte 1 Path A Bit 7

; WUP1B - Wake-Up Pattern Byte 1 Path B
.equ	WUP1B0	= 0 ; Wake-Up Pattern Byte 1 Path B Bit 0
.equ	WUP1B1	= 1 ; Wake-Up Pattern Byte 1 Path B Bit 1
.equ	WUP1B2	= 2 ; Wake-Up Pattern Byte 1 Path B Bit 2
.equ	WUP1B3	= 3 ; Wake-Up Pattern Byte 1 Path B Bit 3
.equ	WUP1B4	= 4 ; Wake-Up Pattern Byte 1 Path B Bit 4
.equ	WUP1B5	= 5 ; Wake-Up Pattern Byte 1 Path B Bit 5
.equ	WUP1B6	= 6 ; Wake-Up Pattern Byte 1 Path B Bit 6
.equ	WUP1B7	= 7 ; Wake-Up Pattern Byte 1 Path B Bit 7

; WUP2A - Wake-Up Pattern Byte 2 Path A
.equ	WUP2A0	= 0 ; Wake-Up Pattern Byte 2 Path A Bit 0
.equ	WUP2A1	= 1 ; Wake-Up Pattern Byte 2 Path A Bit 1
.equ	WUP2A2	= 2 ; Wake-Up Pattern Byte 2 Path A Bit 2
.equ	WUP2A3	= 3 ; Wake-Up Pattern Byte 2 Path A Bit 3
.equ	WUP2A4	= 4 ; Wake-Up Pattern Byte 2 Path A Bit 4
.equ	WUP2A5	= 5 ; Wake-Up Pattern Byte 2 Path A Bit 5
.equ	WUP2A6	= 6 ; Wake-Up Pattern Byte 2 Path A Bit 6
.equ	WUP2A7	= 7 ; Wake-Up Pattern Byte 2 Path A Bit 7

; WUP2B - Wake-Up Pattern Byte 2 Path B
.equ	WUP2B0	= 0 ; Wake-Up Pattern Byte 2 Path B Bit 0
.equ	WUP2B1	= 1 ; Wake-Up Pattern Byte 2 Path B Bit 1
.equ	WUP2B2	= 2 ; Wake-Up Pattern Byte 2 Path B Bit 2
.equ	WUP2B3	= 3 ; Wake-Up Pattern Byte 2 Path B Bit 3
.equ	WUP2B4	= 4 ; Wake-Up Pattern Byte 2 Path B Bit 4
.equ	WUP2B5	= 5 ; Wake-Up Pattern Byte 2 Path B Bit 5
.equ	WUP2B6	= 6 ; Wake-Up Pattern Byte 2 Path B Bit 6
.equ	WUP2B7	= 7 ; Wake-Up Pattern Byte 2 Path B Bit 7

; WUP3A - Wake-Up Pattern Byte 3 Path A
.equ	WUP3A0	= 0 ; Wake-Up Pattern Byte 3 Path A Bit 0
.equ	WUP3A1	= 1 ; Wake-Up Pattern Byte 3 Path A Bit 1
.equ	WUP3A2	= 2 ; Wake-Up Pattern Byte 3 Path A Bit 2
.equ	WUP3A3	= 3 ; Wake-Up Pattern Byte 3 Path A Bit 3
.equ	WUP3A4	= 4 ; Wake-Up Pattern Byte 3 Path A Bit 4
.equ	WUP3A5	= 5 ; Wake-Up Pattern Byte 3 Path A Bit 5
.equ	WUP3A6	= 6 ; Wake-Up Pattern Byte 3 Path A Bit 6
.equ	WUP3A7	= 7 ; Wake-Up Pattern Byte 3 Path A Bit 7

; WUP3B - Wake-Up Pattern Byte 3 Path B
.equ	WUP3B0	= 0 ; Wake-Up Pattern Byte 3 Path B Bit 0
.equ	WUP3B1	= 1 ; Wake-Up Pattern Byte 3 Path B Bit 1
.equ	WUP3B2	= 2 ; Wake-Up Pattern Byte 3 Path B Bit 2
.equ	WUP3B3	= 3 ; Wake-Up Pattern Byte 3 Path B Bit 3
.equ	WUP3B4	= 4 ; Wake-Up Pattern Byte 3 Path B Bit 4
.equ	WUP3B5	= 5 ; Wake-Up Pattern Byte 3 Path B Bit 5
.equ	WUP3B6	= 6 ; Wake-Up Pattern Byte 3 Path B Bit 6
.equ	WUP3B7	= 7 ; Wake-Up Pattern Byte 3 Path B Bit 7

; WUP4A - Wake-Up Pattern Byte 4 Path A
.equ	WUP4A0	= 0 ; Wake-Up Pattern Byte 4 Path A Bit 0
.equ	WUP4A1	= 1 ; Wake-Up Pattern Byte 4 Path A Bit 1
.equ	WUP4A2	= 2 ; Wake-Up Pattern Byte 4 Path A Bit 2
.equ	WUP4A3	= 3 ; Wake-Up Pattern Byte 4 Path A Bit 3
.equ	WUP4A4	= 4 ; Wake-Up Pattern Byte 4 Path A Bit 4
.equ	WUP4A5	= 5 ; Wake-Up Pattern Byte 4 Path A Bit 5
.equ	WUP4A6	= 6 ; Wake-Up Pattern Byte 4 Path A Bit 6
.equ	WUP4A7	= 7 ; Wake-Up Pattern Byte 4 Path A Bit 7

; WUP4B - Wake-Up Pattern Byte 4 Path B
.equ	WUP4B0	= 0 ; Wake-Up Pattern Byte 4 Path B Bit 0
.equ	WUP4B1	= 1 ; Wake-Up Pattern Byte 4 Path B Bit 1
.equ	WUP4B2	= 2 ; Wake-Up Pattern Byte 4 Path B Bit 2
.equ	WUP4B3	= 3 ; Wake-Up Pattern Byte 4 Path B Bit 3
.equ	WUP4B4	= 4 ; Wake-Up Pattern Byte 4 Path B Bit 4
.equ	WUP4B5	= 5 ; Wake-Up Pattern Byte 4 Path B Bit 5
.equ	WUP4B6	= 6 ; Wake-Up Pattern Byte 4 Path B Bit 6
.equ	WUP4B7	= 7 ; Wake-Up Pattern Byte 4 Path B Bit 7

; WUPLA - Wake-Up Pattern Length Path A
.equ	WUPLA0	= 0 ; Wake-Up Pattern Length Path A Bit 0
.equ	WUPLA1	= 1 ; Wake-Up Pattern Length Path A Bit 1
.equ	WUPLA2	= 2 ; Wake-Up Pattern Length Path A Bit 2
.equ	WUPLA3	= 3 ; Wake-Up Pattern Length Path A Bit 3
.equ	WUPLA4	= 4 ; Wake-Up Pattern Length Path A Bit 4
.equ	WUPLA5	= 5 ; Wake-Up Pattern Length Path A Bit 5

; WUPLB - Wake-Up Pattern Length Path B
.equ	WUPLB0	= 0 ; Wake-Up Pattern Length Path B Bit 0
.equ	WUPLB1	= 1 ; Wake-Up Pattern Length Path B Bit 1
.equ	WUPLB2	= 2 ; Wake-Up Pattern Length Path B Bit 2
.equ	WUPLB3	= 3 ; Wake-Up Pattern Length Path B Bit 3
.equ	WUPLB4	= 4 ; Wake-Up Pattern Length Path B Bit 4
.equ	WUPLB5	= 5 ; Wake-Up Pattern Length Path B Bit 5

; WUPTA - Wake-Up Pattern Threshold Path A
.equ	WUPTA0	= 0 ; Wake-Up Pattern Threshold Path A Bit 0
.equ	WUPTA1	= 1 ; Wake-Up Pattern Threshold Path A Bit 1
.equ	WUPTA2	= 2 ; Wake-Up Pattern Threshold Path A Bit 2
.equ	WUPTA3	= 3 ; Wake-Up Pattern Threshold Path A Bit 3
.equ	WUPTA4	= 4 ; Wake-Up Pattern Threshold Path A Bit 4

; WUPTB - Wake-Up Pattern Threshold Path B
.equ	WUPTB0	= 0 ; Wake-Up Pattern Threshold Path B Bit 0
.equ	WUPTB1	= 1 ; Wake-Up Pattern Threshold Path B Bit 1
.equ	WUPTB2	= 2 ; Wake-Up Pattern Threshold Path B Bit 2
.equ	WUPTB3	= 3 ; Wake-Up Pattern Threshold Path B Bit 3
.equ	WUPTB4	= 4 ; Wake-Up Pattern Threshold Path B Bit 4


; ***** GPIOREGS *****************
; GPIOR0 - General Purpose I/O Register 0
.equ	GPIOR00	= 0 ; General Purpose I/O Register 0 Bit 0
.equ	GPIOR01	= 1 ; General Purpose I/O Register 0 Bit 1
.equ	GPIOR02	= 2 ; General Purpose I/O Register 0 Bit 2
.equ	GPIOR03	= 3 ; General Purpose I/O Register 0 Bit 3
.equ	GPIOR04	= 4 ; General Purpose I/O Register 0 Bit 4
.equ	GPIOR05	= 5 ; General Purpose I/O Register 0 Bit 5
.equ	GPIOR06	= 6 ; General Purpose I/O Register 0 Bit 6
.equ	GPIOR07	= 7 ; General Purpose I/O Register 0 Bit 7

; GPIOR1 - General Purpose I/O Register 1
.equ	GPIOR10	= 0 ; General Purpose I/O Register 1 Bit 0
.equ	GPIOR11	= 1 ; General Purpose I/O Register 1 Bit 1
.equ	GPIOR12	= 2 ; General Purpose I/O Register 1 Bit 2
.equ	GPIOR13	= 3 ; General Purpose I/O Register 1 Bit 3
.equ	GPIOR14	= 4 ; General Purpose I/O Register 1 Bit 4
.equ	GPIOR15	= 5 ; General Purpose I/O Register 1 Bit 5
.equ	GPIOR16	= 6 ; General Purpose I/O Register 1 Bit 6
.equ	GPIOR17	= 7 ; General Purpose I/O Register 1 Bit 7

; GPIOR2 - General Purpose I/O Register 2
.equ	GPIOR20	= 0 ; General Purpose I/O Register 2 Bit 0
.equ	GPIOR21	= 1 ; General Purpose I/O Register 2 Bit 1
.equ	GPIOR22	= 2 ; General Purpose I/O Register 2 Bit 2
.equ	GPIOR23	= 3 ; General Purpose I/O Register 2 Bit 3
.equ	GPIOR24	= 4 ; General Purpose I/O Register 2 Bit 4
.equ	GPIOR25	= 5 ; General Purpose I/O Register 2 Bit 5
.equ	GPIOR26	= 6 ; General Purpose I/O Register 2 Bit 6
.equ	GPIOR27	= 7 ; General Purpose I/O Register 2 Bit 7

; GPIOR3 - General Purpose I/O Register 3
.equ	GPIOR30	= 0 ; General Purpose I/O Register 3 Bit 0
.equ	GPIOR31	= 1 ; General Purpose I/O Register 3 Bit 1
.equ	GPIOR32	= 2 ; General Purpose I/O Register 3 Bit 2
.equ	GPIOR33	= 3 ; General Purpose I/O Register 3 Bit 3
.equ	GPIOR34	= 4 ; General Purpose I/O Register 3 Bit 4
.equ	GPIOR35	= 5 ; General Purpose I/O Register 3 Bit 5
.equ	GPIOR36	= 6 ; General Purpose I/O Register 3 Bit 6
.equ	GPIOR37	= 7 ; General Purpose I/O Register 3 Bit 7

; GPIOR4 - General Purpose I/O Register 4
.equ	GPIOR40	= 0 ; General Purpose I/O Register 4 Bit 0
.equ	GPIOR41	= 1 ; General Purpose I/O Register 4 Bit 1
.equ	GPIOR42	= 2 ; General Purpose I/O Register 4 Bit 2
.equ	GPIOR43	= 3 ; General Purpose I/O Register 4 Bit 3
.equ	GPIOR44	= 4 ; General Purpose I/O Register 4 Bit 4
.equ	GPIOR45	= 5 ; General Purpose I/O Register 4 Bit 5
.equ	GPIOR46	= 6 ; General Purpose I/O Register 4 Bit 6
.equ	GPIOR47	= 7 ; General Purpose I/O Register 4 Bit 7

; GPIOR5 - General Purpose I/O Register 5
.equ	GPIOR50	= 0 ; General Purpose I/O Register 5 Bit 0
.equ	GPIOR51	= 1 ; General Purpose I/O Register 5 Bit 1
.equ	GPIOR52	= 2 ; General Purpose I/O Register 5 Bit 2
.equ	GPIOR53	= 3 ; General Purpose I/O Register 5 Bit 3
.equ	GPIOR54	= 4 ; General Purpose I/O Register 5 Bit 4
.equ	GPIOR55	= 5 ; General Purpose I/O Register 5 Bit 5
.equ	GPIOR56	= 6 ; General Purpose I/O Register 5 Bit 6
.equ	GPIOR57	= 7 ; General Purpose I/O Register 5 Bit 7

; GPIOR6 - General Purpose I/O Register 6
.equ	GPIOR60	= 0 ; General Purpose I/O Register 6 Bit 0
.equ	GPIOR61	= 1 ; General Purpose I/O Register 6 Bit 1
.equ	GPIOR62	= 2 ; General Purpose I/O Register 6 Bit 2
.equ	GPIOR63	= 3 ; General Purpose I/O Register 6 Bit 3
.equ	GPIOR64	= 4 ; General Purpose I/O Register 6 Bit 4
.equ	GPIOR65	= 5 ; General Purpose I/O Register 6 Bit 5
.equ	GPIOR66	= 6 ; General Purpose I/O Register 6 Bit 6
.equ	GPIOR67	= 7 ; General Purpose I/O Register 6 Bit 7


; ***** IDCHK *****************
; IDB0 - ID Check Byte 0
.equ	IDB00	= 0 ; ID Check Byte 0 Bit 0
.equ	IDB01	= 1 ; ID Check Byte 0 Bit 1
.equ	IDB02	= 2 ; ID Check Byte 0 Bit 2
.equ	IDB03	= 3 ; ID Check Byte 0 Bit 3
.equ	IDB04	= 4 ; ID Check Byte 0 Bit 4
.equ	IDB05	= 5 ; ID Check Byte 0 Bit 5
.equ	IDB06	= 6 ; ID Check Byte 0 Bit 6
.equ	IDB07	= 7 ; ID Check Byte 0 Bit 7

; IDB1 - ID Check Byte 1
.equ	IDB10	= 0 ; ID Check Byte 1 Bit 0
.equ	IDB11	= 1 ; ID Check Byte 1 Bit 1
.equ	IDB12	= 2 ; ID Check Byte 1 Bit 2
.equ	IDB13	= 3 ; ID Check Byte 1 Bit 3
.equ	IDB14	= 4 ; ID Check Byte 1 Bit 4
.equ	IDB15	= 5 ; ID Check Byte 1 Bit 5
.equ	IDB16	= 6 ; ID Check Byte 1 Bit 6
.equ	IDB17	= 7 ; ID Check Byte 1 Bit 7

; IDB2 - ID Check Byte 2
.equ	IDB20	= 0 ; ID Check Byte 2 Bit 0
.equ	IDB21	= 1 ; ID Check Byte 2 Bit 1
.equ	IDB22	= 2 ; ID Check Byte 2 Bit 2
.equ	IDB23	= 3 ; ID Check Byte 2 Bit 3
.equ	IDB24	= 4 ; ID Check Byte 2 Bit 4
.equ	IDB25	= 5 ; ID Check Byte 2 Bit 5
.equ	IDB26	= 6 ; ID Check Byte 2 Bit 6
.equ	IDB27	= 7 ; ID Check Byte 2 Bit 7

; IDB3 - ID Check Byte 3
.equ	IDB30	= 0 ; ID Check Byte 3 Bit 0
.equ	IDB31	= 1 ; ID Check Byte 3 Bit 1
.equ	IDB32	= 2 ; ID Check Byte 3 Bit 2
.equ	IDB33	= 3 ; ID Check Byte 3 Bit 3
.equ	IDB34	= 4 ; ID Check Byte 3 Bit 4
.equ	IDB35	= 5 ; ID Check Byte 3 Bit 5
.equ	IDB36	= 6 ; ID Check Byte 3 Bit 6
.equ	IDB37	= 7 ; ID Check Byte 3 Bit 7

; IDC - ID Check Configuration
.equ	IDL0	= 0 ; ID Length
.equ	IDL1	= 1 ; ID Length
.equ	IDBO0	= 2 ; ID Byte Offset
.equ	IDBO1	= 3 ; ID Byte Offset
.equ	IDFIM	= 5 ; ID Full Interrupt Mask
.equ	IDCLR	= 6 ; ID Clear
.equ	IDCE	= 7 ; ID Check Execute

; IDS - ID Check Status
.equ	IDOK	= 0 ; ID Check Ok Flag
.equ	IDFULL	= 1 ; ID Full Flag


; ***** INT *****************
; EICRA - External Interrupt Control Register A
.equ	ISC00	= 0 ; Interrupt Sense Control 0
.equ	ISC01	= 1 ; Interrupt Sense Control 0
.equ	ISC10	= 2 ; Interrupt Sense Control 1
.equ	ISC11	= 3 ; Interrupt Sense Control 1

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0 ; External Interrupt Flag 0
.equ	INTF1	= 1 ; External Interrupt Flag 1

; EIMSK - External Interrupt Mask
.equ	INT0	= 0 ; External Interrupt Request 0 Enable
.equ	INT1	= 1 ; External Interrupt Request 1 Enable

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0 ; Pin Change Interrupt Enable 0
.equ	PCIE1	= 1 ; Pin Change Interrupt Enable 1

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0 ; Pin Change Interrupt Flag 0
.equ	PCIF1	= 1 ; Pin Change Interrupt Flag 1

; PCMSK0 - Pin Change Mask Register 0
.equ	PCINT0	= 0 ; Pin Change Enable Mask
.equ	PCINT1	= 1 ; Pin Change Enable Mask
.equ	PCINT2	= 2 ; Pin Change Enable Mask
.equ	PCINT3	= 3 ; Pin Change Enable Mask
.equ	PCINT4	= 4 ; Pin Change Enable Mask
.equ	PCINT5	= 5 ; Pin Change Enable Mask
.equ	PCINT6	= 6 ; Pin Change Enable Mask
.equ	PCINT7	= 7 ; Pin Change Enable Mask

; PCMSK1 - Pin Change Mask Register 1
.equ	PCINT8	= 0 ; Pin Change Enable Mask
.equ	PCINT9	= 1 ; Pin Change Enable Mask
.equ	PCINT10	= 2 ; Pin Change Enable Mask
.equ	PCINT11	= 3 ; Pin Change Enable Mask
.equ	PCINT12	= 4 ; Pin Change Enable Mask
.equ	PCINT13	= 5 ; Pin Change Enable Mask


; ***** LIN_UART *****************
; LINBRRH - LIN/UART Baud Rate Register High Byte
.equ	LDIV8	= 0 ; LIN/UART Clock Divider
.equ	LDIV9	= 1 ; LIN/UART Clock Divider
.equ	LDIV10	= 2 ; LIN/UART Clock Divider
.equ	LDIV11	= 3 ; LIN/UART Clock Divider

; LINBRRL - LIN/UART Baud Rate Register Low Byte
.equ	LDIV0	= 0 ; LIN/UART Clock Divider
.equ	LDIV1	= 1 ; LIN/UART Clock Divider
.equ	LDIV2	= 2 ; LIN/UART Clock Divider
.equ	LDIV3	= 3 ; LIN/UART Clock Divider
.equ	LDIV4	= 4 ; LIN/UART Clock Divider
.equ	LDIV5	= 5 ; LIN/UART Clock Divider
.equ	LDIV6	= 6 ; LIN/UART Clock Divider
.equ	LDIV7	= 7 ; LIN/UART Clock Divider

; LINBTR - LIN/UART Bit Timing Register
.equ	LBT0	= 0 ; LIN/UART Bit Timing
.equ	LBT1	= 1 ; LIN/UART Bit Timing
.equ	LBT2	= 2 ; LIN/UART Bit Timing
.equ	LBT3	= 3 ; LIN/UART Bit Timing
.equ	LBT4	= 4 ; LIN/UART Bit Timing
.equ	LBT5	= 5 ; LIN/UART Bit Timing
.equ	LDISR	= 7 ; LIN/UART Disable Bit Timing Resynchronization

; LINCR - LIN/UART Control Register
.equ	LCMD0	= 0 ; LIN/UART Command and Mode
.equ	LCMD1	= 1 ; LIN/UART Command and Mode
.equ	LCMD2	= 2 ; LIN/UART Command and Mode
.equ	LENA	= 3 ; LIN/UART Enable
.equ	LCONF0	= 4 ; LIN/UART Configuration
.equ	LCONF1	= 5 ; LIN/UART Configuration
.equ	LIN13	= 6 ; LIN 1.3 Mode
.equ	LSWRES	= 7 ; LIN/UART Software Reset

; LINDAT - LIN/UART Data Register
.equ	LDATA0	= 0 ; LIN/UART Data
.equ	LDATA1	= 1 ; LIN/UART Data
.equ	LDATA2	= 2 ; LIN/UART Data
.equ	LDATA3	= 3 ; LIN/UART Data
.equ	LDATA4	= 4 ; LIN/UART Data
.equ	LDATA5	= 5 ; LIN/UART Data
.equ	LDATA6	= 6 ; LIN/UART Data
.equ	LDATA7	= 7 ; LIN/UART Data

; LINDLR - LIN/UART Data Length Register
.equ	LRXDL0	= 0 ; LIN Receive Data Length
.equ	LRXDL1	= 1 ; LIN Receive Data Length
.equ	LRXDL2	= 2 ; LIN Receive Data Length
.equ	LRXDL3	= 3 ; LIN Receive Data Length
.equ	LTXDL0	= 4 ; LIN Transmit Data Length
.equ	LTXDL1	= 5 ; LIN Transmit Data Length
.equ	LTXDL2	= 6 ; LIN Transmit Data Length
.equ	LTXDL3	= 7 ; LIN Transmit Data Length

; LINENIR - LIN/UART Enable Interrupt Register
.equ	LENRXOK	= 0 ; LIN/UART Enable Receive Ok Interrupt
.equ	LENTXOK	= 1 ; LIN/UART Enable Transmit Ok Interrupt
.equ	LENIDOK	= 2 ; LIN Enable Identifier Ok Interrupt
.equ	LENERR	= 3 ; LIN/UART Enable Error Interrupt

; LINERR - LIN/UART Error Register
.equ	LBERR	= 0 ; LIN Bit Error Flag
.equ	LCERR	= 1 ; LIN Checksum Error Flag
.equ	LPERR	= 2 ; LIN Parity Error Flag
.equ	LSERR	= 3 ; LIN Synchronization Error Flag
.equ	LFERR	= 4 ; LIN/UART Framing Error Flag
.equ	LOVERR	= 5 ; LIN/UART Overrun Error Flag
.equ	LTOERR	= 6 ; LIN Frame Time Out Error Flag
.equ	LABORT	= 7 ; LIN Abort Flag

; LINIDR - LIN/UART Identifier Register
.equ	LID0	= 0 ; LIN Identifier
.equ	LID1	= 1 ; LIN Identifier
.equ	LID2	= 2 ; LIN Identifier
.equ	LID3	= 3 ; LIN Identifier
.equ	LID4	= 4 ; LIN Identifier
.equ	LID5	= 5 ; LIN Identifier
.equ	LP0	= 6 ; LIN Parity
.equ	LP1	= 7 ; LIN Parity

; LINSEL - LIN/UART Data Buffer Selection
.equ	LINDX0	= 0 ; LIN Data Buffer Index
.equ	LINDX1	= 1 ; LIN Data Buffer Index
.equ	LINDX2	= 2 ; LIN Data Buffer Index
.equ	LAINC	= 3 ; LIN Auto Increment of Data Buffer Index Disable

; LINSIR - LIN Status and Interrupt Register
.equ	LRXOK	= 0 ; LIN/UART Receive Ok Flag
.equ	LTXOK	= 1 ; LIN/UART Transmit Ok Flag
.equ	LIDOK	= 2 ; LIN Identifier Ok Flag
.equ	LERR	= 3 ; LIN/UART Error Flag
.equ	LBUSY	= 4 ; LIN/UART Busy Flag
.equ	LIDST0	= 5 ; LIN Identifier Status
.equ	LIDST1	= 6 ; LIN Identifier Status
.equ	LIDST2	= 7 ; LIN Identifier Status


; ***** OCCOUNT *****************
; OCCNT - Oscillator Calibration Counter Value
.equ	OCCNT0	= 0 ; Oscillator Calibration Counter Value Bit 0
.equ	OCCNT1	= 1 ; Oscillator Calibration Counter Value Bit 1
.equ	OCCNT2	= 2 ; Oscillator Calibration Counter Value Bit 2
.equ	OCCNT3	= 3 ; Oscillator Calibration Counter Value Bit 3
.equ	OCCNT4	= 4 ; Oscillator Calibration Counter Value Bit 4
.equ	OCCNT5	= 5 ; Oscillator Calibration Counter Value Bit 5
.equ	OCCNT6	= 6 ; Oscillator Calibration Counter Value Bit 6
.equ	OCCNT7	= 7 ; Oscillator Calibration Counter Value Bit 7

; OCCR - Oscillator Calibration Counter Configuration Register
.equ	OCEN	= 0 ; Oscillator Calibration Counter Enable
.equ	OCSEL	= 1 ; Oscillator Calibration Select Target

; OCGATE - Oscillator Calibration Counter Gate
.equ	OCGATE0	= 0 ; Oscillator Calibration Counter Gate Bit 0
.equ	OCGATE1	= 1 ; Oscillator Calibration Counter Gate Bit 1
.equ	OCGATE2	= 2 ; Oscillator Calibration Counter Gate Bit 2
.equ	OCGATE3	= 3 ; Oscillator Calibration Counter Gate Bit 3
.equ	OCGATE4	= 4 ; Oscillator Calibration Counter Gate Bit 4
.equ	OCGATE5	= 5 ; Oscillator Calibration Counter Gate Bit 5
.equ	OCGATE6	= 6 ; Oscillator Calibration Counter Gate Bit 6
.equ	OCGATE7	= 7 ; Oscillator Calibration Counter Gate Bit 7


; ***** PORTB *****************
; PINB - Port B Input Pins
.equ	PINB0	= 0 ; Port B Input Pins Bit 0
.equ	PINB1	= 1 ; Port B Input Pins Bit 1
.equ	PINB2	= 2 ; Port B Input Pins Bit 2
.equ	PINB3	= 3 ; Port B Input Pins Bit 3
.equ	PINB4	= 4 ; Port B Input Pins Bit 4
.equ	PINB5	= 5 ; Port B Input Pins Bit 5
.equ	PINB6	= 6 ; Port B Input Pins Bit 6
.equ	PINB7	= 7 ; Port B Input Pins Bit 7

; DDRB - Port B Data Direction
.equ	DDRB0	= 0 ; Port B Data Direction Bit 0
.equ	DDRB1	= 1 ; Port B Data Direction Bit 1
.equ	DDRB2	= 2 ; Port B Data Direction Bit 2
.equ	DDRB3	= 3 ; Port B Data Direction Bit 3
.equ	DDRB4	= 4 ; Port B Data Direction Bit 4
.equ	DDRB5	= 5 ; Port B Data Direction Bit 5
.equ	DDRB6	= 6 ; Port B Data Direction Bit 6
.equ	DDRB7	= 7 ; Port B Data Direction Bit 7

; PORTB - Port B Data Register
.equ	PORTB0	= 0 ; Port B Data Register Bit 0
.equ	PORTB1	= 1 ; Port B Data Register Bit 1
.equ	PORTB2	= 2 ; Port B Data Register Bit 2
.equ	PORTB3	= 3 ; Port B Data Register Bit 3
.equ	PORTB4	= 4 ; Port B Data Register Bit 4
.equ	PORTB5	= 5 ; Port B Data Register Bit 5
.equ	PORTB6	= 6 ; Port B Data Register Bit 6
.equ	PORTB7	= 7 ; Port B Data Register Bit 7


; ***** PORTC *****************
; PINC - Port C Input Pins
.equ	PINC0	= 0 ; Port C Input Pins Bit 0
.equ	PINC1	= 1 ; Port C Input Pins Bit 1
.equ	PINC2	= 2 ; Port C Input Pins Bit 2
.equ	PINC3	= 3 ; Port C Input Pins Bit 3
.equ	PINC4	= 4 ; Port C Input Pins Bit 4
.equ	PINC5	= 5 ; Port C Input Pins Bit 5

; DDRC - Port C Data Direction
.equ	DDRC0	= 0 ; Port C Data Direction Bit 0
.equ	DDRC1	= 1 ; Port C Data Direction Bit 1
.equ	DDRC2	= 2 ; Port C Data Direction Bit 2
.equ	DDRC3	= 3 ; Port C Data Direction Bit 3
.equ	DDRC4	= 4 ; Port C Data Direction Bit 4
.equ	DDRC5	= 5 ; Port C Data Direction Bit 5

; PORTC - Port C Data Register
.equ	PORTC0	= 0 ; Port C Data Register Bit 0
.equ	PORTC1	= 1 ; Port C Data Register Bit 1
.equ	PORTC2	= 2 ; Port C Data Register Bit 2
.equ	PORTC3	= 3 ; Port C Data Register Bit 3
.equ	PORTC4	= 4 ; Port C Data Register Bit 4
.equ	PORTC5	= 5 ; Port C Data Register Bit 5


; ***** PORTS *****************
; DBCR - Debounce Control Register
.equ	DBMD	= 0 ; Debounce Mode
.equ	DBCS	= 1 ; Debounce Clock Select
.equ	DBTMS	= 2 ; Debounce Timer Mask Select

; DBENB - Debounce Enable Port B
.equ	DBENB0	= 0 ; Debounce Enable Port B Bit 0
.equ	DBENB1	= 1 ; Debounce Enable Port B Bit 1
.equ	DBENB2	= 2 ; Debounce Enable Port B Bit 2
.equ	DBENB3	= 3 ; Debounce Enable Port B Bit 3
.equ	DBENB4	= 4 ; Debounce Enable Port B Bit 4
.equ	DBENB5	= 5 ; Debounce Enable Port B Bit 5
.equ	DBENB6	= 6 ; Debounce Enable Port B Bit 6
.equ	DBENB7	= 7 ; Debounce Enable Port B Bit 7

; DBENC - Debounce Enable Port C
.equ	DBENC0	= 0 ; Debounce Enable Port C Bit 0
.equ	DBENC1	= 1 ; Debounce Enable Port C Bit 1
.equ	DBENC2	= 2 ; Debounce Enable Port C Bit 2
.equ	DBENC3	= 3 ; Debounce Enable Port C Bit 3
.equ	DBENC4	= 4 ; Debounce Enable Port C Bit 4
.equ	DBENC5	= 5 ; Debounce Enable Port C Bit 5

; DBGSW - Debug Support Switch
.equ	DBGGS0	= 0 ; Debug Support Group Select
.equ	DBGGS1	= 1 ; Debug Support Group Select
.equ	DBGGS2	= 2 ; Debug Support Group Select
.equ	DBGGS3	= 3 ; Debug Support Group Select
.equ	CPBFOS0	= 4 ; CPU Busy Flag Output Select
.equ	CPBFOS1	= 5 ; CPU Busy Flag Output Select
.equ	CPBF	= 6 ; CPU Busy Flag
.equ	DBGSE	= 7 ; Debug Support Switch Enable

; DBTC - Debounce Timer Compare
.equ	DBTC0	= 0 ; Debounce Timer Compare Bit 0
.equ	DBTC1	= 1 ; Debounce Timer Compare Bit 1
.equ	DBTC2	= 2 ; Debounce Timer Compare Bit 2
.equ	DBTC3	= 3 ; Debounce Timer Compare Bit 3
.equ	DBTC4	= 4 ; Debounce Timer Compare Bit 4
.equ	DBTC5	= 5 ; Debounce Timer Compare Bit 5
.equ	DBTC6	= 6 ; Debounce Timer Compare Bit 6
.equ	DBTC7	= 7 ; Debounce Timer Compare Bit 7


; ***** RSSIB *****************
; RSCOM - RSSI Compensation Register
.equ	RSDC	= 0 ; RSSI Damping Compensation
.equ	RSIFC	= 1 ; RSSI IF Amplifier Compensation
.equ	RSHISC	= 2 ; RSSI LNA High Sensitivity Compensation

; RSHDV - RSSI High Band Damping Value
.equ	RSHDV0	= 0 ; RSSI High Band Damping Value Bit 0
.equ	RSHDV1	= 1 ; RSSI High Band Damping Value Bit 1
.equ	RSHDV2	= 2 ; RSSI High Band Damping Value Bit 2
.equ	RSHDV3	= 3 ; RSSI High Band Damping Value Bit 3
.equ	RSHDV4	= 4 ; RSSI High Band Damping Value Bit 4
.equ	RSHDV5	= 5 ; RSSI High Band Damping Value Bit 5
.equ	RSHDV6	= 6 ; RSSI High Band Damping Value Bit 6
.equ	RSHDV7	= 7 ; RSSI High Band Damping Value Bit 7

; RSHSG - RSSI LNA High Sensitivity Gain
.equ	RSHSG0	= 0 ; RSSI LNA High Sensitivity Gain Bit 0
.equ	RSHSG1	= 1 ; RSSI LNA High Sensitivity Gain Bit 1
.equ	RSHSG2	= 2 ; RSSI LNA High Sensitivity Gain Bit 2
.equ	RSHSG3	= 3 ; RSSI LNA High Sensitivity Gain Bit 3
.equ	RSHSG4	= 4 ; RSSI LNA High Sensitivity Gain Bit 4
.equ	RSHSG5	= 5 ; RSSI LNA High Sensitivity Gain Bit 5
.equ	RSHSG6	= 6 ; RSSI LNA High Sensitivity Gain Bit 6
.equ	RSHSG7	= 7 ; RSSI LNA High Sensitivity Gain Bit 7

; RSIFG - RSSI IF Amplifier Gain
.equ	RSIFG0	= 0 ; RSSI IF Amplifier Gain Bit 0
.equ	RSIFG1	= 1 ; RSSI IF Amplifier Gain Bit 1
.equ	RSIFG2	= 2 ; RSSI IF Amplifier Gain Bit 2
.equ	RSIFG3	= 3 ; RSSI IF Amplifier Gain Bit 3
.equ	RSIFG4	= 4 ; RSSI IF Amplifier Gain Bit 4
.equ	RSIFG5	= 5 ; RSSI IF Amplifier Gain Bit 5
.equ	RSIFG6	= 6 ; RSSI IF Amplifier Gain Bit 6
.equ	RSIFG7	= 7 ; RSSI IF Amplifier Gain Bit 7

; RSLDV - RSSI Low Band Damping Value
.equ	RSLDV0	= 0 ; RSSI Low Band Damping Value Bit 0
.equ	RSLDV1	= 1 ; RSSI Low Band Damping Value Bit 1
.equ	RSLDV2	= 2 ; RSSI Low Band Damping Value Bit 2
.equ	RSLDV3	= 3 ; RSSI Low Band Damping Value Bit 3
.equ	RSLDV4	= 4 ; RSSI Low Band Damping Value Bit 4
.equ	RSLDV5	= 5 ; RSSI Low Band Damping Value Bit 5
.equ	RSLDV6	= 6 ; RSSI Low Band Damping Value Bit 6
.equ	RSLDV7	= 7 ; RSSI Low Band Damping Value Bit 7

; RSSAV - RSSI Average Value
.equ	RSSAV0	= 0 ; RSSI Average Value Bit 0
.equ	RSSAV1	= 1 ; RSSI Average Value Bit 1
.equ	RSSAV2	= 2 ; RSSI Average Value Bit 2
.equ	RSSAV3	= 3 ; RSSI Average Value Bit 3
.equ	RSSAV4	= 4 ; RSSI Average Value Bit 4
.equ	RSSAV5	= 5 ; RSSI Average Value Bit 5
.equ	RSSAV6	= 6 ; RSSI Average Value Bit 6
.equ	RSSAV7	= 7 ; RSSI Average Value Bit 7

; RSSC - RSSI Configuration Register
.equ	RSUP0	= 0 ; RSSI Update Period
.equ	RSUP1	= 1 ; RSSI Update Period
.equ	RSUP2	= 2 ; RSSI Update Period
.equ	RSUP3	= 3 ; RSSI Update Period
.equ	RSWLH	= 4 ; RSSI Within Low and High Limits
.equ	RSHRX	= 5 ; RSSI High Band Reception
.equ	RSPKF	= 6 ; RSSI Peak Values to SFIFO

; RSSH - RSSI High Threshold
.equ	RSSH0	= 0 ; RSSI High Threshold Bit 0
.equ	RSSH1	= 1 ; RSSI High Threshold Bit 1
.equ	RSSH2	= 2 ; RSSI High Threshold Bit 2
.equ	RSSH3	= 3 ; RSSI High Threshold Bit 3
.equ	RSSH4	= 4 ; RSSI High Threshold Bit 4
.equ	RSSH5	= 5 ; RSSI High Threshold Bit 5
.equ	RSSH6	= 6 ; RSSI High Threshold Bit 6
.equ	RSSH7	= 7 ; RSSI High Threshold Bit 7

; RSSL - RSSI Low Threshold
.equ	RSSL0	= 0 ; RSSI Low Threshold Bit 0
.equ	RSSL1	= 1 ; RSSI Low Threshold Bit 1
.equ	RSSL2	= 2 ; RSSI Low Threshold Bit 2
.equ	RSSL3	= 3 ; RSSI Low Threshold Bit 3
.equ	RSSL4	= 4 ; RSSI Low Threshold Bit 4
.equ	RSSL5	= 5 ; RSSI Low Threshold Bit 5
.equ	RSSL6	= 6 ; RSSI Low Threshold Bit 6
.equ	RSSL7	= 7 ; RSSI Low Threshold Bit 7

; RSSPK - RSSI Peak Value
.equ	RSSPK0	= 0 ; RSSI Peak Value Bit 0
.equ	RSSPK1	= 1 ; RSSI Peak Value Bit 1
.equ	RSSPK2	= 2 ; RSSI Peak Value Bit 2
.equ	RSSPK3	= 3 ; RSSI Peak Value Bit 3
.equ	RSSPK4	= 4 ; RSSI Peak Value Bit 4
.equ	RSSPK5	= 5 ; RSSI Peak Value Bit 5
.equ	RSSPK6	= 6 ; RSSI Peak Value Bit 6
.equ	RSSPK7	= 7 ; RSSI Peak Value Bit 7


; ***** RXBUF *****************
; RXBC1 - Rx Buffer Configuration 1
.equ	RXCEA	= 0 ; RX CRC Enable data path A
.equ	RXCBLA0	= 1 ; Receive CRC Bit Length Path A
.equ	RXCBLA1	= 2 ; Receive CRC Bit Length Path A
.equ	RXLSBA	= 3 ; Receive Data LSB-First Path A
.equ	RXCEB	= 4 ; RX CRC Enable data path B
.equ	RXCBLB0	= 5 ; Receive CRC Bit Length Path B
.equ	RXCBLB1	= 6 ; Receive CRC Bit Length Path B
.equ	RXLSBB	= 7 ; Receive Data LSB-First Path B

; RXBC2 - Rx Buffer Configuration 2
.equ	RXBPB	= 0 ; RX Buffer Path Select
.equ	RXBF	= 1 ; RX Buffer Finish
.equ	RXBCLR	= 2 ; RX Buffer Clear

; RXCIHA - Rx CRC Init Value High Byte Path A
.equ	RXCIHA0	= 0 ; Rx CRC Init Value High Byte Path A Bit 0
.equ	RXCIHA1	= 1 ; Rx CRC Init Value High Byte Path A Bit 1
.equ	RXCIHA2	= 2 ; Rx CRC Init Value High Byte Path A Bit 2
.equ	RXCIHA3	= 3 ; Rx CRC Init Value High Byte Path A Bit 3
.equ	RXCIHA4	= 4 ; Rx CRC Init Value High Byte Path A Bit 4
.equ	RXCIHA5	= 5 ; Rx CRC Init Value High Byte Path A Bit 5
.equ	RXCIHA6	= 6 ; Rx CRC Init Value High Byte Path A Bit 6
.equ	RXCIHA7	= 7 ; Rx CRC Init Value High Byte Path A Bit 7

; RXCIHB - Rx CRC Init Value High Byte Path B
.equ	RXCIHB0	= 0 ; Rx CRC Init Value High Byte Path B Bit 0
.equ	RXCIHB1	= 1 ; Rx CRC Init Value High Byte Path B Bit 1
.equ	RXCIHB2	= 2 ; Rx CRC Init Value High Byte Path B Bit 2
.equ	RXCIHB3	= 3 ; Rx CRC Init Value High Byte Path B Bit 3
.equ	RXCIHB4	= 4 ; Rx CRC Init Value High Byte Path B Bit 4
.equ	RXCIHB5	= 5 ; Rx CRC Init Value High Byte Path B Bit 5
.equ	RXCIHB6	= 6 ; Rx CRC Init Value High Byte Path B Bit 6
.equ	RXCIHB7	= 7 ; Rx CRC Init Value High Byte Path B Bit 7

; RXCILA - Rx CRC Init Value Low Byte Path A
.equ	RXCILA0	= 0 ; Rx CRC Init Value Low Byte Path A Bit 0
.equ	RXCILA1	= 1 ; Rx CRC Init Value Low Byte Path A Bit 1
.equ	RXCILA2	= 2 ; Rx CRC Init Value Low Byte Path A Bit 2
.equ	RXCILA3	= 3 ; Rx CRC Init Value Low Byte Path A Bit 3
.equ	RXCILA4	= 4 ; Rx CRC Init Value Low Byte Path A Bit 4
.equ	RXCILA5	= 5 ; Rx CRC Init Value Low Byte Path A Bit 5
.equ	RXCILA6	= 6 ; Rx CRC Init Value Low Byte Path A Bit 6
.equ	RXCILA7	= 7 ; Rx CRC Init Value Low Byte Path A Bit 7

; RXCILB - Rx CRC Init Value Low Byte Path B
.equ	RXCILB0	= 0 ; Rx CRC Init Value Low Byte Path B Bit 0
.equ	RXCILB1	= 1 ; Rx CRC Init Value Low Byte Path B Bit 1
.equ	RXCILB2	= 2 ; Rx CRC Init Value Low Byte Path B Bit 2
.equ	RXCILB3	= 3 ; Rx CRC Init Value Low Byte Path B Bit 3
.equ	RXCILB4	= 4 ; Rx CRC Init Value Low Byte Path B Bit 4
.equ	RXCILB5	= 5 ; Rx CRC Init Value Low Byte Path B Bit 5
.equ	RXCILB6	= 6 ; Rx CRC Init Value Low Byte Path B Bit 6
.equ	RXCILB7	= 7 ; Rx CRC Init Value Low Byte Path B Bit 7

; RXCPHA - Rx CRC Polynomial High Byte Path A
.equ	RXCPHA0	= 0 ; Rx CRC Polynomial High Byte Path A Bit 0
.equ	RXCPHA1	= 1 ; Rx CRC Polynomial High Byte Path A Bit 1
.equ	RXCPHA2	= 2 ; Rx CRC Polynomial High Byte Path A Bit 2
.equ	RXCPHA3	= 3 ; Rx CRC Polynomial High Byte Path A Bit 3
.equ	RXCPHA4	= 4 ; Rx CRC Polynomial High Byte Path A Bit 4
.equ	RXCPHA5	= 5 ; Rx CRC Polynomial High Byte Path A Bit 5
.equ	RXCPHA6	= 6 ; Rx CRC Polynomial High Byte Path A Bit 6
.equ	RXCPHA7	= 7 ; Rx CRC Polynomial High Byte Path A Bit 7

; RXCPHB - Rx CRC Polynomial High Byte Path B
.equ	RXCPHB0	= 0 ; Rx CRC Polynomial High Byte Path B Bit 0
.equ	RXCPHB1	= 1 ; Rx CRC Polynomial High Byte Path B Bit 1
.equ	RXCPHB2	= 2 ; Rx CRC Polynomial High Byte Path B Bit 2
.equ	RXCPHB3	= 3 ; Rx CRC Polynomial High Byte Path B Bit 3
.equ	RXCPHB4	= 4 ; Rx CRC Polynomial High Byte Path B Bit 4
.equ	RXCPHB5	= 5 ; Rx CRC Polynomial High Byte Path B Bit 5
.equ	RXCPHB6	= 6 ; Rx CRC Polynomial High Byte Path B Bit 6
.equ	RXCPHB7	= 7 ; Rx CRC Polynomial High Byte Path B Bit 7

; RXCPLA - Rx CRC Polynomial Low Byte Path A
.equ	RXCPLA0	= 0 ; Rx CRC Polynomial Low Byte Path A Bit 0
.equ	RXCPLA1	= 1 ; Rx CRC Polynomial Low Byte Path A Bit 1
.equ	RXCPLA2	= 2 ; Rx CRC Polynomial Low Byte Path A Bit 2
.equ	RXCPLA3	= 3 ; Rx CRC Polynomial Low Byte Path A Bit 3
.equ	RXCPLA4	= 4 ; Rx CRC Polynomial Low Byte Path A Bit 4
.equ	RXCPLA5	= 5 ; Rx CRC Polynomial Low Byte Path A Bit 5
.equ	RXCPLA6	= 6 ; Rx CRC Polynomial Low Byte Path A Bit 6
.equ	RXCPLA7	= 7 ; Rx CRC Polynomial Low Byte Path A Bit 7

; RXCPLB - Rx CRC Polynomial Low Byte Path B
.equ	RXCPLB0	= 0 ; Rx CRC Polynomial Low Byte Path B Bit 0
.equ	RXCPLB1	= 1 ; Rx CRC Polynomial Low Byte Path B Bit 1
.equ	RXCPLB2	= 2 ; Rx CRC Polynomial Low Byte Path B Bit 2
.equ	RXCPLB3	= 3 ; Rx CRC Polynomial Low Byte Path B Bit 3
.equ	RXCPLB4	= 4 ; Rx CRC Polynomial Low Byte Path B Bit 4
.equ	RXCPLB5	= 5 ; Rx CRC Polynomial Low Byte Path B Bit 5
.equ	RXCPLB6	= 6 ; Rx CRC Polynomial Low Byte Path B Bit 6
.equ	RXCPLB7	= 7 ; Rx CRC Polynomial Low Byte Path B Bit 7

; RXCRHA - Rx CRC Result High Byte Path A
.equ	RXCRHA0	= 0 ; Rx CRC Result High Byte Path A Bit 0
.equ	RXCRHA1	= 1 ; Rx CRC Result High Byte Path A Bit 1
.equ	RXCRHA2	= 2 ; Rx CRC Result High Byte Path A Bit 2
.equ	RXCRHA3	= 3 ; Rx CRC Result High Byte Path A Bit 3
.equ	RXCRHA4	= 4 ; Rx CRC Result High Byte Path A Bit 4
.equ	RXCRHA5	= 5 ; Rx CRC Result High Byte Path A Bit 5
.equ	RXCRHA6	= 6 ; Rx CRC Result High Byte Path A Bit 6
.equ	RXCRHA7	= 7 ; Rx CRC Result High Byte Path A Bit 7

; RXCRHB - Rx CRC Result High Byte Path B
.equ	RXCRHB0	= 0 ; Rx CRC Result High Byte Path B Bit 0
.equ	RXCRHB1	= 1 ; Rx CRC Result High Byte Path B Bit 1
.equ	RXCRHB2	= 2 ; Rx CRC Result High Byte Path B Bit 2
.equ	RXCRHB3	= 3 ; Rx CRC Result High Byte Path B Bit 3
.equ	RXCRHB4	= 4 ; Rx CRC Result High Byte Path B Bit 4
.equ	RXCRHB5	= 5 ; Rx CRC Result High Byte Path B Bit 5
.equ	RXCRHB6	= 6 ; Rx CRC Result High Byte Path B Bit 6
.equ	RXCRHB7	= 7 ; Rx CRC Result High Byte Path B Bit 7

; RXCRLA - Rx CRC Result Low Byte Path A
.equ	RXCRLA0	= 0 ; Rx CRC Result Low Byte Path A Bit 0
.equ	RXCRLA1	= 1 ; Rx CRC Result Low Byte Path A Bit 1
.equ	RXCRLA2	= 2 ; Rx CRC Result Low Byte Path A Bit 2
.equ	RXCRLA3	= 3 ; Rx CRC Result Low Byte Path A Bit 3
.equ	RXCRLA4	= 4 ; Rx CRC Result Low Byte Path A Bit 4
.equ	RXCRLA5	= 5 ; Rx CRC Result Low Byte Path A Bit 5
.equ	RXCRLA6	= 6 ; Rx CRC Result Low Byte Path A Bit 6
.equ	RXCRLA7	= 7 ; Rx CRC Result Low Byte Path A Bit 7

; RXCRLB - Rx CRC Result Low Byte Path B
.equ	RXCRLB0	= 0 ; Rx CRC Result Low Byte Path B Bit 0
.equ	RXCRLB1	= 1 ; Rx CRC Result Low Byte Path B Bit 1
.equ	RXCRLB2	= 2 ; Rx CRC Result Low Byte Path B Bit 2
.equ	RXCRLB3	= 3 ; Rx CRC Result Low Byte Path B Bit 3
.equ	RXCRLB4	= 4 ; Rx CRC Result Low Byte Path B Bit 4
.equ	RXCRLB5	= 5 ; Rx CRC Result Low Byte Path B Bit 5
.equ	RXCRLB6	= 6 ; Rx CRC Result Low Byte Path B Bit 6
.equ	RXCRLB7	= 7 ; Rx CRC Result Low Byte Path B Bit 7

; RXCSBA - Rx CRC Skip Bit Number Path A
.equ	RXCSBA0	= 0 ; Rx CRC Skip Bit Number Path A Bit 0
.equ	RXCSBA1	= 1 ; Rx CRC Skip Bit Number Path A Bit 1
.equ	RXCSBA2	= 2 ; Rx CRC Skip Bit Number Path A Bit 2
.equ	RXCSBA3	= 3 ; Rx CRC Skip Bit Number Path A Bit 3
.equ	RXCSBA4	= 4 ; Rx CRC Skip Bit Number Path A Bit 4
.equ	RXCSBA5	= 5 ; Rx CRC Skip Bit Number Path A Bit 5
.equ	RXCSBA6	= 6 ; Rx CRC Skip Bit Number Path A Bit 6
.equ	RXCSBA7	= 7 ; Rx CRC Skip Bit Number Path A Bit 7

; RXCSBB - Rx CRC Skip Bit Number Path B
.equ	RXCSBB0	= 0 ; Rx CRC Skip Bit Number Path B Bit 0
.equ	RXCSBB1	= 1 ; Rx CRC Skip Bit Number Path B Bit 1
.equ	RXCSBB2	= 2 ; Rx CRC Skip Bit Number Path B Bit 2
.equ	RXCSBB3	= 3 ; Rx CRC Skip Bit Number Path B Bit 3
.equ	RXCSBB4	= 4 ; Rx CRC Skip Bit Number Path B Bit 4
.equ	RXCSBB5	= 5 ; Rx CRC Skip Bit Number Path B Bit 5
.equ	RXCSBB6	= 6 ; Rx CRC Skip Bit Number Path B Bit 6
.equ	RXCSBB7	= 7 ; Rx CRC Skip Bit Number Path B Bit 7

; RXDSA - Receive Data Shift Register Path A
.equ	RXDSA0	= 0 ; Receive Data Shift Register Path A Bit 0
.equ	RXDSA1	= 1 ; Receive Data Shift Register Path A Bit 1
.equ	RXDSA2	= 2 ; Receive Data Shift Register Path A Bit 2
.equ	RXDSA3	= 3 ; Receive Data Shift Register Path A Bit 3
.equ	RXDSA4	= 4 ; Receive Data Shift Register Path A Bit 4
.equ	RXDSA5	= 5 ; Receive Data Shift Register Path A Bit 5
.equ	RXDSA6	= 6 ; Receive Data Shift Register Path A Bit 6
.equ	RXDSA7	= 7 ; Receive Data Shift Register Path A Bit 7

; RXDSB - Receive Data Shift Register Path B
.equ	RXDSB0	= 0 ; Receive Data Shift Register Path B Bit 0
.equ	RXDSB1	= 1 ; Receive Data Shift Register Path B Bit 1
.equ	RXDSB2	= 2 ; Receive Data Shift Register Path B Bit 2
.equ	RXDSB3	= 3 ; Receive Data Shift Register Path B Bit 3
.equ	RXDSB4	= 4 ; Receive Data Shift Register Path B Bit 4
.equ	RXDSB5	= 5 ; Receive Data Shift Register Path B Bit 5
.equ	RXDSB6	= 6 ; Receive Data Shift Register Path B Bit 6
.equ	RXDSB7	= 7 ; Receive Data Shift Register Path B Bit 7

; RXTLHA - Rx Telegram Length High Byte Path A
.equ	RXTLHA0	= 0 ; Rx Telegram Length High Byte Path A Bit 0
.equ	RXTLHA1	= 1 ; Rx Telegram Length High Byte Path A Bit 1
.equ	RXTLHA2	= 2 ; Rx Telegram Length High Byte Path A Bit 2
.equ	RXTLHA3	= 3 ; Rx Telegram Length High Byte Path A Bit 3

; RXTLHB - Rx Telegram Length High Byte Path B
.equ	RXTLHB0	= 0 ; Rx Telegram Length High Byte Path B Bit 0
.equ	RXTLHB1	= 1 ; Rx Telegram Length High Byte Path B Bit 1
.equ	RXTLHB2	= 2 ; Rx Telegram Length High Byte Path B Bit 2
.equ	RXTLHB3	= 3 ; Rx Telegram Length High Byte Path B Bit 3

; RXTLLA - Rx Telegram Length Low Byte Path A
.equ	RXTLLA0	= 0 ; Rx Telegram Length Low Byte Path A Bit 0
.equ	RXTLLA1	= 1 ; Rx Telegram Length Low Byte Path A Bit 1
.equ	RXTLLA2	= 2 ; Rx Telegram Length Low Byte Path A Bit 2
.equ	RXTLLA3	= 3 ; Rx Telegram Length Low Byte Path A Bit 3
.equ	RXTLLA4	= 4 ; Rx Telegram Length Low Byte Path A Bit 4
.equ	RXTLLA5	= 5 ; Rx Telegram Length Low Byte Path A Bit 5
.equ	RXTLLA6	= 6 ; Rx Telegram Length Low Byte Path A Bit 6
.equ	RXTLLA7	= 7 ; Rx Telegram Length Low Byte Path A Bit 7

; RXTLLB - Rx Telegram Length Low Byte Path B
.equ	RXTLLB0	= 0 ; Rx Telegram Length Low Byte Path B Bit 0
.equ	RXTLLB1	= 1 ; Rx Telegram Length Low Byte Path B Bit 1
.equ	RXTLLB2	= 2 ; Rx Telegram Length Low Byte Path B Bit 2
.equ	RXTLLB3	= 3 ; Rx Telegram Length Low Byte Path B Bit 3
.equ	RXTLLB4	= 4 ; Rx Telegram Length Low Byte Path B Bit 4
.equ	RXTLLB5	= 5 ; Rx Telegram Length Low Byte Path B Bit 5
.equ	RXTLLB6	= 6 ; Rx Telegram Length Low Byte Path B Bit 6
.equ	RXTLLB7	= 7 ; Rx Telegram Length Low Byte Path B Bit 7


; ***** RXDSP *****************
; EOTCA - End Of Telegram Conditions Path A
.equ	CARFEA	= 0 ; RF Carrier Fail Enable Path A
.equ	AMPFEA	= 1 ; Modulation Amplitude Fail Enable Path A
.equ	SYTFEA	= 2 ; Symbol Timing Fail Enable Path A
.equ	MANFEA	= 3 ; Manchester Coding Fail Enable Path A
.equ	TMOFEA	= 4 ; Time-Out Fail Enable Path A
.equ	TELREA	= 5 ; Telegram Length Reached Enable Path A
.equ	RRFEA	= 6 ; RSSI Range Fail Enable Path A
.equ	EOTBFE	= 7 ; End Of Telegram Path B Fail Enable

; EOTCB - End Of Telegram Conditions Path B
.equ	CARFEB	= 0 ; RF Carrier Fail Enable Path B
.equ	AMPFEB	= 1 ; Modulation Amplitude Fail Enable Path B
.equ	SYTFEB	= 2 ; Symbol Timing Fail Enable Path B
.equ	MANFEB	= 3 ; Manchester Coding Fail Enable Path B
.equ	TMOFEB	= 4 ; Time-Out Fail Enable Path B
.equ	TELREB	= 5 ; Telegram Length Reached Enable Path B
.equ	RRFEB	= 6 ; RSSI Range Fail Enable Path B
.equ	EOTAFE	= 7 ; End Of Telegram Path A Fail Enable

; EOTSA - End Of Telegram Status Path A
.equ	CARFA	= 0 ; RF Carrier Fail Path A
.equ	AMPFA	= 1 ; Modulation Amplitude Fail Path A
.equ	SYTFA	= 2 ; Symbol Timing Fail Path A
.equ	MANFA	= 3 ; Manchester Coding Fail Path A
.equ	TMOFA	= 4 ; Time-Out Fail Path A
.equ	TELRA	= 5 ; Telegram Length Reached Path A
.equ	RRFA	= 6 ; RSSI Range Fail Path A
.equ	EOTBF	= 7 ; End Of Telegram Path B Fail

; EOTSB - End Of Telegram Status Path B
.equ	CARFB	= 0 ; RF Carrier Fail Path B
.equ	AMPFB	= 1 ; Modulation Amplitude Fail Path B
.equ	SYTFB	= 2 ; Symbol Timing Fail Path B
.equ	MANFB	= 3 ; Manchester Coding Fail Path B
.equ	TMOFB	= 4 ; Time-Out Fail Path B
.equ	TELRB	= 5 ; Telegram Length Reached Path B
.equ	RRFB	= 6 ; RSSI Range Fail Path B
.equ	EOTAF	= 7 ; End Of Telegram Path A Fail

; RDCR - Rx DSP Control Register
.equ	RDPU	= 0 ; Rx DSP Power Up
.equ	ADIVEN	= 1 ; Divided ADC Clock Enable
.equ	RDEN	= 2 ; Rx DSP Enable

; RDOCR - Rx DSP Output Control
.equ	TMDS0	= 1 ; Transparent Mode Data Select
.equ	TMDS1	= 2 ; Transparent Mode Data Select
.equ	ETRPA	= 3 ; Enable Transparent Raw Data Path A
.equ	ETRPB	= 4 ; Enable Transparent Raw Data Path B
.equ	RDSIDA	= 5 ; Rx DSP Start Bit Is Data Path A
.equ	RDSIDB	= 6 ; Rx DSP Start Bit Is Data Path B

; RDPR - Rx DSP Power Reduction
.equ	PRPTB	= 0 ; Power Reduction Demodulator and Receiving Path B
.equ	PRPTA	= 1 ; Power Reduction Demodulator and Receiving Path A
.equ	PRFLT	= 2 ; Power Reduction Digital Channel Filter
.equ	PRTMP	= 3 ; Power Reduction Temperature Measurement
.equ	APRPTB	= 4 ; Automatic Power Reduction Path B
.equ	APRPTA	= 5 ; Automatic Power Reduction Path A
.equ	ARDPRF	= 6 ; Automatic Rx DSP Power Reduction Flag
.equ	RDPRF	= 7 ; Rx DSP Power Reduction Register Busy Flag

; RDSIFR - Rx DSP Status Interrupt Flag Register
.equ	NBITA	= 0 ; New Bit Path A
.equ	NBITB	= 1 ; New Bit Path B
.equ	EOTA	= 2 ; End Of Telegram Path A
.equ	EOTB	= 3 ; End Of Telegram Path B
.equ	SOTA	= 4 ; Start Of Telegram Path A
.equ	SOTB	= 5 ; Start Of Telegram Path B
.equ	WCOA	= 6 ; Wake Check Ok Path A
.equ	WCOB	= 7 ; Wake Check Ok Path B

; RDSIMR - Rx DSP Status Interrupt Mask Register
.equ	NBITAM	= 0 ; New Bit Path A Interrupt Mask
.equ	NBITBM	= 1 ; New Bit Path B Interrupt Mask
.equ	EOTAM	= 2 ; End Of Telegram Path A Interrupt Mask
.equ	EOTBM	= 3 ; End Of Telegram Path B Interrupt Mask
.equ	SOTAM	= 4 ; Start Of Telegram Path A Interrupt Mask
.equ	SOTBM	= 5 ; Start Of Telegram Path B Interrupt Mask
.equ	WCOAM	= 6 ; Wake Check Ok Path A Interrupt Mask
.equ	WCOBM	= 7 ; Wake Check Ok Path B Interrupt Mask

; SOTCA - Start Of Telegram Conditions Path A
.equ	CAROEA	= 0 ; RF Carrier Ok Enable Path A
.equ	AMPOEA	= 1 ; Modulation Amplitude Ok Enable Path A
.equ	SYTOEA	= 2 ; Symbol Timing Ok Enable Path A
.equ	MANOEA	= 3 ; Manchester Coding Ok Enable Path A
.equ	WUPEA	= 4 ; Wake Up Pattern Enable Path A
.equ	SFIDEA	= 5 ; Start of Frame Identifier Enable Path A
.equ	RROEA	= 6 ; RSSI Range Ok Enable Path A
.equ	WCOBOE	= 7 ; Wake Check Ok Path B Ok Enable

; SOTCB - Start Of Telegram Conditions Path B
.equ	CAROEB	= 0 ; RF Carrier Ok Enable Path B
.equ	AMPOEB	= 1 ; Modulation Amplitude Ok Enable Path B
.equ	SYTOEB	= 2 ; Symbol Timing Ok Enable Path B
.equ	MANOEB	= 3 ; Manchester Coding Ok Enable Path B
.equ	WUPEB	= 4 ; Wake Up Pattern Enable Path B
.equ	SFIDEB	= 5 ; Start of Frame Identifier Enable Path B
.equ	RROEB	= 6 ; RSSI Range Ok Enable Path B
.equ	WCOAOE	= 7 ; Wake Check Ok Path A Ok Enable

; SOTSA - Start Of Telegram Status Path A
.equ	CAROA	= 0 ; RF Carrier Ok Path A
.equ	AMPOA	= 1 ; Modulation Amplitude Ok Path A
.equ	SYTOA	= 2 ; Symbol Timing Ok Path A
.equ	MANOA	= 3 ; Manchester Coding Ok Path A
.equ	WUPOA	= 4 ; Wake Up Pattern Ok Path A
.equ	SFIDOA	= 5 ; Start of Frame Identifier Ok Path A
.equ	RROA	= 6 ; RSSI Range Ok Path A
.equ	WCOBO	= 7 ; Wake Check Ok Path B Ok

; SOTSB - Start Of Telegram Status Path B
.equ	CAROB	= 0 ; RF Carrier Ok Path B
.equ	AMPOB	= 1 ; Modulation Amplitude Ok Path B
.equ	SYTOB	= 2 ; Symbol Timing Ok Path B
.equ	MANOB	= 3 ; Manchester Coding Ok Path B
.equ	WUPOB	= 4 ; Wake Up Pattern Ok Path B
.equ	SFIDOB	= 5 ; Start of Frame Identifier Ok Path B
.equ	RROB	= 6 ; RSSI Range Ok Path B
.equ	WCOAO	= 7 ; Wake Check Ok Path A Ok

; TEMP - Temperature
.equ	TEMPH0	= 0 ; Temperature High Bit 8
.equ	TEMPH1	= 1 ; Temperature High Bit 9
.equ	TEMPH2	= 2 ; Temperature High Bit 10
.equ	TEMPH3	= 3 ; Temperature High Bit 11
.equ	TEMPH4	= 4 ; Temperature High Bit 12
.equ	TEMPH5	= 5 ; Temperature High Bit 13
.equ	TEMPH6	= 6 ; Temperature High Bit 14
.equ	TEMPH7	= 7 ; Temperature High Bit 15

.equ	TEMPL0	= 0 ; Temperature Low Bit 0
.equ	TEMPL1	= 1 ; Temperature Low Bit 1
.equ	TEMPL2	= 2 ; Temperature Low Bit 2
.equ	TEMPL3	= 3 ; Temperature Low Bit 3
.equ	TEMPL4	= 4 ; Temperature Low Bit 4
.equ	TEMPL5	= 5 ; Temperature Low Bit 5
.equ	TEMPL6	= 6 ; Temperature Low Bit 6
.equ	TEMPL7	= 7 ; Temperature Low Bit 7

; TESRA - Telegram Status Register Path A
.equ	CRCOA	= 0 ; Cyclic Redundancy Check Ok Path A
.equ	EOTLA0	= 1 ; End of Telegram Location Path A
.equ	EOTLA1	= 2 ; End of Telegram Location Path A

; TESRB - Telegram Status Register Path B
.equ	CRCOB	= 0 ; Cyclic Redundancy Check Ok Path B
.equ	EOTLB0	= 1 ; End of Telegram Location Path B
.equ	EOTLB1	= 2 ; End of Telegram Location Path B


; ***** SFIFO *****************
; SFC - Support FIFO Configuration
.equ	SFFLC0	= 0 ; Support FIFO Fill Level Configuration
.equ	SFFLC1	= 1 ; Support FIFO Fill Level Configuration
.equ	SFFLC2	= 2 ; Support FIFO Fill Level Configuration
.equ	SFFLC3	= 3 ; Support FIFO Fill Level Configuration
.equ	SFFLC4	= 4 ; Support FIFO Fill Level Configuration
.equ	SFDRA	= 7 ; Support FIFO Direct Read Access Operational Mode

; SFD - Support FIFO Data
.equ	SFD0	= 0 ; Support FIFO Data Bit 0
.equ	SFD1	= 1 ; Support FIFO Data Bit 1
.equ	SFD2	= 2 ; Support FIFO Data Bit 2
.equ	SFD3	= 3 ; Support FIFO Data Bit 3
.equ	SFD4	= 4 ; Support FIFO Data Bit 4
.equ	SFD5	= 5 ; Support FIFO Data Bit 5
.equ	SFD6	= 6 ; Support FIFO Data Bit 6
.equ	SFD7	= 7 ; Support FIFO Data Bit 7

; SFI - Support FIFO Interrupt Mask
.equ	SFFLIM	= 0 ; Support FIFO Fill Level Interrupt Mask
.equ	SFERIM	= 1 ; Support FIFO Error Interrupt Mask

; SFL - Support FIFO Fill Level
.equ	SFFLS0	= 0 ; Support FIFO Fill Level Status
.equ	SFFLS1	= 1 ; Support FIFO Fill Level Status
.equ	SFFLS2	= 2 ; Support FIFO Fill Level Status
.equ	SFFLS3	= 3 ; Support FIFO Fill Level Status
.equ	SFFLS4	= 4 ; Support FIFO Fill Level Status
.equ	SFCLR	= 7 ; Support FIFO Clear

; SFRP - Support FIFO Read Pointer
.equ	SFRP0	= 0 ; Support FIFO Read Pointer Bit 0
.equ	SFRP1	= 1 ; Support FIFO Read Pointer Bit 1
.equ	SFRP2	= 2 ; Support FIFO Read Pointer Bit 2
.equ	SFRP3	= 3 ; Support FIFO Read Pointer Bit 3
.equ	SFRP4	= 4 ; Support FIFO Read Pointer Bit 4

; SFS - Support FIFO Status
.equ	SFFLRF	= 0 ; Support FIFO Fill Level Reached Status Flag
.equ	SFUFL	= 1 ; Support FIFO Underflow Flag
.equ	SFOFL	= 2 ; Support FIFO Overflow Flag

; SFWP - Support FIFO Write Pointer
.equ	SFWP0	= 0 ; Support FIFO Write Pointer Bit 0
.equ	SFWP1	= 1 ; Support FIFO Write Pointer Bit 1
.equ	SFWP2	= 2 ; Support FIFO Write Pointer Bit 2
.equ	SFWP3	= 3 ; Support FIFO Write Pointer Bit 3
.equ	SFWP4	= 4 ; Support FIFO Write Pointer Bit 4


; ***** SPI *****************
; SFFR - SPI FIFO Fill Status Register
.equ	RFL0	= 0 ; Receive Buffer Fill Level
.equ	RFL1	= 1 ; Receive Buffer Fill Level
.equ	RFL2	= 2 ; Receive Buffer Fill Level
.equ	RFC	= 3 ; Rx Buffer Clear
.equ	TFL0	= 4 ; Transmit Buffer Fill Level
.equ	TFL1	= 5 ; Transmit Buffer Fill Level
.equ	TFL2	= 6 ; Transmit Buffer Fill Level
.equ	TFC	= 7 ; Transmit Buffer Clear

; SFIR - SPI FIFO Interrupt Register
.equ	RIL0	= 0 ; Receive Buffer Interrupt Level
.equ	RIL1	= 1 ; Receive Buffer Interrupt Level
.equ	RIL2	= 2 ; Receive Buffer Interrupt Level
.equ	SRIE	= 3 ; SPI Rx Buffer Interrupt Enable
.equ	TIL0	= 4 ; Transmit Buffer Interrupt Level
.equ	TIL1	= 5 ; Transmit Buffer Interrupt Level
.equ	TIL2	= 6 ; Transmit Buffer Interrupt Level
.equ	STIE	= 7 ; SPI Transmit Buffer Interrupt Enable

; SPCR - SPI Control Register
.equ	SPR0	= 0 ; SPI Clock Rate Select
.equ	SPR1	= 1 ; SPI Clock Rate Select
.equ	CPHA	= 2 ; Clock Phase
.equ	CPOL	= 3 ; Clock Polarity
.equ	MSTR	= 4 ; Master/Slave Select
.equ	DORD	= 5 ; Data Order
.equ	SPE	= 6 ; SPI Enable
.equ	SPIE	= 7 ; SPI Interrupt Enable

; SPDR - SPI Data Register
.equ	SPDR0	= 0 ; SPI Data Register Bit 0
.equ	SPDR1	= 1 ; SPI Data Register Bit 1
.equ	SPDR2	= 2 ; SPI Data Register Bit 2
.equ	SPDR3	= 3 ; SPI Data Register Bit 3
.equ	SPDR4	= 4 ; SPI Data Register Bit 4
.equ	SPDR5	= 5 ; SPI Data Register Bit 5
.equ	SPDR6	= 6 ; SPI Data Register Bit 6
.equ	SPDR7	= 7 ; SPI Data Register Bit 7

; SPSR - SPI Status Register
.equ	SPI2X	= 0 ; Double SPI Speed Bit
.equ	RXIF	= 4 ; Rx Buffer Interrupt Flag
.equ	TXIF	= 5 ; Tx Buffer Interrupt Flag
.equ	SPIF	= 7 ; SPI Interrupt Flag


; ***** SSM *****************
; EOTC1A - End Of Telegram Conditions 1 Path A
.equ	CARFEA1	= 0 ; RF Carrier Fail Enable Path A
.equ	AMPFEA1	= 1 ; Modulation Amplitude Fail Enable Path A
.equ	SYTFEA1	= 2 ; Symbol Timing Fail Enable Path A
.equ	MANFEA1	= 3 ; Manchester Coding Fail Enable Path A
.equ	TMOFEA1	= 4 ; Time-Out Fail Enable Path A
.equ	TELREA1	= 5 ; Telegram Length Reached Enable Path A
.equ	RRFEA1	= 6 ; RSSI Range Fail Enable Path A
.equ	EOTBFE1	= 7 ; End Of Telegram Path B Fail Enable

; EOTC1B - End Of Telegram Conditions 1 Path B
.equ	CARFEB1	= 0 ; RF Carrier Fail Enable Path B
.equ	AMPFEB1	= 1 ; Modulation Amplitude Fail Enable Path B
.equ	SYTFEB1	= 2 ; Symbol Timing Fail Enable Path B
.equ	MANFEB1	= 3 ; Manchester Coding Fail Enable Path B
.equ	TMOFEB1	= 4 ; Time-Out Fail Enable Path B
.equ	TELREB1	= 5 ; Telegram Length Reached Enable Path B
.equ	RRFEB1	= 6 ; RSSI Range Fail Enable Path B
.equ	EOTAFE1	= 7 ; End Of Telegram Path A Fail Enable

; EOTC2A - End Of Telegram Conditions 2 Path A
.equ	CARFEA2	= 0 ; RF Carrier Fail Enable Path A
.equ	AMPFEA2	= 1 ; Modulation Amplitude Fail Enable Path A
.equ	SYTFEA2	= 2 ; Symbol Timing Fail Enable Path A
.equ	MANFEA2	= 3 ; Manchester Coding Fail Enable Path A
.equ	TMOFEA2	= 4 ; Time-Out Fail Enable Path A
.equ	TELREA2	= 5 ; Telegram Length Reached Enable Path A
.equ	RRFEA2	= 6 ; RSSI Range Fail Enable Path A
.equ	EOTBFE2	= 7 ; End Of Telegram Path B Fail Enable

; EOTC2B - End Of Telegram Conditions 2 Path B
.equ	CARFEB2	= 0 ; RF Carrier Fail Enable Path B
.equ	AMPFEB2	= 1 ; Modulation Amplitude Fail Enable Path B
.equ	SYTFEB2	= 2 ; Symbol Timing Fail Enable Path B
.equ	MANFEB2	= 3 ; Manchester Coding Fail Enable Path B
.equ	TMOFEB2	= 4 ; Time-Out Fail Enable Path B
.equ	TELREB2	= 5 ; Telegram Length Reached Enable Path B
.equ	RRFEB2	= 6 ; RSSI Range Fail Enable Path B
.equ	EOTAFE2	= 7 ; End Of Telegram Path A Fail Enable

; EOTC3A - End Of Telegram Conditions 3 Path A
.equ	CARFEA3	= 0 ; RF Carrier Fail Enable Path A
.equ	AMPFEA3	= 1 ; Modulation Amplitude Fail Enable Path A
.equ	SYTFEA3	= 2 ; Symbol Timing Fail Enable Path A
.equ	MANFEA3	= 3 ; Manchester Coding Fail Enable Path A
.equ	TMOFEA3	= 4 ; Time-Out Fail Enable Path A
.equ	TELREA3	= 5 ; Telegram Length Reached Enable Path A
.equ	RRFEA3	= 6 ; RSSI Range Fail Enable Path A
.equ	EOTBFE3	= 7 ; End Of Telegram Path B Fail Enable

; EOTC3B - End Of Telegram Conditions 3 Path B
.equ	CARFEB3	= 0 ; RF Carrier Fail Enable Path B
.equ	AMPFEB3	= 1 ; Modulation Amplitude Fail Enable Path B
.equ	SYTFEB3	= 2 ; Symbol Timing Fail Enable Path B
.equ	MANFEB3	= 3 ; Manchester Coding Fail Enable Path B
.equ	TMOFEB3	= 4 ; Time-Out Fail Enable Path B
.equ	TELREB3	= 5 ; Telegram Length Reached Enable Path B
.equ	RRFEB3	= 6 ; RSSI Range Fail Enable Path B
.equ	EOTAFE3	= 7 ; End Of Telegram Path A Fail Enable

; GTCR - Get Telegram Control Register
.equ	RXTEHA	= 0 ; Rx Telegram End Handling Path A
.equ	GAPMA	= 1 ; Gap Mode Path A
.equ	DARA	= 2 ; Demodulator Automatic Restart Path A
.equ	IWUPA	= 3 ; Intermittent WUP Mode Path A
.equ	RXTEHB	= 4 ; Rx Telegram End Handling Path B
.equ	GAPMB	= 5 ; Gap Mode Path B
.equ	DARB	= 6 ; Demodulator Automatic Restart Path B
.equ	IWUPB	= 7 ; Intermittent WUP Mode Path B

; MSMCR1 - Master State Machine Control Register 1
.equ	MSMSM00	= 0 ; Master State Machine Sub-State Machine Select 0
.equ	MSMSM01	= 1 ; Master State Machine Sub-State Machine Select 0
.equ	MSMSM02	= 2 ; Master State Machine Sub-State Machine Select 0
.equ	MSMSM03	= 3 ; Master State Machine Sub-State Machine Select 0
.equ	MSMSM10	= 4 ; Master State Machine Sub-State Machine Select 1
.equ	MSMSM11	= 5 ; Master State Machine Sub-State Machine Select 1
.equ	MSMSM12	= 6 ; Master State Machine Sub-State Machine Select 1
.equ	MSMSM13	= 7 ; Master State Machine Sub-State Machine Select 1

; MSMCR2 - Master State Machine Control Register 2
.equ	MSMSM20	= 0 ; Master State Machine Sub-State Machine Select 2
.equ	MSMSM21	= 1 ; Master State Machine Sub-State Machine Select 2
.equ	MSMSM22	= 2 ; Master State Machine Sub-State Machine Select 2
.equ	MSMSM23	= 3 ; Master State Machine Sub-State Machine Select 2
.equ	MSMSM30	= 4 ; Master State Machine Sub-State Machine Select 3
.equ	MSMSM31	= 5 ; Master State Machine Sub-State Machine Select 3
.equ	MSMSM32	= 6 ; Master State Machine Sub-State Machine Select 3
.equ	MSMSM33	= 7 ; Master State Machine Sub-State Machine Select 3

; MSMCR3 - Master State Machine Control Register 3
.equ	MSMSM40	= 0 ; Master State Machine Sub-State Machine Select 4
.equ	MSMSM41	= 1 ; Master State Machine Sub-State Machine Select 4
.equ	MSMSM42	= 2 ; Master State Machine Sub-State Machine Select 4
.equ	MSMSM43	= 3 ; Master State Machine Sub-State Machine Select 4
.equ	MSMSM50	= 4 ; Master State Machine Sub-State Machine Select 5
.equ	MSMSM51	= 5 ; Master State Machine Sub-State Machine Select 5
.equ	MSMSM52	= 6 ; Master State Machine Sub-State Machine Select 5
.equ	MSMSM53	= 7 ; Master State Machine Sub-State Machine Select 5

; MSMCR4 - Master State Machine Control Register 4
.equ	MSMSM60	= 0 ; Master State Machine Sub-State Machine Select 6
.equ	MSMSM61	= 1 ; Master State Machine Sub-State Machine Select 6
.equ	MSMSM62	= 2 ; Master State Machine Sub-State Machine Select 6
.equ	MSMSM63	= 3 ; Master State Machine Sub-State Machine Select 6
.equ	MSMSM70	= 4 ; Master State Machine Sub-State Machine Select 7
.equ	MSMSM71	= 5 ; Master State Machine Sub-State Machine Select 7
.equ	MSMSM72	= 6 ; Master State Machine Sub-State Machine Select 7
.equ	MSMSM73	= 7 ; Master State Machine Sub-State Machine Select 7

; MSMSTR - Master State Machine State Register
.equ	SSMMST0	= 0 ; Sequencer State Machine Master State
.equ	SSMMST1	= 1 ; Sequencer State Machine Master State
.equ	SSMMST2	= 2 ; Sequencer State Machine Master State
.equ	SSMMST3	= 3 ; Sequencer State Machine Master State
.equ	SSMMST4	= 4 ; Sequencer State Machine Master State

; SOTC1A - Start Of Telegram Conditions 1 Path A
.equ	CAROEA1	= 0 ; RF Carrier Ok Enable Path A
.equ	AMPOEA1	= 1 ; Modulation Amplitude Ok Enable Path A
.equ	SYTOEA1	= 2 ; Symbol Timing Ok Enable Path A
.equ	MANOEA1	= 3 ; Manchester Coding Ok Enable Path A
.equ	WUPEA1	= 4 ; Wake Up Pattern Enable Path A
.equ	SFIDEA1	= 5 ; Start of Frame Identifier Enable Path A
.equ	RROEA1	= 6 ; RSSI Range Ok Enable Path A
.equ	WCOBOE1	= 7 ; Wake Check Ok Path B Ok Enable

; SOTC1B - Start Of Telegram Conditions 1 Path B
.equ	CAROEB1	= 0 ; RF Carrier Ok Enable Path B
.equ	AMPOEB1	= 1 ; Modulation Amplitude Ok Enable Path B
.equ	SYTOEB1	= 2 ; Symbol Timing Ok Enable Path B
.equ	MANOEB1	= 3 ; Manchester Coding Ok Enable Path B
.equ	WUPEB1	= 4 ; Wake Up Pattern Enable Path B
.equ	SFIDEB1	= 5 ; Start of Frame Identifier Enable Path B
.equ	RROEB1	= 6 ; RSSI Range Ok Enable Path B
.equ	WCOAOE1	= 7 ; Wake Check Ok Path A Ok Enable

; SOTC2A - Start Of Telegram Conditions 2 Path A
.equ	CAROEA2	= 0 ; RF Carrier Ok Enable Path A
.equ	AMPOEA2	= 1 ; Modulation Amplitude Ok Enable Path A
.equ	SYTOEA2	= 2 ; Symbol Timing Ok Enable Path A
.equ	MANOEA2	= 3 ; Manchester Coding Ok Enable Path A
.equ	WUPEA2	= 4 ; Wake Up Pattern Enable Path A
.equ	SFIDEA2	= 5 ; Start of Frame Identifier Enable Path A
.equ	RROEA2	= 6 ; RSSI Range Ok Enable Path A
.equ	WCOBOE2	= 7 ; Wake Check Ok Path B Ok Enable

; SOTC2B - Start Of Telegram Conditions 2 Path B
.equ	CAROEB2	= 0 ; RF Carrier Ok Enable Path B
.equ	AMPOEB2	= 1 ; Modulation Amplitude Ok Enable Path B
.equ	SYTOEB2	= 2 ; Symbol Timing Ok Enable Path B
.equ	MANOEB2	= 3 ; Manchester Coding Ok Enable Path B
.equ	WUPEB2	= 4 ; Wake Up Pattern Enable Path B
.equ	SFIDEB2	= 5 ; Start of Frame Identifier Enable Path B
.equ	RROEB2	= 6 ; RSSI Range Ok Enable Path B
.equ	WCOAOE2	= 7 ; Wake Check Ok Path A Ok Enable

; SOTTOA - Start Of Telegram Time Out Path A
.equ	SOTTOA0	= 0 ; Start Of Telegram Time Out Path A Bit 0
.equ	SOTTOA1	= 1 ; Start Of Telegram Time Out Path A Bit 1
.equ	SOTTOA2	= 2 ; Start Of Telegram Time Out Path A Bit 2
.equ	SOTTOA3	= 3 ; Start Of Telegram Time Out Path A Bit 3
.equ	SOTTOA4	= 4 ; Start Of Telegram Time Out Path A Bit 4
.equ	SOTTOA5	= 5 ; Start Of Telegram Time Out Path A Bit 5
.equ	SOTTOA6	= 6 ; Start Of Telegram Time Out Path A Bit 6
.equ	SOTTOA7	= 7 ; Start Of Telegram Time Out Path A Bit 7

; SOTTOB - Start Of Telegram Time Out Path B
.equ	SOTTOB0	= 0 ; Start Of Telegram Time Out Path B Bit 0
.equ	SOTTOB1	= 1 ; Start Of Telegram Time Out Path B Bit 1
.equ	SOTTOB2	= 2 ; Start Of Telegram Time Out Path B Bit 2
.equ	SOTTOB3	= 3 ; Start Of Telegram Time Out Path B Bit 3
.equ	SOTTOB4	= 4 ; Start Of Telegram Time Out Path B Bit 4
.equ	SOTTOB5	= 5 ; Start Of Telegram Time Out Path B Bit 5
.equ	SOTTOB6	= 6 ; Start Of Telegram Time Out Path B Bit 6
.equ	SOTTOB7	= 7 ; Start Of Telegram Time Out Path B Bit 7

; SSMCR - Sequencer State Machine Control Register
.equ	SSMTX	= 0 ; SSM Tx
.equ	SSMTM	= 1 ; SSM Temperature Measurement
.equ	SETRPA	= 6 ; SSM Enable Transparent Path A
.equ	SETRPB	= 7 ; SSM Enable Raw Transparent Path B

; SSMFBR - Sequencer State Machine Filter Bandwidth Register
.equ	SSMFID0	= 0 ; SSM Filter Delay
.equ	SSMFID1	= 1 ; SSM Filter Delay
.equ	SSMFID2	= 2 ; SSM Filter Delay
.equ	SSMDFDT	= 3 ; SSM Double Filter Delay Time
.equ	SSMHADT	= 4 ; SSM Half Antenna Damping Delay Time
.equ	SSMPLDT	= 5 ; SSM PLL Lock Delay Time

; SSMFCR - Sequencer State Machine Flow Control Register
.equ	SSMIDSO	= 0 ; SSM ID Scan OK
.equ	SSMIDSF	= 1 ; SSM ID Scan Fail
.equ	SSMSEH	= 2 ; SSM Single Start Telegram End Handling
.equ	SSMCEH	= 3 ; SSM Continuous Start Telegram End Handling

; SSMIFR - Sequencer State Machine Interrupt Flag Register
.equ	SSMIF	= 0 ; SSM Interrupt Flag

; SSMIMR - Sequencer State Machine Interrupt Mask Register
.equ	SSMIM	= 0 ; SSM Interrupt Mask

; SSMRCR - Sequencer State Machine Rx Control Register
.equ	SSMPA	= 0 ; SSM Path A
.equ	SSMPB	= 1 ; SSM Path B
.equ	SSMAD	= 2 ; SSM Antenna Damping Disable
.equ	SSMHIS	= 3 ; SSM High Sensitivity Enable
.equ	SSMPVS	= 4 ; SSM Path Valid After SOT
.equ	SSMIFA	= 5 ; SSM IF Amplifier Enable
.equ	SSMIDSE	= 6 ; SSM ID Check Enable
.equ	SSMTMOE	= 7 ; SSM Transparent Output Enable

; SSMRR - Sequencer State Machine Run Register
.equ	SSMR	= 0 ; SSM Run
.equ	SSMST	= 1 ; SSM Stop

; SSMSR - Sequencer State Machine Status Register
.equ	SSMESM0	= 0 ; SSM Error State Machine
.equ	SSMESM1	= 1 ; SSM Error State Machine
.equ	SSMESM2	= 2 ; SSM Error State Machine
.equ	SSMESM3	= 3 ; SSM Error State Machine
.equ	SSMERR	= 7 ; SSM Error

; SSMSTR - Sequencer State Machine State Register
.equ	SSMSTA0	= 0 ; SSM State A
.equ	SSMSTA1	= 1 ; SSM State A
.equ	SSMSTA2	= 2 ; SSM State A
.equ	SSMSTA3	= 3 ; SSM State A
.equ	SSMSTA4	= 4 ; SSM State A
.equ	SSMSTA5	= 5 ; SSM State A

; SSMXSR - Sequencer State Machine Extended State Register
.equ	SSMSTB0	= 0 ; SSM State B
.equ	SSMSTB1	= 1 ; SSM State B
.equ	SSMSTB2	= 2 ; SSM State B
.equ	SSMSTB3	= 3 ; SSM State B
.equ	SSMSTB4	= 4 ; SSM State B
.equ	SSMSTB5	= 5 ; SSM State B

; WCOTOA - Wake Check Ok Time-Out Path A
.equ	WCOTOA0	= 0 ; Wake Check Ok Time-Out Path A Bit 0
.equ	WCOTOA1	= 1 ; Wake Check Ok Time-Out Path A Bit 1
.equ	WCOTOA2	= 2 ; Wake Check Ok Time-Out Path A Bit 2
.equ	WCOTOA3	= 3 ; Wake Check Ok Time-Out Path A Bit 3
.equ	WCOTOA4	= 4 ; Wake Check Ok Time-Out Path A Bit 4
.equ	WCOTOA5	= 5 ; Wake Check Ok Time-Out Path A Bit 5
.equ	WCOTOA6	= 6 ; Wake Check Ok Time-Out Path A Bit 6
.equ	WCOTOA7	= 7 ; Wake Check Ok Time-Out Path A Bit 7

; WCOTOB - Wake Check Ok Time-Out Path B
.equ	WCOTOB0	= 0 ; Wake Check Ok Time-Out Path B Bit 0
.equ	WCOTOB1	= 1 ; Wake Check Ok Time-Out Path B Bit 1
.equ	WCOTOB2	= 2 ; Wake Check Ok Time-Out Path B Bit 2
.equ	WCOTOB3	= 3 ; Wake Check Ok Time-Out Path B Bit 3
.equ	WCOTOB4	= 4 ; Wake Check Ok Time-Out Path B Bit 4
.equ	WCOTOB5	= 5 ; Wake Check Ok Time-Out Path B Bit 5
.equ	WCOTOB6	= 6 ; Wake Check Ok Time-Out Path B Bit 6
.equ	WCOTOB7	= 7 ; Wake Check Ok Time-Out Path B Bit 7


; ***** SUP *****************
; DCC1 - DCDC Converter Control 1
.equ	DCEN	= 0 ; DCDC Converter Enable
.equ	DCHSSW	= 1 ; DCDC Converter High Side Switch
.equ	DCCDIV0	= 4 ; DCDC Converter Clock Divider
.equ	DCCDIV1	= 5 ; DCDC Converter Clock Divider

; DCC2 - DCDC Converter Control 2
.equ	DCVOUT0	= 0 ; DCDC Converter Output Voltage
.equ	DCVOUT1	= 1 ; DCDC Converter Output Voltage
.equ	DCCLIM0	= 2 ; DCDC Converter Current Limit
.equ	DCCLIM1	= 3 ; DCDC Converter Current Limit
.equ	DCDRV0	= 4 ; DCDC Converter Driver Strength
.equ	DCDRV1	= 5 ; DCDC Converter Driver Strength

; DCCAL1 - DCDC Converter Calibration 1
.equ	CCAL0	= 0 ; Current Limit Calibration
.equ	CCAL1	= 1 ; Current Limit Calibration
.equ	CCAL2	= 2 ; Current Limit Calibration
.equ	CCAL3	= 3 ; Current Limit Calibration
.equ	ZCCAL0	= 4 ; Zero Crossing Calibration
.equ	ZCCAL1	= 5 ; Zero Crossing Calibration
.equ	ZCCAL2	= 6 ; Zero Crossing Calibration
.equ	ZCCAL3	= 7 ; Zero Crossing Calibration

; DCCAL2 - DCDC Converter Calibration 2
.equ	DTCAL0	= 0 ; Dead Time Calibration
.equ	DTCAL1	= 1 ; Dead Time Calibration
.equ	DTCAL2	= 2 ; Dead Time Calibration
.equ	DTCAL3	= 3 ; Dead Time Calibration
.equ	OFCAL0	= 4 ; Offset Calibration
.equ	OFCAL1	= 5 ; Offset Calibration
.equ	OFCAL2	= 6 ; Offset Calibration
.equ	OFCAL3	= 7 ; Offset Calibration

; DCCAL3 - DCDC Converter Calibration 3
.equ	SAWCAL0	= 0 ; Ramp Calibration
.equ	SAWCAL1	= 1 ; Ramp Calibration

; DCTST - DCDC Converter Test Mode
.equ	DCTST0	= 0 ; DCDC Converter Test Mode
.equ	DCTST1	= 1 ; DCDC Converter Test Mode
.equ	DCTST2	= 2 ; DCDC Converter Test Mode
.equ	DCTST3	= 3 ; DCDC Converter Test Mode
.equ	DCTST4	= 4 ; DCDC Converter Test Mode

; RCTUNE4 - Resistor Capacitor 4 Bit Tuning
.equ	CTUNE40	= 0 ; 4 Bit Capacitor Tuning
.equ	CTUNE41	= 1 ; 4 Bit Capacitor Tuning
.equ	CTUNE42	= 2 ; 4 Bit Capacitor Tuning
.equ	CTUNE43	= 3 ; 4 Bit Capacitor Tuning
.equ	RTUNE40	= 4 ; 4 Bit Resistor Tuning
.equ	RTUNE41	= 5 ; 4 Bit Resistor Tuning
.equ	RTUNE42	= 6 ; 4 Bit Resistor Tuning
.equ	RTUNE43	= 7 ; 4 Bit Resistor Tuning

; SUPCR - Supply Control Register
.equ	AVCCRM	= 0 ; AVCC Reset Interrupt Mask
.equ	AVCCLM	= 1 ; AVCC Low Interrupt Mask
.equ	AVEN	= 5 ; AVCC Enable
.equ	AVDIC	= 6 ; AVCC Double Internal Current

; SUPFR - Supply Flag Register
.equ	AVCCRF	= 0 ; AVCC Reset Flag
.equ	AVCCLF	= 1 ; AVCC Low Flag
.equ	DCRDYF	= 2 ; DCDC Converter Ready Flag
.equ	DCERF	= 3 ; DCDC Converter Error Flag


; ***** TIMER0_WDT *****************
; T0CR - Timer0 Control Register
.equ	T0PS0	= 0 ; Timer0 Prescaler Select
.equ	T0PS1	= 1 ; Timer0 Prescaler Select
.equ	T0PS2	= 2 ; Timer0 Prescaler Select
.equ	T0IE	= 3 ; Timer0 Interrupt Enable
.equ	T0PR	= 4 ; Timer0 Prescaler Reset

; T0IFR - Timer0 Interrupt Flag Register
.equ	T0F	= 0 ; Timer0 Flag

; WDTCR - Watchdog Timer0 Control Register
.equ	WDPS0	= 0 ; Watchdog Prescaler Select
.equ	WDPS1	= 1 ; Watchdog Prescaler Select
.equ	WDPS2	= 2 ; Watchdog Prescaler Select
.equ	WDE	= 3 ; Watchdog Enable
.equ	WDCE	= 4 ; Watchdog Change Enable


; ***** TIMER1 *****************
; T1CNT - Timer1 Counter Register
.equ	T1CNT0	= 0 ; Timer1 Counter Register Bit 0
.equ	T1CNT1	= 1 ; Timer1 Counter Register Bit 1
.equ	T1CNT2	= 2 ; Timer1 Counter Register Bit 2
.equ	T1CNT3	= 3 ; Timer1 Counter Register Bit 3
.equ	T1CNT4	= 4 ; Timer1 Counter Register Bit 4
.equ	T1CNT5	= 5 ; Timer1 Counter Register Bit 5
.equ	T1CNT6	= 6 ; Timer1 Counter Register Bit 6
.equ	T1CNT7	= 7 ; Timer1 Counter Register Bit 7

; T1COR - Timer1 Compare Register
.equ	T1COR0	= 0 ; Timer1 Compare Register Bit 0
.equ	T1COR1	= 1 ; Timer1 Compare Register Bit 1
.equ	T1COR2	= 2 ; Timer1 Compare Register Bit 2
.equ	T1COR3	= 3 ; Timer1 Compare Register Bit 3
.equ	T1COR4	= 4 ; Timer1 Compare Register Bit 4
.equ	T1COR5	= 5 ; Timer1 Compare Register Bit 5
.equ	T1COR6	= 6 ; Timer1 Compare Register Bit 6
.equ	T1COR7	= 7 ; Timer1 Compare Register Bit 7

; T1CR - Timer1 Control Register
.equ	T1OTM	= 0 ; Timer1 Overflow Toggle Mask
.equ	T1CTM	= 1 ; Timer1 Compare Toggle Mask
.equ	T1CRM	= 2 ; Timer1 Compare Reset Mask
.equ	T1TOP	= 4 ; Timer1 Toggle Output Preset
.equ	T1RES	= 5 ; Timer1 Reset
.equ	T1TOS	= 6 ; Timer1 Toggle with Start
.equ	T1ENA	= 7 ; Timer1 Enable

; T1IFR - Timer1 Interrupt Flag Register
.equ	T1OFF	= 0 ; Timer1 Overflow Flag
.equ	T1COF	= 1 ; Timer1 Compare Flag

; T1IMR - Timer1 Interrupt Mask Register
.equ	T1OIM	= 0 ; Timer1 Overflow Interrupt Mask
.equ	T1CIM	= 1 ; Timer1 Compare Interrupt Mask

; T1MR - Timer1 Mode Register
.equ	T1CS0	= 0 ; Timer1 Clock Select
.equ	T1CS1	= 1 ; Timer1 Clock Select
.equ	T1PS0	= 2 ; Timer1 Prescaler Select
.equ	T1PS1	= 3 ; Timer1 Prescaler Select
.equ	T1PS2	= 4 ; Timer1 Prescaler Select
.equ	T1PS3	= 5 ; Timer1 Prescaler Select
.equ	T1DC0	= 6 ; Timer1 Duty Cycle
.equ	T1DC1	= 7 ; Timer1 Duty Cycle


; ***** TIMER2 *****************
; T2CNT - Timer2 Counter Register
.equ	T2CNT0	= 0 ; Timer2 Counter Register Bit 0
.equ	T2CNT1	= 1 ; Timer2 Counter Register Bit 1
.equ	T2CNT2	= 2 ; Timer2 Counter Register Bit 2
.equ	T2CNT3	= 3 ; Timer2 Counter Register Bit 3
.equ	T2CNT4	= 4 ; Timer2 Counter Register Bit 4
.equ	T2CNT5	= 5 ; Timer2 Counter Register Bit 5
.equ	T2CNT6	= 6 ; Timer2 Counter Register Bit 6
.equ	T2CNT7	= 7 ; Timer2 Counter Register Bit 7

; T2COR - Timer2 Compare Register
.equ	T2COR0	= 0 ; Timer2 Compare Register Bit 0
.equ	T2COR1	= 1 ; Timer2 Compare Register Bit 1
.equ	T2COR2	= 2 ; Timer2 Compare Register Bit 2
.equ	T2COR3	= 3 ; Timer2 Compare Register Bit 3
.equ	T2COR4	= 4 ; Timer2 Compare Register Bit 4
.equ	T2COR5	= 5 ; Timer2 Compare Register Bit 5
.equ	T2COR6	= 6 ; Timer2 Compare Register Bit 6
.equ	T2COR7	= 7 ; Timer2 Compare Register Bit 7

; T2CR - Timer2 Control Register
.equ	T2OTM	= 0 ; Timer2 Overflow Toggle Mask
.equ	T2CTM	= 1 ; Timer2 Compare Toggle Mask
.equ	T2CRM	= 2 ; Timer2 Compare Reset Mask
.equ	T2TOP	= 4 ; Timer2 Toggle Output Preset
.equ	T2RES	= 5 ; Timer2 Reset
.equ	T2TOS	= 6 ; Timer2 Toggle with Start
.equ	T2ENA	= 7 ; Timer2 Enable

; T2IFR - Timer2 Interrupt Flag Register
.equ	T2OFF	= 0 ; Timer2 Overflow Flag
.equ	T2COF	= 1 ; Timer2 Compare Flag

; T2IMR - Timer2 Interrupt Mask Register
.equ	T2OIM	= 0 ; Timer2 Overflow Interrupt Mask
.equ	T2CIM	= 1 ; Timer2 Compare Interrupt Mask

; T2MR - Timer2 Mode Register
.equ	T2CS0	= 0 ; Timer2 Clock Select
.equ	T2CS1	= 1 ; Timer2 Clock Select
.equ	T2PS0	= 2 ; Timer2 Prescaler Select
.equ	T2PS1	= 3 ; Timer2 Prescaler Select
.equ	T2PS2	= 4 ; Timer2 Prescaler Select
.equ	T2PS3	= 5 ; Timer2 Prescaler Select
.equ	T2DC0	= 6 ; Timer2 Duty Cycle
.equ	T2DC1	= 7 ; Timer2 Duty Cycle


; ***** TIMER3 *****************
; T3CNT - Timer3 Counter
.equ	T3CNTH0	= 0 ; Timer3 Counter High Bit 8
.equ	T3CNTH1	= 1 ; Timer3 Counter High Bit 9
.equ	T3CNTH2	= 2 ; Timer3 Counter High Bit 10
.equ	T3CNTH3	= 3 ; Timer3 Counter High Bit 11
.equ	T3CNTH4	= 4 ; Timer3 Counter High Bit 12
.equ	T3CNTH5	= 5 ; Timer3 Counter High Bit 13
.equ	T3CNTH6	= 6 ; Timer3 Counter High Bit 14
.equ	T3CNTH7	= 7 ; Timer3 Counter High Bit 15

.equ	T3CNTL0	= 0 ; Timer3 Counter Low Bit 0
.equ	T3CNTL1	= 1 ; Timer3 Counter Low Bit 1
.equ	T3CNTL2	= 2 ; Timer3 Counter Low Bit 2
.equ	T3CNTL3	= 3 ; Timer3 Counter Low Bit 3
.equ	T3CNTL4	= 4 ; Timer3 Counter Low Bit 4
.equ	T3CNTL5	= 5 ; Timer3 Counter Low Bit 5
.equ	T3CNTL6	= 6 ; Timer3 Counter Low Bit 6
.equ	T3CNTL7	= 7 ; Timer3 Counter Low Bit 7

; T3COR - Timer3 Compare
.equ	T3CORH0	= 0 ; Timer3 Compare High Bit 8
.equ	T3CORH1	= 1 ; Timer3 Compare High Bit 9
.equ	T3CORH2	= 2 ; Timer3 Compare High Bit 10
.equ	T3CORH3	= 3 ; Timer3 Compare High Bit 11
.equ	T3CORH4	= 4 ; Timer3 Compare High Bit 12
.equ	T3CORH5	= 5 ; Timer3 Compare High Bit 13
.equ	T3CORH6	= 6 ; Timer3 Compare High Bit 14
.equ	T3CORH7	= 7 ; Timer3 Compare High Bit 15

.equ	T3CORL0	= 0 ; Timer3 Compare Low Bit 0
.equ	T3CORL1	= 1 ; Timer3 Compare Low Bit 1
.equ	T3CORL2	= 2 ; Timer3 Compare Low Bit 2
.equ	T3CORL3	= 3 ; Timer3 Compare Low Bit 3
.equ	T3CORL4	= 4 ; Timer3 Compare Low Bit 4
.equ	T3CORL5	= 5 ; Timer3 Compare Low Bit 5
.equ	T3CORL6	= 6 ; Timer3 Compare Low Bit 6
.equ	T3CORL7	= 7 ; Timer3 Compare Low Bit 7

; T3CR - Timer3 Control Register
.equ	T3OTM	= 0 ; Timer3 Overflow Toggle Mask
.equ	T3CTM	= 1 ; Timer3 Compare Toggle Mask
.equ	T3CRM	= 2 ; Timer3 Compare Reset Mask
.equ	T3CPRM	= 3 ; Timer3 Capture Reset Mask
.equ	T3TOP	= 4 ; Timer3 Toggle Output Preset
.equ	T3RES	= 5 ; Timer3 Reset
.equ	T3TOS	= 6 ; Timer3 Toggle with Start
.equ	T3ENA	= 7 ; Timer3 Enable

; T3ICR - Timer3 Input Capture
.equ	T3ICRH0	= 0 ; Timer3 Input Capture High Bit 8
.equ	T3ICRH1	= 1 ; Timer3 Input Capture High Bit 9
.equ	T3ICRH2	= 2 ; Timer3 Input Capture High Bit 10
.equ	T3ICRH3	= 3 ; Timer3 Input Capture High Bit 11
.equ	T3ICRH4	= 4 ; Timer3 Input Capture High Bit 12
.equ	T3ICRH5	= 5 ; Timer3 Input Capture High Bit 13
.equ	T3ICRH6	= 6 ; Timer3 Input Capture High Bit 14
.equ	T3ICRH7	= 7 ; Timer3 Input Capture High Bit 15

.equ	T3ICRL0	= 0 ; Timer3 Input Capture Low Bit 0
.equ	T3ICRL1	= 1 ; Timer3 Input Capture Low Bit 1
.equ	T3ICRL2	= 2 ; Timer3 Input Capture Low Bit 2
.equ	T3ICRL3	= 3 ; Timer3 Input Capture Low Bit 3
.equ	T3ICRL4	= 4 ; Timer3 Input Capture Low Bit 4
.equ	T3ICRL5	= 5 ; Timer3 Input Capture Low Bit 5
.equ	T3ICRL6	= 6 ; Timer3 Input Capture Low Bit 6
.equ	T3ICRL7	= 7 ; Timer3 Input Capture Low Bit 7

; T3IFR - Timer3 Interrupt Flag Register
.equ	T3OFF	= 0 ; Timer3 Overflow Flag
.equ	T3COF	= 1 ; Timer3 Compare Flag
.equ	T3ICF	= 2 ; Timer3 Input Capture Flag

; T3IMR - Timer3 Interrupt Mask Register
.equ	T3OIM	= 0 ; Timer3 Overflow Interrupt Mask
.equ	T3CIM	= 1 ; Timer3 Compare Interrupt Mask
.equ	T3CPIM	= 2 ; Timer3 Capture Interrupt Mask

; T3MRA - Timer3 Mode Register A
.equ	T3CS0	= 0 ; Timer3 Clock Select
.equ	T3CS1	= 1 ; Timer3 Clock Select
.equ	T3PS0	= 2 ; Timer3 Prescaler Select
.equ	T3PS1	= 3 ; Timer3 Prescaler Select
.equ	T3PS2	= 4 ; Timer3 Prescaler Select

; T3MRB - Timer3 Mode Register B
.equ	T3SCE	= 1 ; Timer3 Software Capture Enable
.equ	T3CNC	= 2 ; Timer3 Input Capture Noise Canceller
.equ	T3CE0	= 3 ; Timer3 Capture Edge Select
.equ	T3CE1	= 4 ; Timer3 Capture Edge Select
.equ	T3ICS0	= 5 ; Timer3 Input Capture Select
.equ	T3ICS1	= 6 ; Timer3 Input Capture Select
.equ	T3ICS2	= 7 ; Timer3 Input Capture Select


; ***** TIMER4 *****************
; T4CNT - Timer4 Counter
.equ	T4CNTH0	= 0 ; Timer4 Counter High Bit 8
.equ	T4CNTH1	= 1 ; Timer4 Counter High Bit 9
.equ	T4CNTH2	= 2 ; Timer4 Counter High Bit 10
.equ	T4CNTH3	= 3 ; Timer4 Counter High Bit 11
.equ	T4CNTH4	= 4 ; Timer4 Counter High Bit 12
.equ	T4CNTH5	= 5 ; Timer4 Counter High Bit 13
.equ	T4CNTH6	= 6 ; Timer4 Counter High Bit 14
.equ	T4CNTH7	= 7 ; Timer4 Counter High Bit 15

.equ	T4CNTL0	= 0 ; Timer4 Counter Low Bit 0
.equ	T4CNTL1	= 1 ; Timer4 Counter Low Bit 1
.equ	T4CNTL2	= 2 ; Timer4 Counter Low Bit 2
.equ	T4CNTL3	= 3 ; Timer4 Counter Low Bit 3
.equ	T4CNTL4	= 4 ; Timer4 Counter Low Bit 4
.equ	T4CNTL5	= 5 ; Timer4 Counter Low Bit 5
.equ	T4CNTL6	= 6 ; Timer4 Counter Low Bit 6
.equ	T4CNTL7	= 7 ; Timer4 Counter Low Bit 7

; T4COR - Timer4 Compare
.equ	T4CORH0	= 0 ; Timer4 Compare High Bit 8
.equ	T4CORH1	= 1 ; Timer4 Compare High Bit 9
.equ	T4CORH2	= 2 ; Timer4 Compare High Bit 10
.equ	T4CORH3	= 3 ; Timer4 Compare High Bit 11
.equ	T4CORH4	= 4 ; Timer4 Compare High Bit 12
.equ	T4CORH5	= 5 ; Timer4 Compare High Bit 13
.equ	T4CORH6	= 6 ; Timer4 Compare High Bit 14
.equ	T4CORH7	= 7 ; Timer4 Compare High Bit 15

.equ	T4CORL0	= 0 ; Timer4 Compare Low Bit 0
.equ	T4CORL1	= 1 ; Timer4 Compare Low Bit 1
.equ	T4CORL2	= 2 ; Timer4 Compare Low Bit 2
.equ	T4CORL3	= 3 ; Timer4 Compare Low Bit 3
.equ	T4CORL4	= 4 ; Timer4 Compare Low Bit 4
.equ	T4CORL5	= 5 ; Timer4 Compare Low Bit 5
.equ	T4CORL6	= 6 ; Timer4 Compare Low Bit 6
.equ	T4CORL7	= 7 ; Timer4 Compare Low Bit 7

; T4CR - Timer4 Control Register
.equ	T4OTM	= 0 ; Timer4 Overflow Toggle Mask
.equ	T4CTM	= 1 ; Timer4 Compare Toggle Mask
.equ	T4CRM	= 2 ; Timer4 Compare Reset Mask
.equ	T4CPRM	= 3 ; Timer4 Capture Reset Mask
.equ	T4TOP	= 4 ; Timer4 Toggle Output Preset
.equ	T4RES	= 5 ; Timer4 Reset
.equ	T4TOS	= 6 ; Timer4 Toggle with Start
.equ	T4ENA	= 7 ; Timer4 Enable

; T4ICR - Timer4 Input Capture
.equ	T4ICRH0	= 0 ; Timer4 Input Capture High Bit 8
.equ	T4ICRH1	= 1 ; Timer4 Input Capture High Bit 9
.equ	T4ICRH2	= 2 ; Timer4 Input Capture High Bit 10
.equ	T4ICRH3	= 3 ; Timer4 Input Capture High Bit 11
.equ	T4ICRH4	= 4 ; Timer4 Input Capture High Bit 12
.equ	T4ICRH5	= 5 ; Timer4 Input Capture High Bit 13
.equ	T4ICRH6	= 6 ; Timer4 Input Capture High Bit 14
.equ	T4ICRH7	= 7 ; Timer4 Input Capture High Bit 15

.equ	T4ICRL0	= 0 ; Timer4 Input Capture Low Bit 0
.equ	T4ICRL1	= 1 ; Timer4 Input Capture Low Bit 1
.equ	T4ICRL2	= 2 ; Timer4 Input Capture Low Bit 2
.equ	T4ICRL3	= 3 ; Timer4 Input Capture Low Bit 3
.equ	T4ICRL4	= 4 ; Timer4 Input Capture Low Bit 4
.equ	T4ICRL5	= 5 ; Timer4 Input Capture Low Bit 5
.equ	T4ICRL6	= 6 ; Timer4 Input Capture Low Bit 6
.equ	T4ICRL7	= 7 ; Timer4 Input Capture Low Bit 7

; T4IFR - Timer4 Interrupt Flag Register
.equ	T4OFF	= 0 ; Timer4 Overflow Flag
.equ	T4COF	= 1 ; Timer4 Compare Flag
.equ	T4ICF	= 2 ; Timer4 Input Capture Flag

; T4IMR - Timer4 Interrupt Mask Register
.equ	T4OIM	= 0 ; Timer4 Overflow Interrupt Mask
.equ	T4CIM	= 1 ; Timer4 Compare Interrupt Mask
.equ	T4CPIM	= 2 ; Timer4 Capture Interrupt Mask

; T4MRA - Timer4 Mode Register A
.equ	T4CS0	= 0 ; Timer4 Clock Select
.equ	T4CS1	= 1 ; Timer4 Clock Select
.equ	T4PS0	= 2 ; Timer4 Prescaler Select
.equ	T4PS1	= 3 ; Timer4 Prescaler Select
.equ	T4PS2	= 4 ; Timer4 Prescaler Select

; T4MRB - Timer4 Mode Register B
.equ	T4SCE	= 1 ; Timer4 Software Capture Enable
.equ	T4CNC	= 2 ; Timer4 Input Capture Noise Canceller
.equ	T4CE0	= 3 ; Timer4 Capture Edge Select
.equ	T4CE1	= 4 ; Timer4 Capture Edge Select
.equ	T4ICS0	= 5 ; Timer4 Input Capture Select
.equ	T4ICS1	= 6 ; Timer4 Input Capture Select
.equ	T4ICS2	= 7 ; Timer4 Input Capture Select


; ***** TIMER5 *****************
; GTCCR - General Timer/Counter Control Register
.equ	PSR10	= 0 ; Prescaler Reset
.equ	TSM	= 7 ; Timer Synchronization Mode

; T5CCR - Timer5 Configuration and Control Register
.equ	T5CS0	= 0 ; Timer5 Clock Select
.equ	T5CS1	= 1 ; Timer5 Clock Select
.equ	T5CS2	= 2 ; Timer5 Clock Select
.equ	T5CTC	= 3 ; Timer5 Clear Counter on Compare Match

; T5CNT - Timer5 Counter
.equ	T5CNTH0	= 0 ; Timer5 Counter High Bit 8
.equ	T5CNTH1	= 1 ; Timer5 Counter High Bit 9
.equ	T5CNTH2	= 2 ; Timer5 Counter High Bit 10
.equ	T5CNTH3	= 3 ; Timer5 Counter High Bit 11
.equ	T5CNTH4	= 4 ; Timer5 Counter High Bit 12
.equ	T5CNTH5	= 5 ; Timer5 Counter High Bit 13
.equ	T5CNTH6	= 6 ; Timer5 Counter High Bit 14
.equ	T5CNTH7	= 7 ; Timer5 Counter High Bit 15

.equ	T5CNTL0	= 0 ; Timer5 Counter Low Bit 0
.equ	T5CNTL1	= 1 ; Timer5 Counter Low Bit 1
.equ	T5CNTL2	= 2 ; Timer5 Counter Low Bit 2
.equ	T5CNTL3	= 3 ; Timer5 Counter Low Bit 3
.equ	T5CNTL4	= 4 ; Timer5 Counter Low Bit 4
.equ	T5CNTL5	= 5 ; Timer5 Counter Low Bit 5
.equ	T5CNTL6	= 6 ; Timer5 Counter Low Bit 6
.equ	T5CNTL7	= 7 ; Timer5 Counter Low Bit 7

; T5IFR - Timer5 Interrupt Flag Register
.equ	T5OFF	= 0 ; Timer5 Overflow Flag
.equ	T5COF	= 1 ; Timer5 Compare Flag

; T5IMR - Timer5 Interrupt Mask Register
.equ	T5OIM	= 0 ; Timer5 Overflow Interrupt Mask
.equ	T5CIM	= 1 ; Timer5 Compare Interrupt Mask

; T5OCR - Timer5 Output Compare
.equ	T5OCRH0	= 0 ; Timer5 Output Compare High Bit 8
.equ	T5OCRH1	= 1 ; Timer5 Output Compare High Bit 9
.equ	T5OCRH2	= 2 ; Timer5 Output Compare High Bit 10
.equ	T5OCRH3	= 3 ; Timer5 Output Compare High Bit 11
.equ	T5OCRH4	= 4 ; Timer5 Output Compare High Bit 12
.equ	T5OCRH5	= 5 ; Timer5 Output Compare High Bit 13
.equ	T5OCRH6	= 6 ; Timer5 Output Compare High Bit 14
.equ	T5OCRH7	= 7 ; Timer5 Output Compare High Bit 15

.equ	T5OCRL0	= 0 ; Timer5 Output Compare Low Bit 0
.equ	T5OCRL1	= 1 ; Timer5 Output Compare Low Bit 1
.equ	T5OCRL2	= 2 ; Timer5 Output Compare Low Bit 2
.equ	T5OCRL3	= 3 ; Timer5 Output Compare Low Bit 3
.equ	T5OCRL4	= 4 ; Timer5 Output Compare Low Bit 4
.equ	T5OCRL5	= 5 ; Timer5 Output Compare Low Bit 5
.equ	T5OCRL6	= 6 ; Timer5 Output Compare Low Bit 6
.equ	T5OCRL7	= 7 ; Timer5 Output Compare Low Bit 7


; ***** TRACE *****************
; TRCCR - Trace Unit Control Register
.equ	TRCCE	= 0 ; Trace Unit Change Enable
.equ	TRCEN	= 1 ; Trace Unit Enable

; TRCDR - Trace Unit Data Register
.equ	TRCDR0	= 0 ; Trace Unit Data Register Bit 0
.equ	TRCDR1	= 1 ; Trace Unit Data Register Bit 1
.equ	TRCDR2	= 2 ; Trace Unit Data Register Bit 2
.equ	TRCDR3	= 3 ; Trace Unit Data Register Bit 3
.equ	TRCDR4	= 4 ; Trace Unit Data Register Bit 4
.equ	TRCDR5	= 5 ; Trace Unit Data Register Bit 5
.equ	TRCDR6	= 6 ; Trace Unit Data Register Bit 6
.equ	TRCDR7	= 7 ; Trace Unit Data Register Bit 7

; TRCID - Trace Identifier
.equ	TRCIDH0	= 0 ; Trace Identifier High Bit 8
.equ	TRCIDH1	= 1 ; Trace Identifier High Bit 9
.equ	TRCIDH2	= 2 ; Trace Identifier High Bit 10
.equ	TRCIDH3	= 3 ; Trace Identifier High Bit 11
.equ	TRCIDH4	= 4 ; Trace Identifier High Bit 12
.equ	TRCIDH5	= 5 ; Trace Identifier High Bit 13
.equ	TRCIDH6	= 6 ; Trace Identifier High Bit 14
.equ	TRCIDH7	= 7 ; Trace Identifier High Bit 15

.equ	TRCIDL0	= 0 ; Trace Identifier Low Bit 0
.equ	TRCIDL1	= 1 ; Trace Identifier Low Bit 1
.equ	TRCIDL2	= 2 ; Trace Identifier Low Bit 2
.equ	TRCIDL3	= 3 ; Trace Identifier Low Bit 3
.equ	TRCIDL4	= 4 ; Trace Identifier Low Bit 4
.equ	TRCIDL5	= 5 ; Trace Identifier Low Bit 5
.equ	TRCIDL6	= 6 ; Trace Identifier Low Bit 6
.equ	TRCIDL7	= 7 ; Trace Identifier Low Bit 7


; ***** VMON *****************
; VMCSR - Voltage Monitor Control and Status Register
.equ	VMLS0	= 0 ; Voltage Monitor Level Select
.equ	VMLS1	= 1 ; Voltage Monitor Level Select
.equ	VMLS2	= 2 ; Voltage Monitor Level Select
.equ	VMLS3	= 3 ; Voltage Monitor Level Select
.equ	VMIM	= 4 ; Voltage Monitor Interrupt Mask
.equ	VMF	= 5 ; Voltage Monitor Flag


; ***** FUSE *****************
; LOW - 
.equ	EXTCLKEN	= 0 ; External Clock enable
.equ	RSTDISBL	= 1 ; Disable external Reset
.equ	BOOTRST	= 2 ; Select interrupt vector location
.equ	EESAVE	= 3 ; Preserve EEPROM memory through the Chip Erase cycle
.equ	WDTON	= 4 ; Watch-dog Timer always on
.equ	SPIEN	= 5 ; Serial program downloading (SPI) enabled
.equ	DWEN	= 6 ; Debug Wire enable
.equ	CKDIV8	= 7 ; Divide clock by 8 internally


; ***** LOCKBIT *****************
; LOCKBIT - 
.equ	LB1	= 0 ; Memory Lock
.equ	LB2	= 1 ; Memory Lock
.equ	BLB01	= 2 ; Application Protection
.equ	BLB02	= 3 ; Application Protection
.equ	BLB11	= 4 ; Boot Loader Protection
.equ	BLB12	= 5 ; Boot Loader Protection

; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30

; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHSTART	= 0x4000 ; Note: Word address
.equ	FLASHEND	= 0x68FF ; Note: Word address
.equ	FLASHPAGESIZE	= 0x0040 ;

.equ	IOEND	= 0x01FF

.equ	SRAM_START	= 0x0200
.equ	SRAM_SIZE	= 2048
.equ	RAMEND	= 0x09FF

.equ	E2END	= 0x03FF
.equ	EEPROMEND	= 0x03FF
.equ	EEADRBITS	= 10

.equ	XRAMEND	= 0x0000

#pragma AVRPART MEMORY PROG_FLASH 53760
#pragma AVRPART MEMORY INT_SRAM SIZE 2048
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x200

#pragma AVRPART MEMORY EEPROM 1024

; ***** BOOTLOADER DECLARATIONS ******************************************
 ; No bootloader declariations; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	 = 0x0002 ; External Interrupt Request 0
.equ	INT1addr	 = 0x0004 ; External Interrupt Request 1
.equ	PCI0addr	 = 0x0006 ; Pin Change Interrupt Request 0
.equ	PCI1addr	 = 0x0008 ; Pin Change Interrupt Request 1
.equ	VMONaddr	 = 0x000A ; Voltage Monitoring Interrupt
.equ	AVCCRaddr	 = 0x000C ; AVCC Reset Interrupt
.equ	AVCCLaddr	 = 0x000E ; AVCC Low Interrupt
.equ	T0INTaddr	 = 0x0010 ; Timer 0 Interval Interrupt
.equ	T1COMPaddr	 = 0x0012 ; Timer/Counter1 Compare Match Interrupt
.equ	T1OVFaddr	 = 0x0014 ; Timer/Counter1 Overflow Interrupt
.equ	T2COMPaddr	 = 0x0016 ; Timer/Counter2 Compare Match Interrupt
.equ	T2OVFaddr	 = 0x0018 ; Timer/Counter2 Overflow Interrupt
.equ	T3CAPaddr	 = 0x001A ; Timer/Counter3 Capture Event Interrupt
.equ	T3COMPaddr	 = 0x001C ; Timer/Counter3 Compare Match Interrupt
.equ	T3OVFaddr	 = 0x001E ; Timer/Counter3 Overflow Interrupt
.equ	T4CAPaddr	 = 0x0020 ; Timer/Counter4 Capture Event Interrupt
.equ	T4COMPaddr	 = 0x0022 ; Timer/Counter4 Compare Match Interrupt
.equ	T4OVFaddr	 = 0x0024 ; Timer/Counter4 Overflow Interrupt
.equ	T5COMPaddr	 = 0x0026 ; Timer/Counter5 Compare Match Interrupt
.equ	T5OVFaddr	 = 0x0028 ; Timer/Counter5 Overflow Interrupt
.equ	SPIaddr	 = 0x002A ; SPI Serial Transfer Complete Interrupt
.equ	SRX_FIFOaddr	 = 0x002C ; SPI Rx Buffer Interrupt
.equ	STX_FIFOaddr	 = 0x002E ; SPI Tx Buffer Interrupt
.equ	LINTCaddr	 = 0x0030 ; LIN/UART Transfer Complete Interrupt
.equ	LINERRaddr	 = 0x0032 ; LIN/UART Error Interrupt
.equ	SSMaddr	 = 0x0034 ; Sequencer State Machine Interrupt
.equ	DFFLRaddr	 = 0x0036 ; Data FIFO fill level reached Interrupt
.equ	DFOUEaddr	 = 0x0038 ; Data FIFO overflow or underflow error Interrupt
.equ	SFFLRaddr	 = 0x003A ; RSSI/Preamble FIFO fill level reached Interrupt
.equ	SFOUEaddr	 = 0x003C ; RSSI/Preamble FIFO overflow or underflow error Interrupt
.equ	TMTCFaddr	 = 0x003E ; Tx Modulator Telegram Finish Interrupt
.equ	UHF_WCOAaddr	 = 0x0040 ; UHF receiver wake up ok on Rx path A
.equ	UHF_WCOBaddr	 = 0x0042 ; UHF receiver wake up ok on Rx path B
.equ	UHF_SOTAaddr	 = 0x0044 ; UHF receiver start of telegram ok on Rx path A
.equ	UHF_SOTBaddr	 = 0x0046 ; UHF receiver start of telegram ok on Rx path B
.equ	UHF_EOTAaddr	 = 0x0048 ; UHF receiver end of telegram on Rx path A
.equ	UHF_EOTBaddr	 = 0x004A ; UHF receiver end of telegram on Rx path B
.equ	UHF_NBITAaddr	 = 0x004C ; UHF receiver new bit on Rx path A
.equ	UHF_NBITBaddr	 = 0x004E ; UHF receiver new bit on Rx path B
.equ	EXCMaddr	 = 0x0050 ; External input Clock monitoring Interrupt
.equ	ERDYaddr	 = 0x0052 ; EEPROM Ready Interrupt
.equ	SPMRaddr	 = 0x0054 ; Store Program Memory Ready
.equ	IDFULLaddr	 = 0x0056 ; IDSCAN Full Interrupt

.equ	INT_VECTORS_SIZE	= 88 ; size in words

#endif /* _A5787DEF_INC_ */

; ***** END OF FILE ******************************************************



