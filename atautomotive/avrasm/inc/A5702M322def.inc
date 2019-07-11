;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;*
;* Number            : AVR000
;* File Name         : A5702M322def.inc
;* Title             : Register/Bit Definitions for the ATA5702M322
;* Created           : 2017-11-21 16:21
;* Version           : 1.00
;* Support e-mail    : avr@atmel.com
;* Target MCU        : ATA5702M322
;*
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and
;* Z have been assigned names XL - ZH. Highest RAM address for Internal
;* SRAM is also defined
;*
;*************************************************************************

#ifndef _A5702M322DEF_INC_
#define _A5702M322DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device	ATA5702M322
#pragma AVRPART ADMIN PART_NAME ATA5702M322
.equ	SIGNATURE_000	= 0x1E
.equ	SIGNATURE_001	= 0x95
.equ	SIGNATURE_002	= 0x69

#pragma AVRPART CORE CORE_VERSION V3


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED" are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	SRCCALL	= 0x1FF ; MEMORY MAPPED
.equ	PMTER	= 0x1FE ; MEMORY MAPPED
.equ	TPCALR13	= 0x1FB ; MEMORY MAPPED
.equ	TPCALR12	= 0x1FA ; MEMORY MAPPED
.equ	TPCALR11	= 0x1F9 ; MEMORY MAPPED
.equ	SUPCA10	= 0x1F8 ; MEMORY MAPPED
.equ	SUPCA9	= 0x1F7 ; MEMORY MAPPED
.equ	SUPCA8	= 0x1F6 ; MEMORY MAPPED
.equ	SUPCA7	= 0x1F5 ; MEMORY MAPPED
.equ	SUPCA6	= 0x1F4 ; MEMORY MAPPED
.equ	SUPCA5	= 0x1F3 ; MEMORY MAPPED
.equ	SRCTCAL	= 0x1F2 ; MEMORY MAPPED
.equ	SRCCAL	= 0x1F1 ; MEMORY MAPPED
.equ	TMOCR	= 0x1F0 ; MEMORY MAPPED
.equ	PDSCR	= 0x1EF ; MEMORY MAPPED
.equ	TW1AMR	= 0x1EE ; MEMORY MAPPED
.equ	TW1AR	= 0x1ED ; MEMORY MAPPED
.equ	TW1DR	= 0x1EC ; MEMORY MAPPED
.equ	TW1SR	= 0x1EB ; MEMORY MAPPED
.equ	TW1CR	= 0x1EA ; MEMORY MAPPED
.equ	TW1BR	= 0x1E9 ; MEMORY MAPPED
.equ	CALRDYLF	= 0x1E8 ; MEMORY MAPPED
.equ	DBONDR	= 0x1E7 ; MEMORY MAPPED
.equ	VMCR	= 0x1E6 ; MEMORY MAPPED
.equ	CLPR	= 0x1E5 ; MEMORY MAPPED
.equ	CMIMR	= 0x1E4 ; MEMORY MAPPED
.equ	CMCR	= 0x1E3 ; MEMORY MAPPED
.equ	T3IFR	= 0x1E1 ; MEMORY MAPPED
.equ	CRCDIR	= 0x1E0 ; MEMORY MAPPED
.equ	PHCSRH	= 0x1DF ; MEMORY MAPPED
.equ	PHCSRL	= 0x1DE ; MEMORY MAPPED
.equ	PHCRPH	= 0x1DD ; MEMORY MAPPED
.equ	PHCRPL	= 0x1DC ; MEMORY MAPPED
.equ	PHCSTH	= 0x1DB ; MEMORY MAPPED
.equ	PHCSTL	= 0x1DA ; MEMORY MAPPED
.equ	PHCRCR	= 0x1D9 ; MEMORY MAPPED
.equ	PHIMR	= 0x1D8 ; MEMORY MAPPED
.equ	LDFC	= 0x1D7 ; MEMORY MAPPED
.equ	LDFIM	= 0x1D6 ; MEMORY MAPPED
.equ	T5IFR	= 0x1D5 ; MEMORY MAPPED
.equ	LDFRP	= 0x1D4 ; MEMORY MAPPED
.equ	LDFWP	= 0x1D3 ; MEMORY MAPPED
.equ	T4IFR	= 0x1D2 ; MEMORY MAPPED
.equ	LDFS	= 0x1D1 ; MEMORY MAPPED
.equ	RSDBGR	= 0x1C5 ; MEMORY MAPPED
.equ	SD360R	= 0x1C4 ; MEMORY MAPPED
.equ	SD23RR	= 0x1C3 ; MEMORY MAPPED
.equ	SD13RR	= 0x1C2 ; MEMORY MAPPED
.equ	SD12RR	= 0x1C1 ; MEMORY MAPPED
.equ	RSSRCR	= 0x1C0 ; MEMORY MAPPED
.equ	RSRES4H	= 0x1BF ; MEMORY MAPPED
.equ	RSRES4L	= 0x1BE ; MEMORY MAPPED
.equ	RSRES3H	= 0x1BD ; MEMORY MAPPED
.equ	RSRES3L	= 0x1BC ; MEMORY MAPPED
.equ	RSRES2H	= 0x1BB ; MEMORY MAPPED
.equ	RSRES2L	= 0x1BA ; MEMORY MAPPED
.equ	RSRES1H	= 0x1B9 ; MEMORY MAPPED
.equ	RSRES1L	= 0x1B8 ; MEMORY MAPPED
.equ	RSDLYR	= 0x1B7 ; MEMORY MAPPED
.equ	RSCALIB	= 0x1B6 ; MEMORY MAPPED
.equ	RSFR	= 0x1B4 ; MEMORY MAPPED
.equ	RSMS2R	= 0x1B3 ; MEMORY MAPPED
.equ	RSMS1R	= 0x1B2 ; MEMORY MAPPED
.equ	RSSR	= 0x1B1 ; MEMORY MAPPED
.equ	RSCR	= 0x1B0 ; MEMORY MAPPED
.equ	TW2AMR	= 0x1AF ; MEMORY MAPPED
.equ	TW2AR	= 0x1AE ; MEMORY MAPPED
.equ	TW2DR	= 0x1AD ; MEMORY MAPPED
.equ	TW2SR	= 0x1AC ; MEMORY MAPPED
.equ	TW2CR	= 0x1AB ; MEMORY MAPPED
.equ	TW2BR	= 0x1AA ; MEMORY MAPPED
.equ	LFQC1	= 0x1A9 ; MEMORY MAPPED
.equ	LFQC2	= 0x1A8 ; MEMORY MAPPED
.equ	LFQC3	= 0x1A7 ; MEMORY MAPPED
.equ	LTEMR	= 0x1A6 ; MEMORY MAPPED
.equ	PHDFR	= 0x1A5 ; MEMORY MAPPED
.equ	PHTBLR	= 0x1A4 ; MEMORY MAPPED
.equ	T1IFR	= 0x1A2 ; MEMORY MAPPED
.equ	LTCOR	= 0x1A1 ; MEMORY MAPPED
.equ	LFSTOP	= 0x1A0 ; MEMORY MAPPED
.equ	LFSYLE	= 0x19F ; MEMORY MAPPED
.equ	LFSYSY	= 0x19B ; MEMORY MAPPED
.equ	PHIDFR	= 0x19A ; MEMORY MAPPED
.equ	PHID1L	= 0x199 ; MEMORY MAPPED
.equ	PHID1	= 0x195 ; MEMORY MAPPED
.equ	PHID0L	= 0x194 ; MEMORY MAPPED
.equ	PHID0	= 0x190 ; MEMORY MAPPED
.equ	LFIMR	= 0x18F ; MEMORY MAPPED
.equ	LFCPR	= 0x18E ; MEMORY MAPPED
.equ	PHBCRR	= 0x188 ; MEMORY MAPPED
.equ	GPIOR8	= 0x187 ; MEMORY MAPPED
.equ	GPIOR7	= 0x186 ; MEMORY MAPPED
.equ	GPIOR6	= 0x185 ; MEMORY MAPPED
.equ	GPIOR5	= 0x184 ; MEMORY MAPPED
.equ	GPIOR4	= 0x183 ; MEMORY MAPPED
.equ	GPIOR3	= 0x182 ; MEMORY MAPPED
.equ	AESDR	= 0x181 ; MEMORY MAPPED
.equ	AESKR	= 0x180 ; MEMORY MAPPED
.equ	AESDPR	= 0x17F ; MEMORY MAPPED
.equ	TPCALR10	= 0x17E ; MEMORY MAPPED
.equ	TPCALR9	= 0x17D ; MEMORY MAPPED
.equ	TPCALR8	= 0x17C ; MEMORY MAPPED
.equ	TPCALR7	= 0x17B ; MEMORY MAPPED
.equ	TPCALR6	= 0x17A ; MEMORY MAPPED
.equ	TPCALR5	= 0x179 ; MEMORY MAPPED
.equ	TPCALR4	= 0x178 ; MEMORY MAPPED
.equ	TPCALR3	= 0x177 ; MEMORY MAPPED
.equ	TPCALR2	= 0x176 ; MEMORY MAPPED
.equ	TPCALR1	= 0x175 ; MEMORY MAPPED
.equ	TPCR5	= 0x173 ; MEMORY MAPPED
.equ	TPCR4	= 0x172 ; MEMORY MAPPED
.equ	TPCR3	= 0x171 ; MEMORY MAPPED
.equ	TPECMR	= 0x170 ; MEMORY MAPPED
.equ	TPECR4	= 0x16F ; MEMORY MAPPED
.equ	TPECR3	= 0x16E ; MEMORY MAPPED
.equ	TPECR2	= 0x16D ; MEMORY MAPPED
.equ	TPECR1	= 0x16C ; MEMORY MAPPED
.equ	TPDCR5	= 0x16B ; MEMORY MAPPED
.equ	TPDCR4	= 0x16A ; MEMORY MAPPED
.equ	TPDCR3	= 0x169 ; MEMORY MAPPED
.equ	TPDCR2	= 0x168 ; MEMORY MAPPED
.equ	TPDCR1	= 0x167 ; MEMORY MAPPED
.equ	TPIMR	= 0x166 ; MEMORY MAPPED
.equ	TPCR1	= 0x165 ; MEMORY MAPPED
.equ	DBEND	= 0x164 ; MEMORY MAPPED
.equ	T0CR	= 0x162 ; MEMORY MAPPED
.equ	PCIFR	= 0x161 ; MEMORY MAPPED
.equ	LFSRCTL	= 0x15C ; MEMORY MAPPED
.equ	EEST	= 0x15B ; MEMORY MAPPED
.equ	PGMST	= 0x15A ; MEMORY MAPPED
.equ	T2IFR	= 0x159 ; MEMORY MAPPED
.equ	SFIR	= 0x158 ; MEMORY MAPPED
.equ	SFFR	= 0x157 ; MEMORY MAPPED
.equ	DBGSW	= 0x156 ; MEMORY MAPPED
.equ	DBENC	= 0x155 ; MEMORY MAPPED
.equ	DBENB	= 0x154 ; MEMORY MAPPED
.equ	DBTC	= 0x153 ; MEMORY MAPPED
.equ	DBCR	= 0x152 ; MEMORY MAPPED
.equ	LFSRCTM	= 0x151 ; MEMORY MAPPED
.equ	CRCDOR	= 0x146 ; MEMORY MAPPED
.equ	CRCCR	= 0x145 ; MEMORY MAPPED
.equ	EEPR3	= 0x13D ; MEMORY MAPPED
.equ	EEPR2	= 0x13C ; MEMORY MAPPED
.equ	EEPR1	= 0x13B ; MEMORY MAPPED
.equ	LFDSR11	= 0x13A ; MEMORY MAPPED
.equ	LFDSR10	= 0x139 ; MEMORY MAPPED
.equ	LFDSR9	= 0x138 ; MEMORY MAPPED
.equ	LFDSR8	= 0x137 ; MEMORY MAPPED
.equ	LFDSR7	= 0x136 ; MEMORY MAPPED
.equ	LFDSR6	= 0x135 ; MEMORY MAPPED
.equ	LFDSR5	= 0x134 ; MEMORY MAPPED
.equ	LFDSR4	= 0x133 ; MEMORY MAPPED
.equ	LFDSR3	= 0x132 ; MEMORY MAPPED
.equ	LFDSR2	= 0x131 ; MEMORY MAPPED
.equ	LFDSR1	= 0x130 ; MEMORY MAPPED
.equ	TMCR1	= 0x12E ; MEMORY MAPPED
.equ	TMCR2	= 0x12D ; MEMORY MAPPED
.equ	TMSR	= 0x12C ; MEMORY MAPPED
.equ	TMSSC	= 0x12B ; MEMORY MAPPED
.equ	TMTLLH	= 0x12A ; MEMORY MAPPED
.equ	TMTLLL	= 0x129 ; MEMORY MAPPED
.equ	TMSHR	= 0x128 ; MEMORY MAPPED
.equ	TMCPH	= 0x127 ; MEMORY MAPPED
.equ	TMCPL	= 0x126 ; MEMORY MAPPED
.equ	TMCIH	= 0x125 ; MEMORY MAPPED
.equ	TMCIL	= 0x124 ; MEMORY MAPPED
.equ	TMCSB	= 0x123 ; MEMORY MAPPED
.equ	TMCRCH	= 0x122 ; MEMORY MAPPED
.equ	TMCRCL	= 0x121 ; MEMORY MAPPED
.equ	TMFSM	= 0x120 ; MEMORY MAPPED
.equ	FETD	= 0x11F ; MEMORY MAPPED
.equ	FETE3	= 0x11E ; MEMORY MAPPED
.equ	FETE2	= 0x11D ; MEMORY MAPPED
.equ	FETE1	= 0x11C ; MEMORY MAPPED
.equ	CLKOCR	= 0x116 ; MEMORY MAPPED
.equ	CLKOD	= 0x115 ; MEMORY MAPPED
.equ	FEBIA	= 0x10E ; MEMORY MAPPED
.equ	FEANT	= 0x10D ; MEMORY MAPPED
.equ	FEALR	= 0x10C ; MEMORY MAPPED
.equ	FEVCO	= 0x10B ; MEMORY MAPPED
.equ	FECR	= 0x10A ; MEMORY MAPPED
.equ	FETN4	= 0x109 ; MEMORY MAPPED
.equ	FEMS	= 0x108 ; MEMORY MAPPED
.equ	FEBT	= 0x107 ; MEMORY MAPPED
.equ	FEVCT	= 0x106 ; MEMORY MAPPED
.equ	FEPAC	= 0x105 ; MEMORY MAPPED
.equ	FEAT	= 0x104 ; MEMORY MAPPED
.equ	FELNA	= 0x103 ; MEMORY MAPPED
.equ	FEEN2	= 0x102 ; MEMORY MAPPED
.equ	FEEN1	= 0x101 ; MEMORY MAPPED
.equ	FESR	= 0x100 ; MEMORY MAPPED
.equ	TRCDR	= 0xFF ; MEMORY MAPPED
.equ	TRCIDH	= 0xFD ; MEMORY MAPPED
.equ	TRCIDL	= 0xFC ; MEMORY MAPPED
.equ	SP2SR	= 0xF9 ; MEMORY MAPPED
.equ	SP2DR	= 0xF8 ; MEMORY MAPPED
.equ	SP2CR	= 0xF7 ; MEMORY MAPPED
.equ	MSMCR4	= 0xEF ; MEMORY MAPPED
.equ	MSMCR3	= 0xEE ; MEMORY MAPPED
.equ	MSMCR2	= 0xED ; MEMORY MAPPED
.equ	MSMCR1	= 0xEC ; MEMORY MAPPED
.equ	VXMCTRL	= 0xEB ; MEMORY MAPPED
.equ	SSMSTR	= 0xEA ; MEMORY MAPPED
.equ	MSMSTR	= 0xE9 ; MEMORY MAPPED
.equ	SSMIMR	= 0xE8 ; MEMORY MAPPED
.equ	SSMIFR	= 0xE7 ; MEMORY MAPPED
.equ	SSMSR	= 0xE6 ; MEMORY MAPPED
.equ	SSMRR	= 0xE5 ; MEMORY MAPPED
.equ	SSMFBR	= 0xE4 ; MEMORY MAPPED
.equ	GTCCR	= 0xE3 ; MEMORY MAPPED
.equ	SSMCR	= 0xE2 ; MEMORY MAPPED
.equ	SFC	= 0xE1 ; MEMORY MAPPED
.equ	SFI	= 0xE0 ; MEMORY MAPPED
.equ	SFD	= 0xDF ; MEMORY MAPPED
.equ	SFRP	= 0xDE ; MEMORY MAPPED
.equ	SFWP	= 0xDD ; MEMORY MAPPED
.equ	SFL	= 0xDC ; MEMORY MAPPED
.equ	SFS	= 0xDB ; MEMORY MAPPED
.equ	DFC	= 0xDA ; MEMORY MAPPED
.equ	DFI	= 0xD9 ; MEMORY MAPPED
.equ	DFD	= 0xD8 ; MEMORY MAPPED
.equ	DFRP	= 0xD7 ; MEMORY MAPPED
.equ	DFWP	= 0xD6 ; MEMORY MAPPED
.equ	DFL	= 0xD5 ; MEMORY MAPPED
.equ	DFS	= 0xD2 ; MEMORY MAPPED
.equ	CALRDY	= 0xD1 ; MEMORY MAPPED
.equ	SUPCA4	= 0xD0 ; MEMORY MAPPED
.equ	SUPCA3	= 0xCF ; MEMORY MAPPED
.equ	SUPCA2	= 0xCE ; MEMORY MAPPED
.equ	SUPCA1	= 0xCD ; MEMORY MAPPED
.equ	SUPCR	= 0xCC ; MEMORY MAPPED
.equ	SUPFR	= 0xCB ; MEMORY MAPPED
.equ	CMOCR	= 0xCA ; MEMORY MAPPED
.equ	CMSR	= 0xC9 ; MEMORY MAPPED
.equ	RCTCAL	= 0xC8 ; MEMORY MAPPED
.equ	FRCCAL	= 0xC7 ; MEMORY MAPPED
.equ	MRCCAL	= 0xC6 ; MEMORY MAPPED
.equ	XFUSE	= 0xC5 ; MEMORY MAPPED
.equ	LFCALR53	= 0xC4 ; MEMORY MAPPED
.equ	LFCALR52	= 0xC3 ; MEMORY MAPPED
.equ	LFCALR51	= 0xC2 ; MEMORY MAPPED
.equ	LFCALR50	= 0xC1 ; MEMORY MAPPED
.equ	LFCALR49	= 0xC0 ; MEMORY MAPPED
.equ	LFCALR48	= 0xBF ; MEMORY MAPPED
.equ	LFCALR47	= 0xBE ; MEMORY MAPPED
.equ	LFCALR46	= 0xBD ; MEMORY MAPPED
.equ	LFCALR45	= 0xBC ; MEMORY MAPPED
.equ	LFCALR44	= 0xBB ; MEMORY MAPPED
.equ	LFCALR43	= 0xBA ; MEMORY MAPPED
.equ	LFCALR42	= 0xB9 ; MEMORY MAPPED
.equ	LFCALR41	= 0xB8 ; MEMORY MAPPED
.equ	LFCALR40	= 0xB7 ; MEMORY MAPPED
.equ	LFCALR39	= 0xB6 ; MEMORY MAPPED
.equ	LFCALR38	= 0xB5 ; MEMORY MAPPED
.equ	LFCALR37	= 0xB4 ; MEMORY MAPPED
.equ	LFCALR36	= 0xB3 ; MEMORY MAPPED
.equ	LFCALR35	= 0xB2 ; MEMORY MAPPED
.equ	LFCALR34	= 0xB1 ; MEMORY MAPPED
.equ	LFCALR33	= 0xB0 ; MEMORY MAPPED
.equ	LFCALR32	= 0xAF ; MEMORY MAPPED
.equ	LFCALR31	= 0xAE ; MEMORY MAPPED
.equ	LFCALR30	= 0xAD ; MEMORY MAPPED
.equ	LFCALR29	= 0xAC ; MEMORY MAPPED
.equ	LFCALR28	= 0xAB ; MEMORY MAPPED
.equ	LFCALR27	= 0xAA ; MEMORY MAPPED
.equ	LFCALR26	= 0xA9 ; MEMORY MAPPED
.equ	LFCALR25	= 0xA8 ; MEMORY MAPPED
.equ	LFCALR24	= 0xA7 ; MEMORY MAPPED
.equ	LFCALR23	= 0xA6 ; MEMORY MAPPED
.equ	LFCALR22	= 0xA5 ; MEMORY MAPPED
.equ	LFCALR21	= 0xA4 ; MEMORY MAPPED
.equ	LFCALR20	= 0xA3 ; MEMORY MAPPED
.equ	LFCALR19	= 0xA2 ; MEMORY MAPPED
.equ	LFCALR18	= 0xA1 ; MEMORY MAPPED
.equ	LFCALR17	= 0xA0 ; MEMORY MAPPED
.equ	LFCALR16	= 0x9F ; MEMORY MAPPED
.equ	LFCALR15	= 0x9E ; MEMORY MAPPED
.equ	LFCALR14	= 0x9D ; MEMORY MAPPED
.equ	LFCALR13	= 0x9C ; MEMORY MAPPED
.equ	LFCALR12	= 0x9B ; MEMORY MAPPED
.equ	LFCALR11	= 0x9A ; MEMORY MAPPED
.equ	LFCALR10	= 0x99 ; MEMORY MAPPED
.equ	LFCALR9	= 0x98 ; MEMORY MAPPED
.equ	LFCALR8	= 0x97 ; MEMORY MAPPED
.equ	LFCALR7	= 0x96 ; MEMORY MAPPED
.equ	LFCALR6	= 0x95 ; MEMORY MAPPED
.equ	LFCALR5	= 0x94 ; MEMORY MAPPED
.equ	LFCALR4	= 0x93 ; MEMORY MAPPED
.equ	LFCALR3	= 0x92 ; MEMORY MAPPED
.equ	LFCALR2	= 0x91 ; MEMORY MAPPED
.equ	LFCALR1	= 0x90 ; MEMORY MAPPED
.equ	T5IMR	= 0x8F ; MEMORY MAPPED
.equ	T5CNTH	= 0x8E ; MEMORY MAPPED
.equ	T5CNTL	= 0x8D ; MEMORY MAPPED
.equ	T5CCR	= 0x8C ; MEMORY MAPPED
.equ	T5OCRH	= 0x8B ; MEMORY MAPPED
.equ	T5OCRL	= 0x8A ; MEMORY MAPPED
.equ	T5TEMP	= 0x89 ; MEMORY MAPPED
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
.equ	BBTE2	= 0x6A ; MEMORY MAPPED
.equ	FFREQ2H	= 0x69 ; MEMORY MAPPED
.equ	FFREQ2M	= 0x68 ; MEMORY MAPPED
.equ	FFREQ2L	= 0x67 ; MEMORY MAPPED
.equ	FFREQ1H	= 0x66 ; MEMORY MAPPED
.equ	FFREQ1M	= 0x65 ; MEMORY MAPPED
.equ	FFREQ1L	= 0x64 ; MEMORY MAPPED
.equ	GACDIVH	= 0x63 ; MEMORY MAPPED
.equ	GACDIVL	= 0x62 ; MEMORY MAPPED
.equ	FSFCR	= 0x61 ; MEMORY MAPPED
.equ	FSEN	= 0x60 ; MEMORY MAPPED
.equ	SREG	= 0x3F ; 
.equ	SPH	= 0x3E ; 
.equ	SPL	= 0x3D ; 
.equ	LFCR3	= 0x3B ; 
.equ	LFCR2	= 0x3A ; 
.equ	TPSR	= 0x39 ; 
.equ	SMCR	= 0x38 ; 
.equ	SPMCSR	= 0x37 ; 
.equ	T0IFR	= 0x32 ; 
.equ	DWDR	= 0x31 ; 
.equ	LFCR1	= 0x30 ; 
.equ	LFCR0	= 0x2F ; 
.equ	SPDR	= 0x2E ; 
.equ	SPSR	= 0x2D ; 
.equ	SPCR	= 0x2C ; 
.equ	MCUSR	= 0x2B ; 
.equ	VMSCR	= 0x2A ; 
.equ	LDFCKSW	= 0x29 ; 
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
.equ	AESSR	= 0x1E ; 
.equ	AESCR	= 0x1D ; 
.equ	LFFR	= 0x1C ; 
.equ	PHFR	= 0x1B ; 
.equ	PRR0	= 0x1A ; 
.equ	LDFD	= 0x19 ; 
.equ	LDFFL	= 0x18 ; 
.equ	PHTCR	= 0x17 ; 
.equ	EECR2	= 0x16 ; 
.equ	LTCMR	= 0x15 ; 
.equ	T4CR	= 0x14 ; 
.equ	T3CR	= 0x13 ; 
.equ	T2CR	= 0x12 ; 
.equ	T1CR	= 0x11 ; 
.equ	FSCR	= 0x0F ; 
.equ	MCUCR	= 0x0E ; 
.equ	TPFR	= 0x0D ; 
.equ	TPCR2	= 0x0C ; 
.equ	PORTD	= 0x0B ; 
.equ	DDRD	= 0x0A ; 
.equ	PIND	= 0x09 ; 
.equ	PORTC	= 0x08 ; 
.equ	DDRC	= 0x07 ; 
.equ	PINC	= 0x06 ; 
.equ	PORTB	= 0x05 ; 
.equ	DDRB	= 0x04 ; 
.equ	PINB	= 0x03 ; 
.equ	PRR2	= 0x02 ; 
.equ	PRR1	= 0x01 ; 
.equ	GPIOR0	= 0x00 ; 


; ***** BIT DEFINITIONS **************************************************

; ***** AES *****************
; AESCR - AES Control Register
.equ	AESWK	= 0 ; AES Write Key
.equ	AESWD	= 1 ; AES Write Data
.equ	AESIM	= 2 ; AES Interrupt Mask
.equ	AESD	= 3 ; AES Direction
.equ	AESXOR	= 4 ; AES State XOR load
.equ	AESRES	= 5 ; AES Reset
.equ	AESLKM	= 6 ; AES Load Key Memory
.equ	AESE	= 7 ; AES Enable

; AESDPR - AES Data Pointer Register
.equ	AESDPR0	= 0 ; AES Data Pointer Register Bit 0
.equ	AESDPR1	= 1 ; AES Data Pointer Register Bit 1
.equ	AESDPR2	= 2 ; AES Data Pointer Register Bit 2
.equ	AESDPR3	= 3 ; AES Data Pointer Register Bit 3

; AESDR - AES Data Register
.equ	AESDR0	= 0 ; AES Data Register Bit 0
.equ	AESDR1	= 1 ; AES Data Register Bit 1
.equ	AESDR2	= 2 ; AES Data Register Bit 2
.equ	AESDR3	= 3 ; AES Data Register Bit 3
.equ	AESDR4	= 4 ; AES Data Register Bit 4
.equ	AESDR5	= 5 ; AES Data Register Bit 5
.equ	AESDR6	= 6 ; AES Data Register Bit 6
.equ	AESDR7	= 7 ; AES Data Register Bit 7

; AESKR - AES Key Register
.equ	AESKR0	= 0 ; AES Key Register Bit 0
.equ	AESKR1	= 1 ; AES Key Register Bit 1
.equ	AESKR2	= 2 ; AES Key Register Bit 2
.equ	AESKR3	= 3 ; AES Key Register Bit 3
.equ	AESKR4	= 4 ; AES Key Register Bit 4
.equ	AESKR5	= 5 ; AES Key Register Bit 5
.equ	AESKR6	= 6 ; AES Key Register Bit 6
.equ	AESKR7	= 7 ; AES Key Register Bit 7

; AESSR - AES Status Register
.equ	AESRF	= 0 ; AES Ready Flag
.equ	AESERF	= 7 ; AES Error Flag


; ***** CLK *****************
; CLKOCR - Clock output control Register
.equ	CLKOS0	= 0 ; Clock output source
.equ	CLKOS1	= 1 ; Clock output source
.equ	CLKOEN	= 2 ; Clock output driver enable

; CLKOD - Clock output divider settings Register
.equ	CLKOD0	= 0 ; Clock output divider settings Register Bit 0
.equ	CLKOD1	= 1 ; Clock output divider settings Register Bit 1
.equ	CLKOD2	= 2 ; Clock output divider settings Register Bit 2
.equ	CLKOD3	= 3 ; Clock output divider settings Register Bit 3
.equ	CLKOD4	= 4 ; Clock output divider settings Register Bit 4
.equ	CLKOD5	= 5 ; Clock output divider settings Register Bit 5
.equ	CLKOD6	= 6 ; Clock output divider settings Register Bit 6
.equ	CLKOD7	= 7 ; Clock output divider settings Register Bit 7

; CMOCR - Clock management override control register
.equ	FRCAO	= 0 ; FRC Always On
.equ	MRCAO	= 1 ; MRC Always On
.equ	FRCACT	= 2 ; FRC Active

; CMSR - Clock management status Register
.equ	ECF	= 0 ; External clock fail

; FRCCAL - Fast RC oscillator calibration Register
.equ	FRCCAL0	= 0 ; Fast RC oscillator calibration Register Bit 0
.equ	FRCCAL1	= 1 ; Fast RC oscillator calibration Register Bit 1
.equ	FRCCAL2	= 2 ; Fast RC oscillator calibration Register Bit 2
.equ	FRCCAL3	= 3 ; Fast RC oscillator calibration Register Bit 3
.equ	FRCCAL4	= 4 ; Fast RC oscillator calibration Register Bit 4

; MRCCAL - Middle RC oscillator calibration Register
.equ	MRCCAL0	= 1 ; Middle RC oscillator calibration Register Bit 0
.equ	MRCCAL1	= 2 ; Middle RC oscillator calibration Register Bit 1
.equ	MRCCAL2	= 3 ; Middle RC oscillator calibration Register Bit 2
.equ	MRCCAL3	= 4 ; Middle RC oscillator calibration Register Bit 3
.equ	MRCCAL4	= 5 ; Middle RC oscillator calibration Register Bit 4
.equ	MRCCAL5	= 6 ; Middle RC oscillator calibration Register Bit 5
.equ	MRCCAL6	= 7 ; Middle RC oscillator calibration Register Bit 6

; PRR0 - Power reduction Register 0
.equ	PRSPI	= 0 ; Power Reduction Serial Peripheral Interface
.equ	PRLFRS	= 1 ; Power Reduction LF RSSI
.equ	PRTXDC	= 2 ; Power Reduction Transmit DSP Control
.equ	PRCRC	= 3 ; Power Reduction CRC
.equ	PRVM	= 4 ; Power Reduction Voltage Monitor
.equ	PRCO	= 5 ; Power Reduction Clock Output
.equ	PRCU	= 6 ; Power Reduction Crypto Unit
.equ	PRTWI1	= 7 ; Power Reduction Two Wire Interface 1

; PRR1 - Power reduction Register 1
.equ	PRT1	= 0 ; Power Reduction Timer 1
.equ	PRT2	= 1 ; Power Reduction Timer 2
.equ	PRT3	= 2 ; Power Reduction Timer 3
.equ	PRT4	= 3 ; Power Reduction Timer 4
.equ	PRT5	= 4 ; Power Reduction Timer 5
.equ	PRLFR	= 5 ; Power Reduction LF Receiver
.equ	PRLFTP	= 6 ; Power Reduction LF Transponder
.equ	PRLFPH	= 7 ; Power Reduction LF Protocol Handler

; PRR2 - Power reduction register 2
.equ	PRSPI2	= 0 ; Power Reduction SPI2
.equ	PRTWI2	= 1 ; Power Reduction TWI2
.equ	PRSF	= 2 ; Power Reduction Support FIFO
.equ	PRDF	= 3 ; Power Reduction Data FIFO
.equ	VXTSDI	= 4 ; VX Tri-State Disable
.equ	PRTM	= 6 ; Power Reduction Tx Modulator
.equ	PRSSM	= 7 ; Power Reduction Sequencer State Machine

; XFUSE - 
.equ	XFUSE0	= 0 ;  Bit 0
.equ	XFUSE1	= 1 ;  Bit 1
.equ	XFUSE2	= 2 ;  Bit 2
.equ	XFUSE3	= 3 ;  Bit 3
.equ	XFUSE4	= 4 ;  Bit 4
.equ	XFUSE5	= 5 ;  Bit 5
.equ	XFUSE6	= 6 ;  Bit 6
.equ	XFUSE7	= 7 ;  Bit 7


; ***** CPU *****************
; CLPR - Clock Prescaler Register
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
.equ	CMONEN	= 6 ; Clock monitor enable
.equ	CMCCE	= 7 ; Clock management control change enable

; CMIMR - Clock interrupt mask Register
.equ	ECIE	= 0 ; External clock interrupt enable

; DWDR - Debug Wire Data Register
.equ	DWDR0	= 0 ; Debug Wire Data Register Bit 0
.equ	DWDR1	= 1 ; Debug Wire Data Register Bit 1
.equ	DWDR2	= 2 ; Debug Wire Data Register Bit 2
.equ	DWDR3	= 3 ; Debug Wire Data Register Bit 3
.equ	DWDR4	= 4 ; Debug Wire Data Register Bit 4
.equ	DWDR5	= 5 ; Debug Wire Data Register Bit 5
.equ	DWDR6	= 6 ; Debug Wire Data Register Bit 6
.equ	DWDR7	= 7 ; Debug Wire Data Register Bit 7

; MCUCR - MCU control Register
.equ	IVL0	= 0 ; Interrupt Vector Location
.equ	IVL1	= 1 ; Interrupt Vector Location
.equ	SPIIO	= 2 ; SPI Interrupt Only
.equ	ENPS	= 3 ; Enable Port Settings
.equ	PUD	= 4 ; Pull-up Resistors Disable
.equ	TRCCE	= 5 ; Trace Change Enable
.equ	TRCEN	= 6 ; Trace Enable
.equ	IVSEL	= 7 ; Interrupt Vector Select

; MCUSR - MCU Status Register
.equ	PORF	= 0 ; Power-On Reset Flag
.equ	EXTRF	= 1 ; External Reset Flag
.equ	WDRF	= 3 ; Watchdog Reset Flag
.equ	DWRF	= 4 ; DebugWire Reset Flag
.equ	TPRF	= 5 ; Transponder Reset Flag

; SMCR - Sleep mode control Register
.equ	SE	= 0 ; Sleep Enable
.equ	SM0	= 1 ; Sleep Mode Select
.equ	SM1	= 2 ; Sleep Mode Select
.equ	SM2	= 3 ; Sleep Mode Select

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
.equ	FLSEL0	= 3 ; Fuse Lockbit select
.equ	FLSEL1	= 4 ; Fuse Lockbit select
.equ	FLSEL2	= 5 ; Fuse Lockbit select
.equ	RWWSB	= 6 ; Read-While-Write Section Busy
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


; ***** DEBOUNCE *****************
; DBCR - DeBounce Control Register
.equ	DBMD	= 0 ; Debounce Mode
.equ	DBCS	= 1 ; Debounce Clock Select
.equ	DBTMS	= 2 ; Debounce Timer Mask Select
.equ	DBHA	= 3 ; Debounce Handshake Active

; DBENB - DeBounce Enable Port B
.equ	DBENB0	= 0 ; DeBounce Enable Port B Bit 0
.equ	DBENB1	= 1 ; DeBounce Enable Port B Bit 1
.equ	DBENB2	= 2 ; DeBounce Enable Port B Bit 2
.equ	DBENB3	= 3 ; DeBounce Enable Port B Bit 3
.equ	DBENB4	= 4 ; DeBounce Enable Port B Bit 4
.equ	DBENB5	= 5 ; DeBounce Enable Port B Bit 5
.equ	DBENB6	= 6 ; DeBounce Enable Port B Bit 6
.equ	DBENB7	= 7 ; DeBounce Enable Port B Bit 7

; DBENC - DeBounce Enable Port C
.equ	DBENC0	= 0 ; DeBounce Enable Port C Bit 0
.equ	DBENC1	= 1 ; DeBounce Enable Port C Bit 1
.equ	DBENC2	= 2 ; DeBounce Enable Port C Bit 2

; DBEND - DeBounce Enable Port D
.equ	DBEND0	= 0 ; DeBounce Enable Port D Bit 0
.equ	DBEND1	= 1 ; DeBounce Enable Port D Bit 1
.equ	DBEND2	= 2 ; DeBounce Enable Port D Bit 2
.equ	DBEND3	= 3 ; DeBounce Enable Port D Bit 3
.equ	DBEND4	= 4 ; DeBounce Enable Port D Bit 4
.equ	DBEND5	= 5 ; DeBounce Enable Port D Bit 5
.equ	DBEND6	= 6 ; DeBounce Enable Port D Bit 6
.equ	DBEND7	= 7 ; DeBounce Enable Port D Bit 7

; DBTC - Debounce Timer Compare Register
.equ	DBTC0	= 0 ; Debounce Timer Compare Register Bit 0
.equ	DBTC1	= 1 ; Debounce Timer Compare Register Bit 1
.equ	DBTC2	= 2 ; Debounce Timer Compare Register Bit 2
.equ	DBTC3	= 3 ; Debounce Timer Compare Register Bit 3
.equ	DBTC4	= 4 ; Debounce Timer Compare Register Bit 4
.equ	DBTC5	= 5 ; Debounce Timer Compare Register Bit 5
.equ	DBTC6	= 6 ; Debounce Timer Compare Register Bit 6
.equ	DBTC7	= 7 ; Debounce Timer Compare Register Bit 7


; ***** DEBUG *****************
; DBGSW - Debugging Support Switch
.equ	DBGGS0	= 0 ; Debugging Support Group Select
.equ	DBGGS1	= 1 ; Debugging Support Group Select
.equ	DBGGS2	= 2 ; Debugging Support Group Select
.equ	DBGGS3	= 3 ; Debugging Support Group Select
.equ	CPBFOS0	= 4 ; CPU Busy Flag Output Select
.equ	CPBFOS1	= 5 ; CPU Busy Flag Output Select
.equ	CPBF	= 6 ; CPU Busy Flag
.equ	ATEST	= 7 ; Analog Test Pins Enable

; DBONDR - Downbond Test Register
.equ	BBESD	= 0 ; Bond BBESD
.equ	AGND_BB	= 1 ; Bond AGND BB
.equ	ISO_GND	= 2 ; Bond ISO SUBS3 GND
.equ	AGND_LF	= 3 ; Bond AGND LF
.equ	BTEST4	= 4 ; Bond Test 4
.equ	BTEST5	= 5 ; Bond Test 5
.equ	BTEST6	= 6 ; Bond Test 6

; TRCDR - Trace Data Register
.equ	TRCDR0	= 0 ; Trace Data Register Bit 0
.equ	TRCDR1	= 1 ; Trace Data Register Bit 1
.equ	TRCDR2	= 2 ; Trace Data Register Bit 2
.equ	TRCDR3	= 3 ; Trace Data Register Bit 3
.equ	TRCDR4	= 4 ; Trace Data Register Bit 4
.equ	TRCDR5	= 5 ; Trace Data Register Bit 5
.equ	TRCDR6	= 6 ; Trace Data Register Bit 6
.equ	TRCDR7	= 7 ; Trace Data Register Bit 7

; TRCID - Trace ID Register
.equ	TRCIDH0	= 0 ; Trace ID Register High Bit 8
.equ	TRCIDH1	= 1 ; Trace ID Register High Bit 9
.equ	TRCIDH2	= 2 ; Trace ID Register High Bit 10
.equ	TRCIDH3	= 3 ; Trace ID Register High Bit 11
.equ	TRCIDH4	= 4 ; Trace ID Register High Bit 12
.equ	TRCIDH5	= 5 ; Trace ID Register High Bit 13
.equ	TRCIDH6	= 6 ; Trace ID Register High Bit 14
.equ	TRCIDH7	= 7 ; Trace ID Register High Bit 15

.equ	TRCIDL0	= 0 ; Trace ID Register Low Bit 0
.equ	TRCIDL1	= 1 ; Trace ID Register Low Bit 1
.equ	TRCIDL2	= 2 ; Trace ID Register Low Bit 2
.equ	TRCIDL3	= 3 ; Trace ID Register Low Bit 3
.equ	TRCIDL4	= 4 ; Trace ID Register Low Bit 4
.equ	TRCIDL5	= 5 ; Trace ID Register Low Bit 5
.equ	TRCIDL6	= 6 ; Trace ID Register Low Bit 6
.equ	TRCIDL7	= 7 ; Trace ID Register Low Bit 7


; ***** DFIFO *****************
; DFC - Data FIFO Configuration Register
.equ	DFFLC0	= 0 ; Data FIFO Fill-Level Configuration
.equ	DFFLC1	= 1 ; Data FIFO Fill-Level Configuration
.equ	DFFLC2	= 2 ; Data FIFO Fill-Level Configuration
.equ	DFFLC3	= 3 ; Data FIFO Fill-Level Configuration
.equ	DFFLC4	= 4 ; Data FIFO Fill-Level Configuration
.equ	DFFLC5	= 5 ; Data FIFO Fill-Level Configuration
.equ	DFDRA	= 7 ; Data FIFO Direct Read Access Operational Mode

; DFD - Data FIFO Data Register
.equ	DFD0	= 0 ; Data FIFO Data Register Bit 0
.equ	DFD1	= 1 ; Data FIFO Data Register Bit 1
.equ	DFD2	= 2 ; Data FIFO Data Register Bit 2
.equ	DFD3	= 3 ; Data FIFO Data Register Bit 3
.equ	DFD4	= 4 ; Data FIFO Data Register Bit 4
.equ	DFD5	= 5 ; Data FIFO Data Register Bit 5
.equ	DFD6	= 6 ; Data FIFO Data Register Bit 6
.equ	DFD7	= 7 ; Data FIFO Data Register Bit 7

; DFI - Data FIFO Interrupt Mask Register
.equ	DFFLIM	= 0 ; Data FIFO Fill-level Interrupt Mask
.equ	DFERIM	= 1 ; Data FIFO Error Interrupt Mask

; DFL - Data FIFO Fill Level Register
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

; DFS - Data FIFO Status Register
.equ	DFFLRF	= 0 ; Data FIFO Fill-Level Reached Status Flag
.equ	DFUFL	= 1 ; Data FIFO Underflow Flag
.equ	DFOFL	= 2 ; Data FIFO Overflow Flag

; DFWP - Data FIFO Write Pointer
.equ	DFWP0	= 0 ; Data FIFO Write Pointer Bit 0
.equ	DFWP1	= 1 ; Data FIFO Write Pointer Bit 1
.equ	DFWP2	= 2 ; Data FIFO Write Pointer Bit 2
.equ	DFWP3	= 3 ; Data FIFO Write Pointer Bit 3
.equ	DFWP4	= 4 ; Data FIFO Write Pointer Bit 4
.equ	DFWP5	= 5 ; Data FIFO Write Pointer Bit 5


; ***** EEPROM *****************
; EEAR - EEPROM Address Register
.equ	EEARH0	= 0 ; EEPROM Address Register High Bit 8
.equ	EEARH1	= 1 ; EEPROM Address Register High Bit 9
.equ	EEARH2	= 2 ; EEPROM Address Register High Bit 10
.equ	EEARH3	= 3 ; EEPROM Address Register High Bit 11

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
.equ	EEPAGE	= 6 ; EEPROM page access (multiple bytes access mode)
.equ	NVMBSY	= 7 ; Non-volatile memory busy

; EECR2 - EEPROM Control Register 2
.equ	EEBRE	= 0 ; EEPROM Burst Read Enable
.equ	E2CIM	= 1 ; EEPROM Error Code Correction Interrupt Mask
.equ	E2AVF	= 5 ; EEPROM Access Violation Flag
.equ	E2FF	= 6 ; EEPROM error Fault Flag bit
.equ	E2CF	= 7 ; EEPROM Error Correction Code Flag

; EEDR - EEPROM Data Register
.equ	EEDR0	= 0 ; EEPROM Data Register Bit 0
.equ	EEDR1	= 1 ; EEPROM Data Register Bit 1
.equ	EEDR2	= 2 ; EEPROM Data Register Bit 2
.equ	EEDR3	= 3 ; EEPROM Data Register Bit 3
.equ	EEDR4	= 4 ; EEPROM Data Register Bit 4
.equ	EEDR5	= 5 ; EEPROM Data Register Bit 5
.equ	EEDR6	= 6 ; EEPROM Data Register Bit 6
.equ	EEDR7	= 7 ; EEPROM Data Register Bit 7

; EEPR - EEPROM Protection Register
.equ	EEAP0	= 0 ; EEPROM Access Protection
.equ	EEAP1	= 1 ; EEPROM Access Protection
.equ	EEAP2	= 2 ; EEPROM Access Protection
.equ	EEAP3	= 3 ; EEPROM Access Protection

; EEPR1 - EEPROM Protection Register 1
.equ	EEPS4WD	= 0 ; EEPROM Protection Section 4 Write Disable
.equ	EEPS4RD	= 1 ; EEPROM Protection Section 4 Read Disable
.equ	EEPS5WD	= 2 ; EEPROM Protection Section 5 Write Disable
.equ	EEPS5RD	= 3 ; EEPROM Protection Section 5 Read Disable
.equ	EEPS6WD	= 4 ; EEPROM Protection Section 6 Write Disable
.equ	EEPS6RD	= 5 ; EEPROM Protection Section 6 Read Disable
.equ	EEPS7WD	= 6 ; EEPROM Protection Section 7 Write Disable
.equ	EEPS7RD	= 7 ; EEPROM Protection Section 7 Read Disable

; EEPR2 - EEPROM Protection Register 2
.equ	EEPS8WD	= 0 ; EEPROM Protection Section 8 Write Disable
.equ	EEPS8RD	= 1 ; EEPROM Protection Section 8 Read Disable
.equ	EEPS9WD	= 2 ; EEPROM Protection Section 9 Write Disable
.equ	EEPS9RD	= 3 ; EEPROM Protection Section 9 Read Disable
.equ	EEPS10WD	= 4 ; EEPROM Protection Section 10 Write Disableble
.equ	EEPS10RD	= 5 ; EEPROM Protection Section 10 Read Disable
.equ	EEPS11WD	= 6 ; EEPROM Protection Section 11 Write Disable
.equ	EEPS11RD	= 7 ; EEPROM Protection Section 11 Read Disable

; EEPR3 - EEPROM Protection Register 3
.equ	EEPS12WD	= 0 ; EEPROM Protection Section 12 Write Disable
.equ	EEPS12RD	= 1 ; EEPROM Protection Section 12 Read Disable


; ***** FE *****************
; FEALR - Front-End Antenna Level Detector Range
.equ	RNGE0	= 0 ; Range of the ANT_TUNE level detector
.equ	RNGE1	= 1 ; Range of the ANT_TUNE level detector

; FEANT - Front-End Antenna
.equ	LVLC0	= 0 ; antenna signal LeVeL
.equ	LVLC1	= 1 ; antenna signal LeVeL
.equ	LVLC2	= 2 ; antenna signal LeVeL
.equ	LVLC3	= 3 ; antenna signal LeVeL

; FEAT - Front-End Antenna Tuning
.equ	ANTN0	= 0 ; Antenna Tuning
.equ	ANTN1	= 1 ; Antenna Tuning
.equ	ANTN2	= 2 ; Antenna Tuning
.equ	ANTN3	= 3 ; Antenna Tuning

; FEBIA - Reserved
.equ	FEBIA0	= 0 ; Reserved Bit 0
.equ	FEBIA1	= 1 ; Reserved Bit 1
.equ	FEBIA2	= 2 ; Reserved Bit 2
.equ	FEBIA3	= 3 ; Reserved Bit 3
.equ	FEBIA4	= 4 ; Reserved Bit 4
.equ	FEBIA5	= 5 ; Reserved Bit 5
.equ	FEBIA6	= 6 ; Reserved Bit 6
.equ	FEBIA7	= 7 ; Reserved Bit 7

; FEBT - Front-End RC Tuning Register
.equ	CTN20	= 0 ; Capacitor Tuning
.equ	CTN21	= 1 ; Capacitor Tuning
.equ	RTN20	= 2 ; Resistor Tuning
.equ	RTN21	= 3 ; Resistor Tuning

; FECR - Front-End Control Register
.equ	LBNHB	= 0 ; Select Low-Band Not High-Band
.equ	S4N3	= 1 ; Select 433 Not 315MHz Band
.equ	PLCKG	= 4 ; PLL Lock Detect Gate
.equ	ANPS	= 5 ; ASK Not DPSK Switch

; FEEN1 - Front-End Enable Register 1
.equ	PLEN	= 0 ; PLL enable
.equ	PLCAL	= 1 ; PLL calibration mode
.equ	XTOEN	= 2 ; Cristal Oscillator enable
.equ	PLSP1	= 6 ; PLL Speedup 1
.equ	ATEN	= 7 ; Antenna Tuning Enable

; FEEN2 - Front-End Enable Register 2
.equ	PAEN	= 2 ; Power Amplifier enable
.equ	PLPEN	= 4 ; PLL Post En IQ divider
.equ	CPBIA	= 6 ; Cap Array Bias

; FELNA - Reserved
.equ	FELNA0	= 0 ; Reserved Bit 0
.equ	FELNA1	= 1 ; Reserved Bit 1
.equ	FELNA2	= 2 ; Reserved Bit 2
.equ	FELNA3	= 3 ; Reserved Bit 3
.equ	FELNA4	= 4 ; Reserved Bit 4
.equ	FELNA5	= 5 ; Reserved Bit 5
.equ	FELNA6	= 6 ; Reserved Bit 6
.equ	FELNA7	= 7 ; Reserved Bit 7

; FEMS - Front-End Main and Swallow Control Register
.equ	PLLS0	= 0 ; PLL Swallow
.equ	PLLS1	= 1 ; PLL Swallow
.equ	PLLS2	= 2 ; PLL Swallow
.equ	PLLS3	= 3 ; PLL Swallow
.equ	PLLM0	= 4 ; PLL Mode
.equ	PLLM1	= 5 ; PLL Mode
.equ	PLLM2	= 6 ; PLL Mode
.equ	PLLM3	= 7 ; PLL Mode

; FEPAC - Front-End Power Amplifier Control Register
.equ	PACR0	= 0 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR1	= 1 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR2	= 2 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR3	= 3 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR4	= 4 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR5	= 5 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR6	= 6 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand
.equ	PACR7	= 7 ; Front-End Power Amplifier Control Register Pout/dBm LowBand HighBand

; FESR - Front-End Status Register
.equ	XRDY	= 2 ; XTO ready
.equ	PLCK	= 3 ; PLL locked
.equ	ANTS	= 4 ; Antenna saturated

; FETD - Front-End Test Data Register
.equ	FETD0	= 0 ; Front-End Test Data Register Bit 0
.equ	FETD1	= 1 ; Front-End Test Data Register Bit 1
.equ	FETD2	= 2 ; Front-End Test Data Register Bit 2
.equ	FETD3	= 3 ; Front-End Test Data Register Bit 3
.equ	FETD4	= 4 ; Front-End Test Data Register Bit 4
.equ	FETD5	= 5 ; Front-End Test Data Register Bit 5
.equ	FETD6	= 6 ; Front-End Test Data Register Bit 6
.equ	FETD7	= 7 ; Front-End Test Data Register Bit 7

; FETE1 - Front-End Test Enable Register 1
.equ	ADCT	= 0 ; 
.equ	XTOT	= 1 ; 
.equ	LNLT	= 2 ; 
.equ	LNHT	= 3 ; 
.equ	PATE	= 4 ; 
.equ	AMPT	= 5 ; 
.equ	VCOT	= 6 ; 
.equ	ANTN	= 7 ; 

; FETE2 - Front-End Test Enable Register 2
.equ	RCCT	= 0 ; 
.equ	PPFT	= 1 ; 
.equ	LFT	= 2 ; 
.equ	CPT	= 3 ; 
.equ	PFDT	= 4 ; 
.equ	DADCT	= 5 ; 
.equ	PRET	= 6 ; 
.equ	SWALT	= 7 ; 

; FETE3 - Front-End Test Enable Register 3
.equ	BIOUT	= 0 ; 
.equ	RMPTST	= 1 ; 

; FETN4 - Front-End RC Tuning 4bit Register
.equ	CTN40	= 0 ; 4 bit Capacitor Tuning
.equ	CTN41	= 1 ; 4 bit Capacitor Tuning
.equ	CTN42	= 2 ; 4 bit Capacitor Tuning
.equ	CTN43	= 3 ; 4 bit Capacitor Tuning
.equ	RTN40	= 4 ; 4 bit Resistor Tuning
.equ	RTN41	= 5 ; 4 bit Resistor Tuning
.equ	RTN42	= 6 ; 4 bit Resistor Tuning
.equ	RTN43	= 7 ; 4 bit Resistor Tuning

; FEVCO - Front-End VCO and PLL control
.equ	CPCC0	= 0 ; Charge pump current control
.equ	CPCC1	= 1 ; Charge pump current control
.equ	CPCC2	= 2 ; Charge pump current control
.equ	CPCC3	= 3 ; Charge pump current control
.equ	VCOB0	= 4 ; VCO Bias
.equ	VCOB1	= 5 ; VCO Bias
.equ	VCOB2	= 6 ; VCO Bias
.equ	VCOB3	= 7 ; VCO Bias

; FEVCT - Front-End VCO Tuning Register
.equ	FEVCT0	= 0 ; Front-End VCO Tuning Register Bit 0
.equ	FEVCT1	= 1 ; Front-End VCO Tuning Register Bit 1
.equ	FEVCT2	= 2 ; Front-End VCO Tuning Register Bit 2
.equ	FEVCT3	= 3 ; Front-End VCO Tuning Register Bit 3


; ***** GPIOREGS_DVCC *****************
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


; ***** GPIOREGS_LFVCC *****************
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

; GPIOR7 - General Purpose I/O Register 7
.equ	GPIOR70	= 0 ; General Purpose I/O Register 7 Bit 0
.equ	GPIOR71	= 1 ; General Purpose I/O Register 7 Bit 1
.equ	GPIOR72	= 2 ; General Purpose I/O Register 7 Bit 2
.equ	GPIOR73	= 3 ; General Purpose I/O Register 7 Bit 3
.equ	GPIOR74	= 4 ; General Purpose I/O Register 7 Bit 4
.equ	GPIOR75	= 5 ; General Purpose I/O Register 7 Bit 5
.equ	GPIOR76	= 6 ; General Purpose I/O Register 7 Bit 6
.equ	GPIOR77	= 7 ; General Purpose I/O Register 7 Bit 7

; GPIOR8 - General Purpose I/O Register 8
.equ	GPIOR80	= 0 ; General Purpose I/O Register 8 Bit 0
.equ	GPIOR81	= 1 ; General Purpose I/O Register 8 Bit 1
.equ	GPIOR82	= 2 ; General Purpose I/O Register 8 Bit 2
.equ	GPIOR83	= 3 ; General Purpose I/O Register 8 Bit 3
.equ	GPIOR84	= 4 ; General Purpose I/O Register 8 Bit 4
.equ	GPIOR85	= 5 ; General Purpose I/O Register 8 Bit 5
.equ	GPIOR86	= 6 ; General Purpose I/O Register 8 Bit 6
.equ	GPIOR87	= 7 ; General Purpose I/O Register 8 Bit 7


; ***** INT *****************
; EICRA - External Interrupt control Register
.equ	ISC00	= 0 ; Interrupt Sense Control 0
.equ	ISC01	= 1 ; Interrupt Sense Control 0
.equ	ISC10	= 2 ; Interrupt Sense Control 1
.equ	ISC11	= 3 ; Interrupt Sense Control 1

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0 ; External Interrupt Flag 0
.equ	INTF1	= 1 ; External Interrupt Flag 1

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0 ; External Interrupt Request 0 Enable
.equ	INT1	= 1 ; External Interrupt Request 1 Enable

; PCICR - Pin change Interrupt control Register
.equ	PCIE0	= 0 ; Pin Change Interrupt Enable 0
.equ	PCIE1	= 1 ; Pin Change Interrupt Enable 1

; PCIFR - Pin change Interrupt flag Register
.equ	PCIF0	= 0 ; Pin Change Interrupt Flag 0
.equ	PCIF1	= 1 ; Pin Change Interrupt Flag 1

; PCMSK0 - Pin change Mask Register 0
.equ	PCINT0	= 0 ; Pin Change Enable Mask bit 0
.equ	PCINT1	= 1 ; Pin Change Enable Mask bit 1
.equ	PCINT2	= 2 ; Pin Change Enable Mask bit 2
.equ	PCINT3	= 3 ; Pin Change Enable Mask bit 3
.equ	PCINT4	= 4 ; Pin Change Enable Mask bit 4
.equ	PCINT5	= 5 ; Pin Change Enable Mask bit 5
.equ	PCINT6	= 6 ; Pin Change Enable Mask bit 6
.equ	PCINT7	= 7 ; Pin Change Enable Mask bit 7

; PCMSK1 - Pin change Mask Register 1
.equ	PCINT8	= 0 ; Pin Change Enable Mask bit 8
.equ	PCINT9	= 1 ; Pin Change Enable Mask bit 9
.equ	PCINT10	= 2 ; Pin Change Enable Mask bit 10
.equ	PCINT11	= 3 ; Pin Change Enable Mask bit 11
.equ	PCINT12	= 4 ; Pin Change Enable Mask bit 12
.equ	PCINT13	= 5 ; Pin Change Enable Mask bit 13
.equ	PCINT14	= 6 ; Pin Change Enable Mask bit 14
.equ	PCINT15	= 7 ; Pin Change Enable Mask bit 15


; ***** LED *****************
; PDSCR - Pad Driver Strength Control Register
.equ	PDSC0	= 0 ; Pad Driver Strength Control
.equ	PDSC1	= 1 ; Pad Driver Strength Control
.equ	PDSC2	= 2 ; Pad Driver Strength Control
.equ	PDSC3	= 3 ; Pad Driver Strength Control
.equ	PDSC4	= 4 ; Pad Driver Strength Control
.equ	STBTEST	= 5 ; Standby Test Enable
.equ	RSSISEL	= 6 ; Testmode Enable for RSSI Measurement
.equ	ATBSEL	= 7 ; Analog Testbus Select


; ***** LF_FIFO *****************
; LDFC - LF Data FIFO Configuration Register
.equ	LDFFLC0	= 0 ; LF Data FIFO Fill-Level Configuration
.equ	LDFFLC1	= 1 ; LF Data FIFO Fill-Level Configuration
.equ	LDFFLC2	= 2 ; LF Data FIFO Fill-Level Configuration
.equ	LDFFLC3	= 3 ; LF Data FIFO Fill-Level Configuration
.equ	LDFFLC4	= 4 ; LF Data FIFO Fill-Level Configuration
.equ	LDFFLC5	= 5 ; LF Data FIFO Fill-Level Configuration
.equ	LDFMSB	= 6 ; LF Data FIFO MSB alignment bit

; LDFCKSW - LF Data FIFO Clock Switch Register
.equ	LDFSCSW	= 0 ; LF Data FIFO Synchronous Clock Switch
.equ	LDFSCKS	= 1 ; LF Data FIFO Synchronous Clock Status

; LDFD - LF Data FIFO Data Register
.equ	LDFD0	= 0 ; LF Data FIFO Data Register Bit 0
.equ	LDFD1	= 1 ; LF Data FIFO Data Register Bit 1
.equ	LDFD2	= 2 ; LF Data FIFO Data Register Bit 2
.equ	LDFD3	= 3 ; LF Data FIFO Data Register Bit 3
.equ	LDFD4	= 4 ; LF Data FIFO Data Register Bit 4
.equ	LDFD5	= 5 ; LF Data FIFO Data Register Bit 5
.equ	LDFD6	= 6 ; LF Data FIFO Data Register Bit 6
.equ	LDFD7	= 7 ; LF Data FIFO Data Register Bit 7

; LDFFL - LF Data FIFO Fill Level Register
.equ	LDFFL0	= 0 ; LF Data Fifo Fill Level
.equ	LDFFL1	= 1 ; LF Data Fifo Fill Level
.equ	LDFFL2	= 2 ; LF Data Fifo Fill Level
.equ	LDFFL3	= 3 ; LF Data Fifo Fill Level
.equ	LDFFL4	= 4 ; LF Data Fifo Fill Level
.equ	LDFFL5	= 5 ; LF Data Fifo Fill Level
.equ	LDFCLR	= 7 ; LF Data FIFO Clear

; LDFIM - LF Data FIFO Interrupt Mask Register
.equ	LDFFLIM	= 0 ; LF Data FIFO Fill-level Interrupt Mask
.equ	LDFEIM	= 1 ; LF Data FIFO Error Interrupt Mask

; LDFRP - LF Data FIFO Read Pointer
.equ	LDFRP0	= 0 ; LF Data FIFO Read Pointer
.equ	LDFRP1	= 1 ; LF Data FIFO Read Pointer
.equ	LDFRP2	= 2 ; LF Data FIFO Read Pointer
.equ	LDFRP3	= 3 ; LF Data FIFO Read Pointer
.equ	LDFRP4	= 4 ; LF Data FIFO Read Pointer
.equ	LDFRP5	= 5 ; LF Data FIFO Read Pointer

; LDFS - LF Data FIFO Status Register
.equ	LDFFLR	= 0 ; LF Data FIFO Fill-Level Reached flag
.equ	LDFUF	= 1 ; LF Data FIFO UnderFlow flag
.equ	LDFOF	= 2 ; LF Data FIFO OverFlow flag

; LDFWP - LF Data FIFO Write Pointer
.equ	LDFWP0	= 0 ; LF Data FIFO Write Pointer bit 5
.equ	LDFWP1	= 1 ; LF Data FIFO Write Pointer bit 5
.equ	LDFWP2	= 2 ; LF Data FIFO Write Pointer bit 5
.equ	LDFWP3	= 3 ; LF Data FIFO Write Pointer bit 5
.equ	LDFWP4	= 4 ; LF Data FIFO Write Pointer bit 5
.equ	LDFWP5	= 5 ; LF Data FIFO Write Pointer bit 5


; ***** LF_PROTOCOL_HANDLER *****************
; PHBCRR - Protocol Handler Bit Counter Read Register
.equ	PHBCRR0	= 0 ; Protocol Handler Bit Counter Read Register Bit 0
.equ	PHBCRR1	= 1 ; Protocol Handler Bit Counter Read Register Bit 1
.equ	PHBCRR2	= 2 ; Protocol Handler Bit Counter Read Register Bit 2
.equ	PHBCRR3	= 3 ; Protocol Handler Bit Counter Read Register Bit 3
.equ	PHBCRR4	= 4 ; Protocol Handler Bit Counter Read Register Bit 4
.equ	PHBCRR5	= 5 ; Protocol Handler Bit Counter Read Register Bit 5
.equ	PHBCRR6	= 6 ; Protocol Handler Bit Counter Read Register Bit 6
.equ	PHBCRR7	= 7 ; Protocol Handler Bit Counter Read Register Bit 7

; PHCRCR - Protocol Handler CRC Control Register
.equ	CRCFR	= 2 ; CRC ID Frame
.equ	CRCSE0	= 4 ; CRC size bit 0
.equ	CRCSE1	= 5 ; CRC size bit 1
.equ	CRCEN	= 7 ; CRC Enable

; PHCRP - PH CRC Polynomial Register
.equ	PHCRPH0	= 0 ; PH CRC Polynomial Register High Bit 8
.equ	PHCRPH1	= 1 ; PH CRC Polynomial Register High Bit 9
.equ	PHCRPH2	= 2 ; PH CRC Polynomial Register High Bit 10
.equ	PHCRPH3	= 3 ; PH CRC Polynomial Register High Bit 11
.equ	PHCRPH4	= 4 ; PH CRC Polynomial Register High Bit 12
.equ	PHCRPH5	= 5 ; PH CRC Polynomial Register High Bit 13
.equ	PHCRPH6	= 6 ; PH CRC Polynomial Register High Bit 14
.equ	PHCRPH7	= 7 ; PH CRC Polynomial Register High Bit 15

.equ	PHCRPL0	= 0 ; PH CRC Polynomial Register Low Bit 0
.equ	PHCRPL1	= 1 ; PH CRC Polynomial Register Low Bit 1
.equ	PHCRPL2	= 2 ; PH CRC Polynomial Register Low Bit 2
.equ	PHCRPL3	= 3 ; PH CRC Polynomial Register Low Bit 3
.equ	PHCRPL4	= 4 ; PH CRC Polynomial Register Low Bit 4
.equ	PHCRPL5	= 5 ; PH CRC Polynomial Register Low Bit 5
.equ	PHCRPL6	= 6 ; PH CRC Polynomial Register Low Bit 6
.equ	PHCRPL7	= 7 ; PH CRC Polynomial Register Low Bit 7

; PHCSR - PH CRC Checksum Register
.equ	PHCSRH0	= 0 ; PH CRC Checksum Register High Bit 8
.equ	PHCSRH1	= 1 ; PH CRC Checksum Register High Bit 9
.equ	PHCSRH2	= 2 ; PH CRC Checksum Register High Bit 10
.equ	PHCSRH3	= 3 ; PH CRC Checksum Register High Bit 11
.equ	PHCSRH4	= 4 ; PH CRC Checksum Register High Bit 12
.equ	PHCSRH5	= 5 ; PH CRC Checksum Register High Bit 13
.equ	PHCSRH6	= 6 ; PH CRC Checksum Register High Bit 14
.equ	PHCSRH7	= 7 ; PH CRC Checksum Register High Bit 15

.equ	PHCSRL0	= 0 ; PH CRC Checksum Register Low Bit 0
.equ	PHCSRL1	= 1 ; PH CRC Checksum Register Low Bit 1
.equ	PHCSRL2	= 2 ; PH CRC Checksum Register Low Bit 2
.equ	PHCSRL3	= 3 ; PH CRC Checksum Register Low Bit 3
.equ	PHCSRL4	= 4 ; PH CRC Checksum Register Low Bit 4
.equ	PHCSRL5	= 5 ; PH CRC Checksum Register Low Bit 5
.equ	PHCSRL6	= 6 ; PH CRC Checksum Register Low Bit 6
.equ	PHCSRL7	= 7 ; PH CRC Checksum Register Low Bit 7

; PHCST - PH CRC Start Value Register
.equ	PHCSTH0	= 0 ; PH CRC Start Value Register High Bit 8
.equ	PHCSTH1	= 1 ; PH CRC Start Value Register High Bit 9
.equ	PHCSTH2	= 2 ; PH CRC Start Value Register High Bit 10
.equ	PHCSTH3	= 3 ; PH CRC Start Value Register High Bit 11
.equ	PHCSTH4	= 4 ; PH CRC Start Value Register High Bit 12
.equ	PHCSTH5	= 5 ; PH CRC Start Value Register High Bit 13
.equ	PHCSTH6	= 6 ; PH CRC Start Value Register High Bit 14
.equ	PHCSTH7	= 7 ; PH CRC Start Value Register High Bit 15

.equ	PHCSTL0	= 0 ; PH CRC Start Value Register Low Bit 0
.equ	PHCSTL1	= 1 ; PH CRC Start Value Register Low Bit 1
.equ	PHCSTL2	= 2 ; PH CRC Start Value Register Low Bit 2
.equ	PHCSTL3	= 3 ; PH CRC Start Value Register Low Bit 3
.equ	PHCSTL4	= 4 ; PH CRC Start Value Register Low Bit 4
.equ	PHCSTL5	= 5 ; PH CRC Start Value Register Low Bit 5
.equ	PHCSTL6	= 6 ; PH CRC Start Value Register Low Bit 6
.equ	PHCSTL7	= 7 ; PH CRC Start Value Register Low Bit 7

; PHDFR - Protocol Handler Data Frame end Register
.equ	PHDFR0	= 0 ; Protocol Handler Data Frame end Register Bit 0
.equ	PHDFR1	= 1 ; Protocol Handler Data Frame end Register Bit 1
.equ	PHDFR2	= 2 ; Protocol Handler Data Frame end Register Bit 2
.equ	PHDFR3	= 3 ; Protocol Handler Data Frame end Register Bit 3
.equ	PHDFR4	= 4 ; Protocol Handler Data Frame end Register Bit 4
.equ	PHDFR5	= 5 ; Protocol Handler Data Frame end Register Bit 5
.equ	PHDFR6	= 6 ; Protocol Handler Data Frame end Register Bit 6
.equ	PHDFR7	= 7 ; Protocol Handler Data Frame end Register Bit 7

; PHFR - Protocol Handler Flag Register
.equ	CRCEF	= 0 ; PH CRC Error Status Flag
.equ	PHTBLF	= 1 ; Protocol Handler Telegram Bit Length Flag
.equ	PHDFF	= 2 ; Protocol Handler Date Frame Flag
.equ	PHIDFF	= 3 ; Protocol Handler ID Frame Flag
.equ	PHID0F	= 4 ; Protocol Handler IDentifier 0 Flag
.equ	PHID1F	= 5 ; Protocol Handler IDentifier 1 Flag

; PHID0 - PH ID0 Register
.equ	PHID00	= 0 ; PH ID0 Register Bit 0
.equ	PHID01	= 1 ; PH ID0 Register Bit 1
.equ	PHID02	= 2 ; PH ID0 Register Bit 2
.equ	PHID03	= 3 ; PH ID0 Register Bit 3
.equ	PHID04	= 4 ; PH ID0 Register Bit 4
.equ	PHID05	= 5 ; PH ID0 Register Bit 5
.equ	PHID06	= 6 ; PH ID0 Register Bit 6
.equ	PHID07	= 7 ; PH ID0 Register Bit 7
.equ	PHID08	= 8 ; PH ID0 Register Bit 8
.equ	PHID09	= 9 ; PH ID0 Register Bit 9
.equ	PHID010	= 10 ; PH ID0 Register Bit 10
.equ	PHID011	= 11 ; PH ID0 Register Bit 11
.equ	PHID012	= 12 ; PH ID0 Register Bit 12
.equ	PHID013	= 13 ; PH ID0 Register Bit 13
.equ	PHID014	= 14 ; PH ID0 Register Bit 14
.equ	PHID015	= 15 ; PH ID0 Register Bit 15
.equ	PHID016	= 16 ; PH ID0 Register Bit 16
.equ	PHID017	= 17 ; PH ID0 Register Bit 17
.equ	PHID018	= 18 ; PH ID0 Register Bit 18
.equ	PHID019	= 19 ; PH ID0 Register Bit 19
.equ	PHID020	= 20 ; PH ID0 Register Bit 20
.equ	PHID021	= 21 ; PH ID0 Register Bit 21
.equ	PHID022	= 22 ; PH ID0 Register Bit 22
.equ	PHID023	= 23 ; PH ID0 Register Bit 23
.equ	PHID024	= 24 ; PH ID0 Register Bit 24
.equ	PHID025	= 25 ; PH ID0 Register Bit 25
.equ	PHID026	= 26 ; PH ID0 Register Bit 26
.equ	PHID027	= 27 ; PH ID0 Register Bit 27
.equ	PHID028	= 28 ; PH ID0 Register Bit 28
.equ	PHID029	= 29 ; PH ID0 Register Bit 29
.equ	PHID030	= 30 ; PH ID0 Register Bit 30
.equ	PHID031	= 31 ; PH ID0 Register Bit 31

; PHID0L - PH Identifier 0 Length Register
.equ	PHID0L0	= 0 ; PH Identifier 0 Length Register Bit 0
.equ	PHID0L1	= 1 ; PH Identifier 0 Length Register Bit 1
.equ	PHID0L2	= 2 ; PH Identifier 0 Length Register Bit 2
.equ	PHID0L3	= 3 ; PH Identifier 0 Length Register Bit 3
.equ	PHID0L4	= 4 ; PH Identifier 0 Length Register Bit 4
.equ	PHID0L5	= 5 ; PH Identifier 0 Length Register Bit 5

; PHID1 - PH ID1 Register
.equ	PHID10	= 0 ; PH ID1 Register Bit 0
.equ	PHID11	= 1 ; PH ID1 Register Bit 1
.equ	PHID12	= 2 ; PH ID1 Register Bit 2
.equ	PHID13	= 3 ; PH ID1 Register Bit 3
.equ	PHID14	= 4 ; PH ID1 Register Bit 4
.equ	PHID15	= 5 ; PH ID1 Register Bit 5
.equ	PHID16	= 6 ; PH ID1 Register Bit 6
.equ	PHID17	= 7 ; PH ID1 Register Bit 7
.equ	PHID18	= 8 ; PH ID1 Register Bit 8
.equ	PHID19	= 9 ; PH ID1 Register Bit 9
.equ	PHID110	= 10 ; PH ID1 Register Bit 10
.equ	PHID111	= 11 ; PH ID1 Register Bit 11
.equ	PHID112	= 12 ; PH ID1 Register Bit 12
.equ	PHID113	= 13 ; PH ID1 Register Bit 13
.equ	PHID114	= 14 ; PH ID1 Register Bit 14
.equ	PHID115	= 15 ; PH ID1 Register Bit 15
.equ	PHID116	= 16 ; PH ID1 Register Bit 16
.equ	PHID117	= 17 ; PH ID1 Register Bit 17
.equ	PHID118	= 18 ; PH ID1 Register Bit 18
.equ	PHID119	= 19 ; PH ID1 Register Bit 19
.equ	PHID120	= 20 ; PH ID1 Register Bit 20
.equ	PHID121	= 21 ; PH ID1 Register Bit 21
.equ	PHID122	= 22 ; PH ID1 Register Bit 22
.equ	PHID123	= 23 ; PH ID1 Register Bit 23
.equ	PHID124	= 24 ; PH ID1 Register Bit 24
.equ	PHID125	= 25 ; PH ID1 Register Bit 25
.equ	PHID126	= 26 ; PH ID1 Register Bit 26
.equ	PHID127	= 27 ; PH ID1 Register Bit 27
.equ	PHID128	= 28 ; PH ID1 Register Bit 28
.equ	PHID129	= 29 ; PH ID1 Register Bit 29
.equ	PHID130	= 30 ; PH ID1 Register Bit 30
.equ	PHID131	= 31 ; PH ID1 Register Bit 31

; PHID1L - PH Identifier 1 Length Register
.equ	PHID1L0	= 0 ; PH Identifier 1 Length Register Bit 0
.equ	PHID1L1	= 1 ; PH Identifier 1 Length Register Bit 1
.equ	PHID1L2	= 2 ; PH Identifier 1 Length Register Bit 2
.equ	PHID1L3	= 3 ; PH Identifier 1 Length Register Bit 3
.equ	PHID1L4	= 4 ; PH Identifier 1 Length Register Bit 4
.equ	PHID1L5	= 5 ; PH Identifier 1 Length Register Bit 5

; PHIDFR - Protocol Handler ID Frame Register
.equ	PHIDFR0	= 0 ; Protocol Handler ID Frame Register Bit 0
.equ	PHIDFR1	= 1 ; Protocol Handler ID Frame Register Bit 1
.equ	PHIDFR2	= 2 ; Protocol Handler ID Frame Register Bit 2
.equ	PHIDFR3	= 3 ; Protocol Handler ID Frame Register Bit 3
.equ	PHIDFR4	= 4 ; Protocol Handler ID Frame Register Bit 4
.equ	PHIDFR5	= 5 ; Protocol Handler ID Frame Register Bit 5
.equ	PHIDFR6	= 6 ; Protocol Handler ID Frame Register Bit 6
.equ	PHIDFR7	= 7 ; Protocol Handler ID Frame Register Bit 7

; PHIMR - Protocol Handler Interrupt Mask Register
.equ	PHTBLIM	= 1 ; Protocol Handler Telegram Bit Length Interrupt Mask
.equ	PHDFIM	= 2 ; Protocol Handler Date Frame Interrupt Mask
.equ	PHIDFIM	= 3 ; Protocol Handler ID Frame Interrupt Mask
.equ	PHID0IM	= 4 ; Protocol Handler IDentifier 0 Interrupt Mask
.equ	PHID1IM	= 5 ; Protocol Handler IDentifier 1 Interrupt Mask

; PHTBLR - Protocol Handler Telegram Bit Length Register
.equ	PHTBLR0	= 0 ; Protocol Handler Telegram Bit Length Register Bit 0
.equ	PHTBLR1	= 1 ; Protocol Handler Telegram Bit Length Register Bit 1
.equ	PHTBLR2	= 2 ; Protocol Handler Telegram Bit Length Register Bit 2
.equ	PHTBLR3	= 3 ; Protocol Handler Telegram Bit Length Register Bit 3
.equ	PHTBLR4	= 4 ; Protocol Handler Telegram Bit Length Register Bit 4
.equ	PHTBLR5	= 5 ; Protocol Handler Telegram Bit Length Register Bit 5
.equ	PHTBLR6	= 6 ; Protocol Handler Telegram Bit Length Register Bit 6
.equ	PHTBLR7	= 7 ; Protocol Handler Telegram Bit Length Register Bit 7

; PHTCR - PH Telegram Configuration Register
.equ	FRFIFO	= 5 ; ID Frame stored in FIFO
.equ	CPM	= 6 ; Continuous Pattern Mode
.equ	CSM	= 7 ; Continue or Single receive Mode


; ***** LF_RECEIVER *****************
; LFCR0 - LF Receiver Control Register 0
.equ	LFCE1	= 0 ; LF Receiver Channel 1 Enable
.equ	LFCE2	= 1 ; LF Receiver Channel 2 Enable
.equ	LFCE3	= 2 ; LF Receiver Channel 3 Enable
.equ	LFBR0	= 3 ; LF Receiver Bit Rate
.equ	LFBR1	= 4 ; LF Receiver Bit Rate
.equ	LFMG	= 5 ; LF Receiver Maximum Gain Select
.equ	LFRRT0	= 6 ; LF Receiver Reset Time
.equ	LFRRT1	= 7 ; LF Receiver Reset Time

; LFCR1 - LF Receiver Control Register 1
.equ	RSST0	= 0 ; RSSI Startup Time
.equ	RSST1	= 1 ; RSSI Startup Time
.equ	LFFM1	= 2 ; LF Function Mode bit 1
.equ	ARMDE	= 3 ; Analog Reset Manchester Detector Enable
.equ	FLLEN	= 4 ; FLL Enable
.equ	ADTHEN	= 5 ; Adapt Threshold Enable
.equ	LFPEEN	= 6 ; LF Port Event Enable
.equ	LFRE	= 7 ; LF Receiver Enable

; LFCR2 - LF Receiver Control Register 2
.equ	LFSEN0	= 0 ; LF Sensitivity Mode
.equ	LFSEN1	= 1 ; LF Sensitivity Mode
.equ	LFDAMP	= 2 ; LF coil Damping level select
.equ	LFVC0	= 5 ; LF Velocity Control
.equ	LFVC1	= 6 ; LF Velocity Control
.equ	LFVC2	= 7 ; LF Velocity Control

; LFCR3 - LF Receiver Control Register 3
.equ	LFRCTEN	= 0 ; LF RC Trim Enable
.equ	LFRCPCEN	= 1 ; LF RC Pump Continuous Enable
.equ	LFRCPM	= 2 ; LF RC Pump mode Enable
.equ	LFTON	= 3 ; LF On Time with Activated Standby Mode
.equ	LFTS0	= 4 ; LF Standby Time
.equ	LFTS1	= 5 ; LF Standby Time
.equ	LFTS2	= 6 ; LF Standby Time
.equ	LFSBEN	= 7 ; LF Standby mode Enable

; LFDSR1 - LF Receiver Decoder Setting Register 1
.equ	LOTHA0	= 0 ; Low Threshold A
.equ	LOTHA1	= 1 ; Low Threshold A
.equ	HITHA0	= 2 ; High Threshold A
.equ	HITHA1	= 3 ; High Threshold A
.equ	CTTHA0	= 4 ; Count Threshold A
.equ	CTTHA1	= 5 ; Count Threshold A

; LFDSR10 - LF Decoder Setting 10 Register
.equ	FCL0	= 0 ; Frequency Control Limit
.equ	FCL1	= 1 ; Frequency Control Limit
.equ	FCL2	= 2 ; Frequency Control Limit
.equ	FCL3	= 3 ; Frequency Control Limit
.equ	FCL4	= 4 ; Frequency Control Limit
.equ	FCL5	= 5 ; Frequency Control Limit
.equ	STBTH0	= 6 ; Stop Bit Correlator Threshold
.equ	STBTH1	= 7 ; Stop Bit Correlator Threshold

; LFDSR11 - Low Frequency Decoder Setting Register 11
.equ	TINITA0	= 0 ; Time Init A
.equ	TINITA1	= 1 ; Time Init A
.equ	TINITA2	= 2 ; Time Init A
.equ	TINITA3	= 3 ; Time Init A
.equ	TINITB0	= 4 ; Time Init B
.equ	TINITB1	= 5 ; Time Init B
.equ	TINITB2	= 6 ; Time Init B
.equ	TINITB3	= 7 ; Time Init B

; LFDSR2 - LF Receiver Decoder Setting Register 2
.equ	LOTHB0	= 0 ; Low Threshold B
.equ	LOTHB1	= 1 ; Low Threshold B
.equ	HITHB0	= 2 ; High Threshold B
.equ	HITHB1	= 3 ; High Threshold B
.equ	CTTHB0	= 4 ; Count Threshold B
.equ	CTTHB1	= 5 ; Count Threshold B

; LFDSR3 - LF Receiver Decoder Setting Register 3
.equ	PBDTH0	= 0 ; Preburst Detection Threshold
.equ	PBDTH1	= 1 ; Preburst Detection Threshold
.equ	QCTH0	= 3 ; Quality Check Threshold
.equ	QCTH1	= 4 ; Quality Check Threshold
.equ	QCTH2	= 5 ; Quality Check Threshold

; LFDSR4 - LF Receiver Decoder Setting Register 4
.equ	SDTHA0	= 0 ; Sync Detection Threshold A
.equ	SDTHA1	= 1 ; Sync Detection Threshold A
.equ	SDTHA2	= 2 ; Sync Detection Threshold A
.equ	SCTHA0	= 3 ; Sync Count Threshold A
.equ	SCTHA1	= 4 ; Sync Count Threshold A
.equ	SCTHA2	= 5 ; Sync Count Threshold A
.equ	SRSTC0	= 6 ; Sync Restart Control
.equ	SRSTC1	= 7 ; Sync Restart Control

; LFDSR5 - LF Decoder Setting 5 Register
.equ	SDTHB0	= 0 ; Sync Detection Threshold B
.equ	SDTHB1	= 1 ; Sync Detection Threshold B
.equ	SDTHB2	= 2 ; Sync Detection Threshold B
.equ	SCTHB0	= 3 ; Sync Count Threshold B
.equ	SCTHB1	= 4 ; Sync Count Threshold B
.equ	SCTHB2	= 5 ; Sync Count Threshold B
.equ	SSUTA	= 6 ; Snyc Start-Up Time A
.equ	SSUTB	= 7 ; Snyc Start-Up Time B

; LFDSR6 - LF Decoder Setting 6 Register
.equ	TODU0	= 0 ; Time Out Decode Unit
.equ	TODU1	= 1 ; Time Out Decode Unit
.equ	TODU2	= 2 ; Time Out Decode Unit
.equ	TODS0	= 3 ; Time Out Timer Delta Sync detect
.equ	TODS1	= 4 ; Time Out Timer Delta Sync detect
.equ	TODS2	= 5 ; Time Out Timer Delta Sync detect

; LFDSR7 - LF Decoder Setting 7 Register
.equ	PBSP0	= 0 ; FLL Preburst Speed
.equ	PBSP1	= 1 ; FLL Preburst Speed
.equ	PBG0	= 2 ; FLL Preburst Gain
.equ	PBG1	= 3 ; FLL Preburst Gain
.equ	MDSP0	= 4 ; FLL Manchester Detector Speed
.equ	MDSP1	= 5 ; FLL Manchester Detector Speed
.equ	MDG0	= 6 ; FLL Manchester Detector Gain
.equ	MDG1	= 7 ; FLL Manchester Detector Gain

; LFDSR8 - LF Decoder Setting 8 Register
.equ	CLD0	= 0 ; Counter Limit Delta
.equ	CLD1	= 1 ; Counter Limit Delta
.equ	CLD2	= 2 ; Counter Limit Delta
.equ	LGFE	= 3 ; Loop Gain Fading Enable
.equ	ASWTH0	= 4 ; Adaptive Switch Threshold
.equ	ASWTH1	= 5 ; Adaptive Switch Threshold
.equ	ASWTH2	= 6 ; Adaptive Switch Threshold

; LFDSR9 - LF Decoder Setting 9 Register
.equ	STW0	= 0 ; Step Width
.equ	STW1	= 1 ; Step Width
.equ	STW2	= 2 ; Step Width
.equ	STW3	= 3 ; Step Width
.equ	STW4	= 4 ; Step Width

; LFFR - LF Receiver Flag Register
.equ	LFSYDF	= 0 ; LF Synchronization Detect Flag
.equ	LFDEF	= 1 ; LF Decoder Error Flag
.equ	LFEOF	= 2 ; LF End of Telegram Flag
.equ	LFTOF	= 3 ; LF telegram Time Out Flag
.equ	LFSD	= 6 ; LF Signal Detect
.equ	LFES	= 7 ; LF Envelope Signal

; LFIMR - LF Receiver Interrupt Mask Register
.equ	LFSYDIM	= 0 ; LF Synchronization Detected Interrupt Mask
.equ	LFDEIM	= 1 ; LF Decoder Error Interrupt Mask
.equ	LFEOIM	= 2 ; LF End Of telegram Interrupt Mask

; LFQC1 - LF Receiver Channel 1 Quality Faktor Register
.equ	LFQS10	= 0 ; LF resistor select channel 1
.equ	LFQS11	= 1 ; LF resistor select channel 1
.equ	LFQS12	= 2 ; LF resistor select channel 1
.equ	LFQS13	= 3 ; LF resistor select channel 1
.equ	LFCS10	= 4 ; LF capacitor select channel 1
.equ	LFCS11	= 5 ; LF capacitor select channel 1
.equ	LFCS12	= 6 ; LF capacitor select channel 1
.equ	LFCS13	= 7 ; LF capacitor select channel 1

; LFQC2 - LF Receiver Channel 2 Quality Faktor Register
.equ	LFQS20	= 0 ; LF resistor select channel 2
.equ	LFQS21	= 1 ; LF resistor select channel 2
.equ	LFQS22	= 2 ; LF resistor select channel 2
.equ	LFQS23	= 3 ; LF resistor select channel 2
.equ	LFCS20	= 4 ; LF capacitor select channel 2
.equ	LFCS21	= 5 ; LF capacitor select channel 2
.equ	LFCS22	= 6 ; LF capacitor select channel 2
.equ	LFCS23	= 7 ; LF capacitor select channel 2

; LFQC3 - LF Receiver Channel 3 Quality Faktor Register
.equ	LFQS30	= 0 ; LF resistor select channel 3
.equ	LFQS31	= 1 ; LF resistor select channel 3
.equ	LFQS32	= 2 ; LF resistor select channel 3
.equ	LFQS33	= 3 ; LF resistor select channel 3
.equ	LFCS30	= 4 ; LF capacitor select channel 3
.equ	LFCS31	= 5 ; LF capacitor select channel 3
.equ	LFCS32	= 6 ; LF capacitor select channel 3
.equ	LFCS33	= 7 ; LF capacitor select channel 3

; LFSRCTL - LF Receiver SRC Tuning LSB
.equ	LFSRCT0	= 0 ; LF Receiver SRC Tuning Tuning value

; LFSRCTM - LF Receiver SRC Tuning MSB
.equ	LFSRCT1	= 0 ; LF Receiver SRC Tuning Tuning value
.equ	LFSRCT2	= 1 ; LF Receiver SRC Tuning Tuning value
.equ	LFSRCT3	= 2 ; LF Receiver SRC Tuning Tuning value
.equ	LFSRCT4	= 3 ; LF Receiver SRC Tuning Tuning value
.equ	LFSRCT5	= 4 ; LF Receiver SRC Tuning Tuning value
.equ	LFSRCT6	= 5 ; LF Receiver SRC Tuning Tuning value
.equ	LFSRCT7	= 6 ; LF Receiver SRC Tuning Tuning value
.equ	LFSRCT8	= 7 ; LF Receiver SRC Tuning Tuning value

; LFSTOP - LF Receiver Stop Bit Register
.equ	LFSTSY0	= 0 ; LF Stop Bits Symbols
.equ	LFSTSY1	= 1 ; LF Stop Bits Symbols
.equ	LFSTSY2	= 2 ; LF Stop Bits Symbols
.equ	LFSTSY3	= 3 ; LF Stop Bits Symbols
.equ	LFSTL0	= 4 ; LF Stop Bits Length
.equ	LFSTL1	= 5 ; LF Stop Bits Length
.equ	LFSTL2	= 6 ; LF Stop Bits Length

; LFSYLE - LF Receiver Synchronization Length Register
.equ	LFSYLE0	= 0 ; 
.equ	LFSYLE1	= 1 ; 
.equ	LFSYLE2	= 2 ; 
.equ	LFSYLE3	= 3 ; 
.equ	LFSYLE4	= 4 ; 
.equ	LFSYLE5	= 5 ; 

; LFSYSY - LF Receiver Synchronization Symbols Register
.equ	LFSYSY0	= 0 ; LF Receiver Synchronization Symbols Register Bit 0
.equ	LFSYSY1	= 1 ; LF Receiver Synchronization Symbols Register Bit 1
.equ	LFSYSY2	= 2 ; LF Receiver Synchronization Symbols Register Bit 2
.equ	LFSYSY3	= 3 ; LF Receiver Synchronization Symbols Register Bit 3
.equ	LFSYSY4	= 4 ; LF Receiver Synchronization Symbols Register Bit 4
.equ	LFSYSY5	= 5 ; LF Receiver Synchronization Symbols Register Bit 5
.equ	LFSYSY6	= 6 ; LF Receiver Synchronization Symbols Register Bit 6
.equ	LFSYSY7	= 7 ; LF Receiver Synchronization Symbols Register Bit 7
.equ	LFSYSY8	= 8 ; LF Receiver Synchronization Symbols Register Bit 8
.equ	LFSYSY9	= 9 ; LF Receiver Synchronization Symbols Register Bit 9
.equ	LFSYSY10	= 10 ; LF Receiver Synchronization Symbols Register Bit 10
.equ	LFSYSY11	= 11 ; LF Receiver Synchronization Symbols Register Bit 11
.equ	LFSYSY12	= 12 ; LF Receiver Synchronization Symbols Register Bit 12
.equ	LFSYSY13	= 13 ; LF Receiver Synchronization Symbols Register Bit 13
.equ	LFSYSY14	= 14 ; LF Receiver Synchronization Symbols Register Bit 14
.equ	LFSYSY15	= 15 ; LF Receiver Synchronization Symbols Register Bit 15
.equ	LFSYSY16	= 16 ; LF Receiver Synchronization Symbols Register Bit 16
.equ	LFSYSY17	= 17 ; LF Receiver Synchronization Symbols Register Bit 17
.equ	LFSYSY18	= 18 ; LF Receiver Synchronization Symbols Register Bit 18
.equ	LFSYSY19	= 19 ; LF Receiver Synchronization Symbols Register Bit 19
.equ	LFSYSY20	= 20 ; LF Receiver Synchronization Symbols Register Bit 20
.equ	LFSYSY21	= 21 ; LF Receiver Synchronization Symbols Register Bit 21
.equ	LFSYSY22	= 22 ; LF Receiver Synchronization Symbols Register Bit 22
.equ	LFSYSY23	= 23 ; LF Receiver Synchronization Symbols Register Bit 23
.equ	LFSYSY24	= 24 ; LF Receiver Synchronization Symbols Register Bit 24
.equ	LFSYSY25	= 25 ; LF Receiver Synchronization Symbols Register Bit 25
.equ	LFSYSY26	= 26 ; LF Receiver Synchronization Symbols Register Bit 26
.equ	LFSYSY27	= 27 ; LF Receiver Synchronization Symbols Register Bit 27
.equ	LFSYSY28	= 28 ; LF Receiver Synchronization Symbols Register Bit 28
.equ	LFSYSY29	= 29 ; LF Receiver Synchronization Symbols Register Bit 29
.equ	LFSYSY30	= 30 ; LF Receiver Synchronization Symbols Register Bit 30
.equ	LFSYSY31	= 31 ; LF Receiver Synchronization Symbols Register Bit 31


; ***** LF_RSSI *****************
; RSCALIB - RSSI Calibration Register
.equ	RSCALIB0	= 0 ; RSSI Calibration Bit 0
.equ	RSCALIB1	= 1 ; RSSI Calibration Bit 1
.equ	RSCALIB2	= 2 ; RSSI Calibration Bit 2
.equ	RSCALIB3	= 3 ; RSSI Calibration Bit 3
.equ	RSCALIB4	= 4 ; RSSI Calibration Bit 4
.equ	RSCALIB5	= 5 ; RSSI Calibration Bit 5
.equ	RSCALIB6	= 6 ; RSSI Calibration Bit 6
.equ	RSCALIB7	= 7 ; RSSI Calibration Bit 7

; RSCR - RSSI Control Register
.equ	RSSDEN	= 0 ; RSSI Sign Detection Enable Bit
.equ	RSOS	= 1 ; RSSI Operation Start Bit
.equ	RSEOR	= 2 ; RSSI End Operation Request Bit
.equ	RSOFM	= 3 ; RSSI Operation Flag Mask Bit
.equ	RSMODE0	= 4 ; RSSI Mode Bit 0
.equ	RSMODE1	= 5 ; RSSI Mode Bit 1
.equ	RSRES	= 7 ; RSSI Reset Bit

; RSDBGR - RSSI Debug Register
.equ	RSSANA	= 0 ; RSSI Set Analog Bit
.equ	RSINFM	= 2 ; RSSI Infinity Measurement Bit
.equ	RSFPD	= 3 ; RSSI Fix Pre-Divider Bit
.equ	RSHOME	= 4 ; RSSI Hold Measurement Bit
.equ	RSDBGS0	= 5 ; RSSI Debug Select Bit 0
.equ	RSDBGS1	= 6 ; RSSI Debug Select Bit 1
.equ	RSDBGEN	= 7 ; RSSI Debug Enable Bit

; RSDLYR - RSSI Delay Register
.equ	RSTRD0	= 0 ; RSSI Tracking Delay Bit 0
.equ	RSTRD1	= 1 ; RSSI Tracking Delay Bit 1
.equ	RSTRD2	= 2 ; RSSI Tracking Delay Bit 2
.equ	RSTRD3	= 3 ; RSSI Tracking Delay Bit 3
.equ	RSTRD4	= 4 ; RSSI Tracking Delay Bit 4
.equ	RSTRD5	= 5 ; RSSI Tracking Delay Bit 5
.equ	RSRD0	= 6 ; RSSI Range Delay Bit 0
.equ	RSRD1	= 7 ; RSSI Range Delay Bit 1

; RSFR - RSSI Flag Register
.equ	RSOOR1	= 0 ; RSSI Out of Range Channel 1 Bit
.equ	RSOOR2	= 1 ; RSSI Out of Range Channel 2 Bit
.equ	RSOOR3	= 2 ; RSSI Out of Range Channel 3 Bit
.equ	RSOFF	= 3 ; RSSI Operation Finish Flag Bit
.equ	RSAOOR1	= 5 ; RSSI Averaging Out of Range Channel 1 Bit
.equ	RSAOOR2	= 6 ; RSSI Averaging Out of Range Channel 2 Bit
.equ	RSAOOR3	= 7 ; RSSI Averaging Out of Range Channel 3 Bit

; RSMS1R - RSSI Measurement Setting 1 Register
.equ	RSCH1E	= 0 ; RSSI Channel 1 Enable Bit
.equ	RSCH2E	= 1 ; RSSI Channel 2 Enable Bit
.equ	RSCH3E	= 2 ; RSSI Channel 3 Enable Bit
.equ	RSINTM	= 3 ; RSSI internal Measurement Bit
.equ	RSSTIM	= 4 ; RSSI Stimulus Bit
.equ	RSCMS	= 5 ; RSSI Current Mode Select Bit
.equ	RSSSV	= 6 ; RSSI Show Sample Value Bit
.equ	RSSCAL	= 7 ; RSSI Set Calibration Bit

; RSMS2R - RSSI Measurement Setting 2 Register
.equ	RSSADR0	= 0 ; RSSI Sample Address Bit 0
.equ	RSSADR1	= 1 ; RSSI Sample Address Bit 1
.equ	RSSADR2	= 2 ; RSSI Sample Address Bit 2
.equ	RSSADR3	= 3 ; RSSI Sample Address Bit 3
.equ	RSAVGS0	= 4 ; RSSI Average Select Bit 0
.equ	RSAVGS1	= 5 ; RSSI Average Select Bit 1
.equ	RSAVGS2	= 6 ; RSSI Average Select Bit 2
.equ	RSAVGS3	= 7 ; RSSI Average Select Bit 3

; RSRES1H - RSSI Result 1 High Byte Register
.equ	RSRES1H0	= 0 ; RSSI Result 1 High Byte Bit 0
.equ	RSRES1H1	= 1 ; RSSI Result 1 High Byte Bit 1
.equ	RSRES1H2	= 2 ; RSSI Result 1 High Byte Bit 2
.equ	RSRES1H3	= 3 ; RSSI Result 1 High Byte Bit 3
.equ	RSRES1H4	= 4 ; RSSI Result 1 High Byte Bit 4
.equ	RSRES1H5	= 5 ; RSSI Result 1 High Byte Bit 5
.equ	RSRES1H6	= 6 ; RSSI Result 1 High Byte Bit 6
.equ	RSRES1H7	= 7 ; RSSI Result 1 High Byte Bit 7

; RSRES1L - RSSI Result 1 Low Byte Register
.equ	RSRES1L0	= 0 ; RSSI Result 1 Low Byte Bit 0
.equ	RSRES1L1	= 1 ; RSSI Result 1 Low Byte Bit 1
.equ	RSRES1L2	= 2 ; RSSI Result 1 Low Byte Bit 2
.equ	RSRES1L3	= 3 ; RSSI Result 1 Low Byte Bit 3
.equ	RSRES1L4	= 4 ; RSSI Result 1 Low Byte Bit 4
.equ	RSRES1L5	= 5 ; RSSI Result 1 Low Byte Bit 5
.equ	RSRES1L6	= 6 ; RSSI Result 1 Low Byte Bit 6
.equ	RSRES1L7	= 7 ; RSSI Result 1 Low Byte Bit 7

; RSRES2H - RSSI Result 2 High Byte Register
.equ	RSRES2H0	= 0 ; RSSI Result 2 High Byte Bit 0
.equ	RSRES2H1	= 1 ; RSSI Result 2 High Byte Bit 1
.equ	RSRES2H2	= 2 ; RSSI Result 2 High Byte Bit 2
.equ	RSRES2H3	= 3 ; RSSI Result 2 High Byte Bit 3
.equ	RSRES2H4	= 4 ; RSSI Result 2 High Byte Bit 4
.equ	RSRES2H5	= 5 ; RSSI Result 2 High Byte Bit 5
.equ	RSRES2H6	= 6 ; RSSI Result 2 High Byte Bit 6
.equ	RSRES2H7	= 7 ; RSSI Result 2 High Byte Bit 7

; RSRES2L - RSSI Result 2 Low Byte Register
.equ	RSRES2L0	= 0 ; RSSI Result 2 Low Byte Bit 0
.equ	RSRES2L1	= 1 ; RSSI Result 2 Low Byte Bit 1
.equ	RSRES2L2	= 2 ; RSSI Result 2 Low Byte Bit 2
.equ	RSRES2L3	= 3 ; RSSI Result 2 Low Byte Bit 3
.equ	RSRES2L4	= 4 ; RSSI Result 2 Low Byte Bit 4
.equ	RSRES2L5	= 5 ; RSSI Result 2 Low Byte Bit 5
.equ	RSRES2L6	= 6 ; RSSI Result 2 Low Byte Bit 6
.equ	RSRES2L7	= 7 ; RSSI Result 2 Low Byte Bit 7

; RSRES3H - RSSI Result 3 High Byte Register
.equ	RSRES3H0	= 0 ; RSSI Result 3 High Byte Bit 0
.equ	RSRES3H1	= 1 ; RSSI Result 3 High Byte Bit 1
.equ	RSRES3H2	= 2 ; RSSI Result 3 High Byte Bit 2
.equ	RSRES3H3	= 3 ; RSSI Result 3 High Byte Bit 3
.equ	RSRES3H4	= 4 ; RSSI Result 3 High Byte Bit 4
.equ	RSRES3H5	= 5 ; RSSI Result 3 High Byte Bit 5
.equ	RSRES3H6	= 6 ; RSSI Result 3 High Byte Bit 6
.equ	RSRES3H7	= 7 ; RSSI Result 3 High Byte Bit 7

; RSRES3L - RSSI Result 3 Low Byte Register
.equ	RSRES3L0	= 0 ; RSSI Result 3 Low Byte Bit 0
.equ	RSRES3L1	= 1 ; RSSI Result 3 Low Byte Bit 1
.equ	RSRES3L2	= 2 ; RSSI Result 3 Low Byte Bit 2
.equ	RSRES3L3	= 3 ; RSSI Result 3 Low Byte Bit 3
.equ	RSRES3L4	= 4 ; RSSI Result 3 Low Byte Bit 4
.equ	RSRES3L5	= 5 ; RSSI Result 3 Low Byte Bit 5
.equ	RSRES3L6	= 6 ; RSSI Result 3 Low Byte Bit 6
.equ	RSRES3L7	= 7 ; RSSI Result 3 Low Byte Bit 7

; RSRES4H - RSSI Result 4 High Byte Register
.equ	RSRES4H0	= 0 ; RSSI Result 4 High Byte Bit 0
.equ	RSRES4H1	= 1 ; RSSI Result 4 High Byte Bit 1
.equ	RSRES4H2	= 2 ; RSSI Result 4 High Byte Bit 2
.equ	RSRES4H3	= 3 ; RSSI Result 4 High Byte Bit 3
.equ	RSRES4H4	= 4 ; RSSI Result 4 High Byte Bit 4
.equ	RSRES4H5	= 5 ; RSSI Result 4 High Byte Bit 5
.equ	RSRES4H6	= 6 ; RSSI Result 4 High Byte Bit 6
.equ	RSRES4H7	= 7 ; RSSI Result 4 High Byte Bit 7

; RSRES4L - RSSI Result 4 Low Byte Register
.equ	RSRES4L0	= 0 ; RSSI Result 4 Low Byte Bit 0
.equ	RSRES4L1	= 1 ; RSSI Result 4 Low Byte Bit 1
.equ	RSRES4L2	= 2 ; RSSI Result 4 Low Byte Bit 2
.equ	RSRES4L3	= 3 ; RSSI Result 4 Low Byte Bit 3
.equ	RSRES4L4	= 4 ; RSSI Result 4 Low Byte Bit 4
.equ	RSRES4L5	= 5 ; RSSI Result 4 Low Byte Bit 5
.equ	RSRES4L6	= 6 ; RSSI Result 4 Low Byte Bit 6
.equ	RSRES4L7	= 7 ; RSSI Result 4 Low Byte Bit 7

; RSSR - RSSI Status Register
.equ	RSRDY	= 0 ; RSSI Ready Bit
.equ	RSSVLD	= 1 ; RSSI Sample Valid Bit

; RSSRCR - RSSI SRC Calibration Register
.equ	SRCMODE0	= 0 ; RSSI SRC Calibration Mode Bit 0
.equ	SRCMODE1	= 1 ; RSSI SRC Calibration Mode Bit 1
.equ	SRCMIN0	= 2 ; RSSI SRC Minimum Value Bit 0
.equ	SRCMIN1	= 3 ; RSSI SRC Minimum Value Bit 1
.equ	SRCCLR	= 4 ; RSSI SRC Clear Bit
.equ	SRCSTEP0	= 6 ; RSSI SRC Step Bit 0
.equ	SRCSTEP1	= 7 ; RSSI SRC Step Bit 1

; SD12RR - Sign Detection Channel 1 vs 2 Result Register
.equ	SD12RR0	= 0 ; Sign Detection Channel 1 vs 2 Result Bit 0
.equ	SD12RR1	= 1 ; Sign Detection Channel 1 vs 2 Result Bit 1
.equ	SD12RR2	= 2 ; Sign Detection Channel 1 vs 2 Result Bit 2
.equ	SD12RR3	= 3 ; Sign Detection Channel 1 vs 2 Result Bit 3
.equ	SD12RR4	= 4 ; Sign Detection Channel 1 vs 2 Result Bit 4
.equ	SD12RR5	= 5 ; Sign Detection Channel 1 vs 2 Result Bit 5
.equ	SD12RR6	= 6 ; Sign Detection Channel 1 vs 2 Result Bit 6
.equ	SD12RR7	= 7 ; Sign Detection Channel 1 vs 2 Result Bit 7

; SD13RR - Sign Detection Channel 1 vs 3 Result Register
.equ	SD13RR0	= 0 ; Sign Detection Channel 1 vs 3 Result Bit 0
.equ	SD13RR1	= 1 ; Sign Detection Channel 1 vs 3 Result Bit 1
.equ	SD13RR2	= 2 ; Sign Detection Channel 1 vs 3 Result Bit 2
.equ	SD13RR3	= 3 ; Sign Detection Channel 1 vs 3 Result Bit 3
.equ	SD13RR4	= 4 ; Sign Detection Channel 1 vs 3 Result Bit 4
.equ	SD13RR5	= 5 ; Sign Detection Channel 1 vs 3 Result Bit 5
.equ	SD13RR6	= 6 ; Sign Detection Channel 1 vs 3 Result Bit 6
.equ	SD13RR7	= 7 ; Sign Detection Channel 1 vs 3 Result Bit 7

; SD23RR - Sign Detection Channel 2 vs 3 Result Register
.equ	SD23RR0	= 0 ; Sign Detection Channel 2 vs 3 Result Bit 0
.equ	SD23RR1	= 1 ; Sign Detection Channel 2 vs 3 Result Bit 1
.equ	SD23RR2	= 2 ; Sign Detection Channel 2 vs 3 Result Bit 2
.equ	SD23RR3	= 3 ; Sign Detection Channel 2 vs 3 Result Bit 3
.equ	SD23RR4	= 4 ; Sign Detection Channel 2 vs 3 Result Bit 4
.equ	SD23RR5	= 5 ; Sign Detection Channel 2 vs 3 Result Bit 5
.equ	SD23RR6	= 6 ; Sign Detection Channel 2 vs 3 Result Bit 6
.equ	SD23RR7	= 7 ; Sign Detection Channel 2 vs 3 Result Bit 7

; SD360R - Sign Detection 360 Degree Result Register
.equ	SD360R0	= 0 ; Sign Detection 360 Degree Result Bit 0
.equ	SD360R1	= 1 ; Sign Detection 360 Degree Result Bit 1
.equ	SD360R2	= 2 ; Sign Detection 360 Degree Result Bit 2
.equ	SD360R3	= 3 ; Sign Detection 360 Degree Result Bit 3
.equ	SD360R4	= 4 ; Sign Detection 360 Degree Result Bit 4
.equ	SD360R5	= 5 ; Sign Detection 360 Degree Result Bit 5
.equ	SD360R6	= 6 ; Sign Detection 360 Degree Result Bit 6
.equ	SD360R7	= 7 ; Sign Detection 360 Degree Result Bit 7


; ***** LF_TIMER *****************
; LTCMR - LF Timer Control Mode Register
.equ	LTPS0	= 0 ; LF Timer Prescaler Select bit 0
.equ	LTPS1	= 1 ; LF Timer Prescaler Select bit 1
.equ	LTPS2	= 2 ; LF Timer Prescaler Select bit 2
.equ	LTCRM	= 3 ; LF Timer Compare Reset Mask
.equ	LTCIM	= 4 ; LF Timer Compare Interrupt Mask
.equ	LTCM	= 5 ; LF Timer Continuous Mode
.equ	LTSM	= 6 ; LF Timer Start Mode
.equ	LTENA	= 7 ; LF Timer Enable

; LTCOR - LF Timer Compare Register
.equ	LTCOR0	= 0 ; LF Timer Compare Register Bit 0
.equ	LTCOR1	= 1 ; LF Timer Compare Register Bit 1
.equ	LTCOR2	= 2 ; LF Timer Compare Register Bit 2
.equ	LTCOR3	= 3 ; LF Timer Compare Register Bit 3
.equ	LTCOR4	= 4 ; LF Timer Compare Register Bit 4
.equ	LTCOR5	= 5 ; LF Timer Compare Register Bit 5
.equ	LTCOR6	= 6 ; LF Timer Compare Register Bit 6
.equ	LTCOR7	= 7 ; LF Timer Compare Register Bit 7

; LTEMR - LF Timer Event Mask Register
.equ	ID0EM	= 0 ; ID0 Event Mask
.equ	ID1EM	= 1 ; ID1 Event Mask
.equ	IDFEM	= 2 ; Identifier Frame Event Mask
.equ	DFEM	= 3 ; Data Frame end reached Event Mask
.equ	TBLEM	= 4 ; Telegram Bit Length reached Event Mask
.equ	FLEM	= 5 ; Fill Level reached Event Mask
.equ	EOFEM	= 6 ; End OF telegram Event Mask
.equ	LTCOF	= 7 ; LF Timer Compare Flag


; ***** LF_TRANSPONDER *****************
; TPCR1 - Transponder Control Register 1
.equ	TPQPLM	= 2 ; Transponder Quadrature Pulse Length Operation Modulation
.equ	TPBR	= 4 ; Transponder Bit Rate
.equ	TPDFCP0	= 5 ; Transponder Decoder Field Clock Prescaler value
.equ	TPDFCP1	= 6 ; Transponder Decoder Field Clock Prescaler value
.equ	TPMODE	= 7 ; Transponder Mode

; TPCR2 - Transponder Control 2 Register
.equ	TPMA	= 0 ; Transponder Mode Acknowledge
.equ	TPMOD	= 1 ; Transponder Modulation
.equ	TPPSD	= 2 ; Transponder Power Switch Disable
.equ	TPD	= 3 ; Transponder Disable
.equ	TPNFTO	= 4 ; Transponder No Field Timeout enable
.equ	TPWDLV0	= 5 ; Transponder watch dog value for No Field timeout (with SRC clk)
.equ	TPWDLV1	= 6 ; Transponder watch dog value for No Field timeout (with SRC clk)

; TPCR3 - Transponder Control Register 3
.equ	TPTD	= 0 ; Transponder Transmit Data
.equ	TPRD	= 1 ; Transponder Receive Data
.equ	TPTLIW	= 2 ; Transponder Transmit Listen Window
.equ	TPRCD	= 5 ; Transponder Reception Continuous Damping

; TPCR4 - Transponder Control Register 4
.equ	TPBCCS0	= 0 ; Transponder Battery Charge Current Select
.equ	TPBCCS1	= 1 ; Transponder Battery Charge Current Select
.equ	TPBCCS2	= 2 ; Transponder Battery Charge Current Select
.equ	TPBCCS3	= 3 ; Transponder Battery Charge Current Select
.equ	TPBCM	= 4 ; Transponder Battery Charge Mode

; TPCR5 - Transponder Control Register 5
.equ	TPMUD0	= 0 ; Transponder Modulation Undamped Level Select
.equ	TPMUD1	= 1 ; Transponder Modulation Undamped Level Select
.equ	TPMUD2	= 2 ; Transponder Modulation Undamped Level Select
.equ	TPMD0	= 4 ; Transponder Modulation Damping Select
.equ	TPMD1	= 5 ; Transponder Modulation Damping Select
.equ	TPMD2	= 6 ; Transponder Modulation Damping Select

; TPDCR1 - Transponder Decoder Comparator Register 1
.equ	TPDCL10	= 0 ; Transponder Decode Comparator Length value 1
.equ	TPDCL11	= 1 ; Transponder Decode Comparator Length value 1
.equ	TPDCL12	= 2 ; Transponder Decode Comparator Length value 1
.equ	TPDCL13	= 3 ; Transponder Decode Comparator Length value 1
.equ	TPDCL14	= 4 ; Transponder Decode Comparator Length value 1
.equ	TPDCL15	= 5 ; Transponder Decode Comparator Length value 1

; TPDCR2 - Transponder Decoder Comparator Register 2
.equ	TPDCL20	= 0 ; Transponder Decode Comparator Length value 2
.equ	TPDCL21	= 1 ; Transponder Decode Comparator Length value 2
.equ	TPDCL22	= 2 ; Transponder Decode Comparator Length value 2
.equ	TPDCL23	= 3 ; Transponder Decode Comparator Length value 2
.equ	TPDCL24	= 4 ; Transponder Decode Comparator Length value 2
.equ	TPDCL25	= 5 ; Transponder Decode Comparator Length value 2

; TPDCR3 - Transponder Decoder Comparator Register 3
.equ	TPDCL30	= 0 ; Transponder Decode Comparator Length value 3
.equ	TPDCL31	= 1 ; Transponder Decode Comparator Length value 3
.equ	TPDCL32	= 2 ; Transponder Decode Comparator Length value 3
.equ	TPDCL33	= 3 ; Transponder Decode Comparator Length value 3
.equ	TPDCL34	= 4 ; Transponder Decode Comparator Length value 3
.equ	TPDCL35	= 5 ; Transponder Decode Comparator Length value 3

; TPDCR4 - Transponder Decoder Comparator Register 4
.equ	TPDCL40	= 0 ; Transponder Decode Comparator Length value 4
.equ	TPDCL41	= 1 ; Transponder Decode Comparator Length value 4
.equ	TPDCL42	= 2 ; Transponder Decode Comparator Length value 4
.equ	TPDCL43	= 3 ; Transponder Decode Comparator Length value 4
.equ	TPDCL44	= 4 ; Transponder Decode Comparator Length value 4
.equ	TPDCL45	= 5 ; Transponder Decode Comparator Length value 4

; TPDCR5 - Transponder Decoder Comparator Register 5
.equ	TPDCL50	= 0 ; Transponder Decode Comparator Length value 5
.equ	TPDCL51	= 1 ; Transponder Decode Comparator Length value 5
.equ	TPDCL52	= 2 ; Transponder Decode Comparator Length value 5
.equ	TPDCL53	= 3 ; Transponder Decode Comparator Length value 5
.equ	TPDCL54	= 4 ; Transponder Decode Comparator Length value 5
.equ	TPDCL55	= 5 ; Transponder Decode Comparator Length value 5

; TPECMR - Transponder Encoder Mode Register
.equ	TPECM10	= 0 ; Transponder Encoder Mode 1
.equ	TPECM11	= 1 ; Transponder Encoder Mode 1
.equ	TPECM20	= 2 ; Transponder Encoder Mode 2
.equ	TPECM21	= 3 ; Transponder Encoder Mode 2
.equ	TPECM30	= 4 ; Transponder Encoder Mode 3
.equ	TPECM31	= 5 ; Transponder Encoder Mode 3
.equ	TPECM40	= 6 ; Transponder Encoder Mode 4
.equ	TPECM41	= 7 ; Transponder Encoder Mode 4

; TPECR1 - Transponder Encoder Comparator Register 1
.equ	TPECL10	= 0 ; Transponder Encode Comparator Length value 1
.equ	TPECL11	= 1 ; Transponder Encode Comparator Length value 1
.equ	TPECL12	= 2 ; Transponder Encode Comparator Length value 1
.equ	TPECL13	= 3 ; Transponder Encode Comparator Length value 1
.equ	TPECL14	= 4 ; Transponder Encode Comparator Length value 1
.equ	TPECL15	= 5 ; Transponder Encode Comparator Length value 1
.equ	TPECL16	= 6 ; Transponder Encode Comparator Length value 1
.equ	TPECL17	= 7 ; Transponder Encode Comparator Length value 1

; TPECR2 - Transponder Encoder Comparator Register 2
.equ	TPECL20	= 0 ; Transponder Encode Comparator Length value 2
.equ	TPECL21	= 1 ; Transponder Encode Comparator Length value 2
.equ	TPECL22	= 2 ; Transponder Encode Comparator Length value 2
.equ	TPECL23	= 3 ; Transponder Encode Comparator Length value 2
.equ	TPECL24	= 4 ; Transponder Encode Comparator Length value 2
.equ	TPECL25	= 5 ; Transponder Encode Comparator Length value 2
.equ	TPECL26	= 6 ; Transponder Encode Comparator Length value 2
.equ	TPECL27	= 7 ; Transponder Encode Comparator Length value 2

; TPECR3 - Transponder Encoder Comparator Register 3
.equ	TPECL30	= 0 ; Transponder Encode Comparator Length value 3
.equ	TPECL31	= 1 ; Transponder Encode Comparator Length value 3
.equ	TPECL32	= 2 ; Transponder Encode Comparator Length value 3
.equ	TPECL33	= 3 ; Transponder Encode Comparator Length value 3
.equ	TPECL34	= 4 ; Transponder Encode Comparator Length value 3
.equ	TPECL35	= 5 ; Transponder Encode Comparator Length value 3
.equ	TPECL36	= 6 ; Transponder Encode Comparator Length value 3
.equ	TPECL37	= 7 ; Transponder Encode Comparator Length value 3

; TPECR4 - Transponder Encoder Comparator Register 4
.equ	TPECL40	= 0 ; Transponder Encode Comparator Length value 4
.equ	TPECL41	= 1 ; Transponder Encode Comparator Length value 4
.equ	TPECL42	= 2 ; Transponder Encode Comparator Length value 4
.equ	TPECL43	= 3 ; Transponder Encode Comparator Length value 4
.equ	TPECL44	= 4 ; Transponder Encode Comparator Length value 4
.equ	TPECL45	= 5 ; Transponder Encode Comparator Length value 4
.equ	TPECL46	= 6 ; Transponder Encode Comparator Length value 4
.equ	TPECL47	= 7 ; Transponder Encode Comparator Length value 4

; TPFR - Transponder Flag Register
.equ	TPF	= 0 ; Transponder Flag
.equ	TPFTF	= 1 ; Transponder Field Timeout Flag
.equ	TPNFTF	= 2 ; Transponder No Field Timeout Flag
.equ	TPBERF	= 3 ; Transponder Bit Error Flag

; TPIMR - Transponder Interrupt Mask Register
.equ	TPIM	= 0 ; Transponder Interrupt Mask
.equ	TPFTIM	= 1 ; Transponder Field Timeout Interrupt Mask
.equ	TPNFTIM	= 2 ; Transponder No Field Timeout Interrupt Mask
.equ	TPBERIM	= 3 ; Transponder Bit Error Interrupt Mask

; TPSR - Transponder Status Register
.equ	TPA	= 0 ; Transponder Active
.equ	TPGAP	= 1 ; Transponder GAP Signal
.equ	TPPSW	= 2 ; Transponder Power Switch
.equ	TPBCOK	= 3 ; Transponder Battery Charge OK


; ***** MEM *****************
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


; ***** PORTB *****************
; DDRB - Port B Data Direction Register
.equ	DDRB0	= 0 ; Port B Data Direction Register Bit 0
.equ	DDRB1	= 1 ; Port B Data Direction Register Bit 1
.equ	DDRB2	= 2 ; Port B Data Direction Register Bit 2
.equ	DDRB3	= 3 ; Port B Data Direction Register Bit 3
.equ	DDRB4	= 4 ; Port B Data Direction Register Bit 4
.equ	DDRB5	= 5 ; Port B Data Direction Register Bit 5
.equ	DDRB6	= 6 ; Port B Data Direction Register Bit 6
.equ	DDRB7	= 7 ; Port B Data Direction Register Bit 7

; PINB - Port B Input Pins
.equ	PINB0	= 0 ; Port B Input Pins Bit 0
.equ	PINB1	= 1 ; Port B Input Pins Bit 1
.equ	PINB2	= 2 ; Port B Input Pins Bit 2
.equ	PINB3	= 3 ; Port B Input Pins Bit 3
.equ	PINB4	= 4 ; Port B Input Pins Bit 4
.equ	PINB5	= 5 ; Port B Input Pins Bit 5
.equ	PINB6	= 6 ; Port B Input Pins Bit 6
.equ	PINB7	= 7 ; Port B Input Pins Bit 7

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
; DDRC - Port C Data Direction Register
.equ	DDRC0	= 0 ; Port C Data Direction Register Bit 0
.equ	DDRC1	= 1 ; Port C Data Direction Register Bit 1
.equ	DDRC2	= 2 ; Port C Data Direction Register Bit 2

; PINC - Port C Input Pins
.equ	PINC0	= 0 ; Port C Input Pins Bit 0
.equ	PINC1	= 1 ; Port C Input Pins Bit 1
.equ	PINC2	= 2 ; Port C Input Pins Bit 2

; PORTC - Port C Data Register
.equ	PORTC0	= 0 ; Port C Data Register Bit 0
.equ	PORTC1	= 1 ; Port C Data Register Bit 1
.equ	PORTC2	= 2 ; Port C Data Register Bit 2


; ***** PORTD *****************
; DDRD - Port D Data Direction Register
.equ	DDRD0	= 0 ; Port D Data Direction Register Bit 0
.equ	DDRD1	= 1 ; Port D Data Direction Register Bit 1
.equ	DDRD2	= 2 ; Port D Data Direction Register Bit 2
.equ	DDRD3	= 3 ; Port D Data Direction Register Bit 3
.equ	DDRD4	= 4 ; Port D Data Direction Register Bit 4
.equ	DDRD5	= 5 ; Port D Data Direction Register Bit 5
.equ	DDRD6	= 6 ; Port D Data Direction Register Bit 6
.equ	DDRD7	= 7 ; Port D Data Direction Register Bit 7

; PIND - Port D Input Pins
.equ	PIND0	= 0 ; Port D Input Pins Bit 0
.equ	PIND1	= 1 ; Port D Input Pins Bit 1
.equ	PIND2	= 2 ; Port D Input Pins Bit 2
.equ	PIND3	= 3 ; Port D Input Pins Bit 3
.equ	PIND4	= 4 ; Port D Input Pins Bit 4
.equ	PIND5	= 5 ; Port D Input Pins Bit 5
.equ	PIND6	= 6 ; Port D Input Pins Bit 6
.equ	PIND7	= 7 ; Port D Input Pins Bit 7

; PORTD - Port D Data Register
.equ	PORTD0	= 0 ; Port D Data Register Bit 0
.equ	PORTD1	= 1 ; Port D Data Register Bit 1
.equ	PORTD2	= 2 ; Port D Data Register Bit 2
.equ	PORTD3	= 3 ; Port D Data Register Bit 3
.equ	PORTD4	= 4 ; Port D Data Register Bit 4
.equ	PORTD5	= 5 ; Port D Data Register Bit 5
.equ	PORTD6	= 6 ; Port D Data Register Bit 6
.equ	PORTD7	= 7 ; Port D Data Register Bit 7


; ***** SFIFO *****************
; SFC - Support FIFO Configuration Register
.equ	SFFLC0	= 0 ; Support FIFO Fill-Level Configuration
.equ	SFFLC1	= 1 ; Support FIFO Fill-Level Configuration
.equ	SFFLC2	= 2 ; Support FIFO Fill-Level Configuration
.equ	SFFLC3	= 3 ; Support FIFO Fill-Level Configuration
.equ	SFFLC4	= 4 ; Support FIFO Fill-Level Configuration
.equ	SFDRA	= 7 ; Support FIFO Direct Read Access Operational Mode

; SFD - Support FIFO Data Register
.equ	SFD0	= 0 ; Support FIFO Data Register Bit 0
.equ	SFD1	= 1 ; Support FIFO Data Register Bit 1
.equ	SFD2	= 2 ; Support FIFO Data Register Bit 2
.equ	SFD3	= 3 ; Support FIFO Data Register Bit 3
.equ	SFD4	= 4 ; Support FIFO Data Register Bit 4
.equ	SFD5	= 5 ; Support FIFO Data Register Bit 5
.equ	SFD6	= 6 ; Support FIFO Data Register Bit 6
.equ	SFD7	= 7 ; Support FIFO Data Register Bit 7

; SFI - Support FIFO Interrupt Mask Register
.equ	SFFLIM	= 0 ; Support FIFO Fill-level Interrupt Mask
.equ	SFERIM	= 1 ; Support FIFO Error Interrupt Mask

; SFL - Support FIFO Fill Level Register
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

; SFS - Support FIFO Status Register
.equ	SFFLRF	= 0 ; Support FIFO Fill-Level Reached Status Flag
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
.equ	TFC	= 7 ; SPI Tx Buffer Clear

; SFIR - SPI FIFO Interrupt Register
.equ	RIL0	= 0 ; Receive Buffer Interrupt Level
.equ	RIL1	= 1 ; Receive Buffer Interrupt Level
.equ	RIL2	= 2 ; Receive Buffer Interrupt Level
.equ	SRIE	= 3 ; Rx Buffer Interrupt Enable
.equ	TIL0	= 4 ; Transmit Buffer Interrupt Level
.equ	TIL1	= 5 ; Transmit Buffer Interrupt Level
.equ	TIL2	= 6 ; Transmit Buffer Interrupt Level
.equ	STIE	= 7 ; SPI Rx Buffer Interrupt Enable

; SPCR - SPI control Register
.equ	SPR0	= 0 ; SPI Clock Rate Select
.equ	SPR1	= 1 ; SPI Clock Rate Select
.equ	CPHA	= 2 ; Clock Phase
.equ	CPOL	= 3 ; Clock Polarity
.equ	MSTR	= 4 ; Master/Slave Select
.equ	DORD	= 5 ; Data Order
.equ	SPE	= 6 ; SPI Enable
.equ	SPIE	= 7 ; Spe Interrupt Enable

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


; ***** SPI2 *****************
; SP2CR - SPI2 control Register
.equ	SP2R0	= 0 ; SPI2 Clock Rate Select
.equ	SP2R1	= 1 ; SPI2 Clock Rate Select
.equ	CPHA2	= 2 ; Clock Phase
.equ	CPOL2	= 3 ; Clock Polarity
.equ	MSTR2	= 4 ; Master/Slave Select
.equ	DORD2	= 5 ; Data Order
.equ	SP2E	= 6 ; SPI2 Enable
.equ	SP2IE	= 7 ; Spi2 Interrupt Enable

; SP2DR - SPI2 Data Register
.equ	SP2DR0	= 0 ; SPI2 Data Register Bit 0
.equ	SP2DR1	= 1 ; SPI2 Data Register Bit 1
.equ	SP2DR2	= 2 ; SPI2 Data Register Bit 2
.equ	SP2DR3	= 3 ; SPI2 Data Register Bit 3
.equ	SP2DR4	= 4 ; SPI2 Data Register Bit 4
.equ	SP2DR5	= 5 ; SPI2 Data Register Bit 5
.equ	SP2DR6	= 6 ; SPI2 Data Register Bit 6
.equ	SP2DR7	= 7 ; SPI2 Data Register Bit 7

; SP2SR - SPI2 Status Register
.equ	SPI22X	= 0 ; Double SPI2 Speed Bit
.equ	WCOL2	= 6 ; Write Colliion Flag
.equ	SP2IF	= 7 ; SPI2 Interrupt Flag


; ***** SSM *****************
; MSMCR1 - Master State Machine Control Register 1
.equ	MSMSM00	= 0 ; Master State Machine SubState Machine Select 0
.equ	MSMSM01	= 1 ; Master State Machine SubState Machine Select 0
.equ	MSMSM02	= 2 ; Master State Machine SubState Machine Select 0
.equ	MSMSM03	= 3 ; Master State Machine SubState Machine Select 0
.equ	MSMSM10	= 4 ; Master State Machine SubState Machine Select 1
.equ	MSMSM11	= 5 ; Master State Machine SubState Machine Select 1
.equ	MSMSM12	= 6 ; Master State Machine SubState Machine Select 1
.equ	MSMSM13	= 7 ; Master State Machine SubState Machine Select 1

; MSMCR2 - Master State Machine Control Register 2
.equ	MSMSM20	= 0 ; Master State Machine SubState Machine Select 2
.equ	MSMSM21	= 1 ; Master State Machine SubState Machine Select 2
.equ	MSMSM22	= 2 ; Master State Machine SubState Machine Select 2
.equ	MSMSM23	= 3 ; Master State Machine SubState Machine Select 2
.equ	MSMSM30	= 4 ; Master State Machine SubState Machine Select 3
.equ	MSMSM31	= 5 ; Master State Machine SubState Machine Select 3
.equ	MSMSM32	= 6 ; Master State Machine SubState Machine Select 3
.equ	MSMSM33	= 7 ; Master State Machine SubState Machine Select 3

; MSMCR3 - Master State Machine Control Register 3
.equ	MSMSM40	= 0 ; Master State Machine SubState Machine Select 4
.equ	MSMSM41	= 1 ; Master State Machine SubState Machine Select 4
.equ	MSMSM42	= 2 ; Master State Machine SubState Machine Select 4
.equ	MSMSM43	= 3 ; Master State Machine SubState Machine Select 4
.equ	MSMSM50	= 4 ; Master State Machine SubState Machine Select 5
.equ	MSMSM51	= 5 ; Master State Machine SubState Machine Select 5
.equ	MSMSM52	= 6 ; Master State Machine SubState Machine Select 5
.equ	MSMSM53	= 7 ; Master State Machine SubState Machine Select 5

; MSMCR4 - Master State Machine Control Register 4
.equ	MSMSM60	= 0 ; Master State Machine SubState Machine Select 6
.equ	MSMSM61	= 1 ; Master State Machine SubState Machine Select 6
.equ	MSMSM62	= 2 ; Master State Machine SubState Machine Select 6
.equ	MSMSM63	= 3 ; Master State Machine SubState Machine Select 6
.equ	MSMSM70	= 4 ; Master State Machine SubState Machine Select 7
.equ	MSMSM71	= 5 ; Master State Machine SubState Machine Select 7
.equ	MSMSM72	= 6 ; Master State Machine SubState Machine Select 7
.equ	MSMSM73	= 7 ; Master State Machine SubState Machine Select 7

; MSMSTR - Master State Machine state register
.equ	SSMMST0	= 0 ; Sequencer State Machine Master State
.equ	SSMMST1	= 1 ; Sequencer State Machine Master State
.equ	SSMMST2	= 2 ; Sequencer State Machine Master State
.equ	SSMMST3	= 3 ; Sequencer State Machine Master State
.equ	SSMMST4	= 4 ; Sequencer State Machine Master State

; SSMCR - SSM Control Register
.equ	SSMTGE	= 2 ; Sequencer State Machine Tx Gauss Enable
.equ	SSMTPE	= 3 ; Sequencer State Machine Tx Preemphasis Enable
.equ	SSMPVE	= 4 ; Sequencer State Machine PV Enable
.equ	SSMTAE	= 5 ; Sequencer State Machine Tx Ask-Shaping Enable

; SSMFBR - SSM Filter Bandwidth Register
.equ	SSMPLDT	= 5 ; Sequencer State Machine PLL Lock Delay Time

; SSMIFR - SSM Interrupt Flag Register
.equ	SSMIF	= 0 ; Sequencer State Machine Interrupt Flag

; SSMIMR - SSM interrupt mask register
.equ	SSMIM	= 0 ; Sequencer State Machine Interrupt Mask

; SSMRR - SSM Run Register
.equ	SSMR	= 0 ; Sequencer State Machine Run
.equ	SSMST	= 1 ; Sequencer State Machine Stop

; SSMSR - SSM Status Register
.equ	SSMESM0	= 0 ; Sequencer State Machine Error State Machine
.equ	SSMESM1	= 1 ; Sequencer State Machine Error State Machine
.equ	SSMESM2	= 2 ; Sequencer State Machine Error State Machine
.equ	SSMESM3	= 3 ; Sequencer State Machine Error State Machine
.equ	SSMERR	= 7 ; Sequencer State Machine Error

; SSMSTR - SSM State Register
.equ	SSMSTA0	= 0 ; Sequencer State Machine State A
.equ	SSMSTA1	= 1 ; Sequencer State Machine State A
.equ	SSMSTA2	= 2 ; Sequencer State Machine State A
.equ	SSMSTA3	= 3 ; Sequencer State Machine State A
.equ	SSMSTA4	= 4 ; Sequencer State Machine State A
.equ	SSMSTA5	= 5 ; Sequencer State Machine State A


; ***** SUP *****************
; CALRDY - Calibration ready signature
.equ	CALRDY0	= 0 ; Calibration ready signature Bit 0
.equ	CALRDY1	= 1 ; Calibration ready signature Bit 1
.equ	CALRDY2	= 2 ; Calibration ready signature Bit 2
.equ	CALRDY3	= 3 ; Calibration ready signature Bit 3
.equ	CALRDY4	= 4 ; Calibration ready signature Bit 4
.equ	CALRDY5	= 5 ; Calibration ready signature Bit 5
.equ	CALRDY6	= 6 ; Calibration ready signature Bit 6
.equ	CALRDY7	= 7 ; Calibration ready signature Bit 7

; CALRDYLF - Calibration ready signature LFVCC
.equ	CALRDYLF0	= 0 ; Calibration ready signature LFVCC Bit 0
.equ	CALRDYLF1	= 1 ; Calibration ready signature LFVCC Bit 1
.equ	CALRDYLF2	= 2 ; Calibration ready signature LFVCC Bit 2
.equ	CALRDYLF3	= 3 ; Calibration ready signature LFVCC Bit 3
.equ	CALRDYLF4	= 4 ; Calibration ready signature LFVCC Bit 4
.equ	CALRDYLF5	= 5 ; Calibration ready signature LFVCC Bit 5
.equ	CALRDYLF6	= 6 ; Calibration ready signature LFVCC Bit 6
.equ	CALRDYLF7	= 7 ; Calibration ready signature LFVCC Bit 7

; PMTER - Power Management Test Enable Register
.equ	PMTER0	= 0 ; Power Management Test Enable Register Bit 0
.equ	PMTER1	= 1 ; Power Management Test Enable Register Bit 1
.equ	PMTER2	= 2 ; Power Management Test Enable Register Bit 2
.equ	PMTER3	= 3 ; Power Management Test Enable Register Bit 3
.equ	PMTER4	= 4 ; Power Management Test Enable Register Bit 4
.equ	PMTER5	= 5 ; Power Management Test Enable Register Bit 5
.equ	PMTER6	= 6 ; Power Management Test Enable Register Bit 6
.equ	PMTER7	= 7 ; Power Management Test Enable Register Bit 7

; RCTCAL - RC oscillator Temperature Compensation register
.equ	FRCTC	= 0 ; FRC Oscillator Temperature Compensation bit
.equ	MRCTC0	= 1 ; Medium frequency RC Oscillator Temperature Compensation
.equ	MRCTC1	= 2 ; Medium frequency RC Oscillator Temperature Compensation
.equ	MRCTC2	= 3 ; Medium frequency RC Oscillator Temperature Compensation
.equ	DI_MRCBG	= 4 ; Disable MRC Oscillator Bandgap

; SUPCA1 - Supply calibration register 1
.equ	PV22	= 2 ; Power Amplifier Voltage 2.2V
.equ	PVDIC	= 3 ; Power Amplifier Regulator Double Internal Current
.equ	PVCAL0	= 4 ; Power Amplifier Regulator Calibration
.equ	PVCAL1	= 5 ; Power Amplifier Regulator Calibration
.equ	PVCAL2	= 6 ; Power Amplifier Regulator Calibration
.equ	PVCAL3	= 7 ; Power Amplifier Regulator Calibration

; SUPCA10 - Supply calibration register 10
.equ	SUPCA100	= 0 ; Supply calibration register 10 Bit 0
.equ	SUPCA101	= 1 ; Supply calibration register 10 Bit 1
.equ	SUPCA102	= 2 ; Supply calibration register 10 Bit 2
.equ	SUPCA103	= 3 ; Supply calibration register 10 Bit 3
.equ	SUPCA104	= 4 ; Supply calibration register 10 Bit 4

; SUPCA2 - Supply calibration register 2
.equ	BGCAL0	= 0 ; Band Gap Calibration
.equ	BGCAL1	= 1 ; Band Gap Calibration
.equ	BGCAL2	= 2 ; Band Gap Calibration
.equ	BGCAL3	= 3 ; Band Gap Calibration

; SUPCA3 - Supply calibration register 3
.equ	ACAL0	= 0 ; AVCC Regulator Output Voltage Calibration
.equ	ACAL1	= 1 ; AVCC Regulator Output Voltage Calibration
.equ	ACAL2	= 2 ; AVCC Regulator Output Voltage Calibration
.equ	ACAL3	= 3 ; AVCC Regulator Output Voltage Calibration
.equ	ACAL4	= 4 ; AVCC Regulator Output Voltage Calibration
.equ	ACAL5	= 5 ; AVCC Regulator Output Voltage Calibration
.equ	ACAL6	= 6 ; AVCC Regulator Output Voltage Calibration
.equ	ACAL7	= 7 ; AVCC Regulator Output Voltage Calibration

; SUPCA4 - Supply calibration register 4
.equ	ICONST0	= 0 ; ICONST Constant current of bandgap
.equ	ICONST1	= 1 ; ICONST Constant current of bandgap
.equ	ICONST2	= 2 ; ICONST Constant current of bandgap
.equ	ICONST3	= 3 ; ICONST Constant current of bandgap
.equ	ICONST4	= 4 ; ICONST Constant current of bandgap
.equ	ICONST5	= 5 ; ICONST Constant current of bandgap

; SUPCA5 - Supply calibration register 5
.equ	IPTAT0	= 0 ; IPTAT current of bandgap
.equ	IPTAT1	= 1 ; IPTAT current of bandgap
.equ	IPTAT2	= 2 ; IPTAT current of bandgap
.equ	IPTAT3	= 3 ; IPTAT current of bandgap
.equ	IPTAT4	= 4 ; IPTAT current of bandgap
.equ	IPTAT5	= 5 ; IPTAT current of bandgap

; SUPCA6 - Supply calibration register 6
.equ	VBGTR0	= 0 ; Threshold voltage of bandgap
.equ	VBGTR1	= 1 ; Threshold voltage of bandgap
.equ	VBGTR2	= 2 ; Threshold voltage of bandgap
.equ	VBGTR3	= 3 ; Threshold voltage of bandgap
.equ	VBGTR4	= 4 ; Threshold voltage of bandgap
.equ	VBGTR5	= 5 ; Threshold voltage of bandgap
.equ	VBGTR6	= 6 ; Threshold voltage of bandgap
.equ	VBGTR7	= 7 ; Threshold voltage of bandgap

; SUPCA7 - Supply calibration register 7
.equ	VCCCAL0	= 0 ; LFVCC and DVCC Output Voltage Calibration
.equ	VCCCAL1	= 1 ; LFVCC and DVCC Output Voltage Calibration
.equ	VCCCAL2	= 2 ; LFVCC and DVCC Output Voltage Calibration
.equ	LFVCCBD0	= 3 ; VREF voltage for LFVCC Brown-out-Detector
.equ	LFVCCBD1	= 4 ; VREF voltage for LFVCC Brown-out-Detector
.equ	LFVCCBD2	= 5 ; VREF voltage for LFVCC Brown-out-Detector

; SUPCA8 - Supply calibration register 8
.equ	VSWBD0	= 0 ; VSIG voltage for LFVCC Brown-out-Detector
.equ	VSWBD1	= 1 ; VSIG voltage for LFVCC Brown-out-Detector
.equ	VSWBD2	= 2 ; VSIG voltage for LFVCC Brown-out-Detector
.equ	DVCCBD0	= 3 ; VREF voltage for DVCC Brown-out-Detector
.equ	DVCCBD1	= 4 ; VREF voltage for DVCC Brown-out-Detector
.equ	DVCCBD2	= 5 ; VREF voltage for DVCC Brown-out-Detector

; SUPCA9 - Supply calibration register 9
.equ	VMEM0	= 0 ; VMEM ldo voltage
.equ	VMEM1	= 1 ; VMEM ldo voltage
.equ	VMEM2	= 2 ; VMEM ldo voltage
.equ	VMEM3	= 3 ; VMEM ldo voltage
.equ	VMEM4	= 4 ; VMEM ldo voltage
.equ	VMEM5	= 5 ; VMEM ldo voltage
.equ	VMEM6	= 6 ; VMEM ldo voltage
.equ	VMEM7	= 7 ; VMEM ldo voltage

; SUPCR - Supply Control Register
.equ	AVCCRM	= 0 ; AVCC Reset Interrupt Mask
.equ	AVCCLM	= 1 ; AVCC Low Interrupt Mask
.equ	PVEN	= 2 ; Power amplifier Voltage supply Enable
.equ	AVDIC	= 3 ; AVCC Double Internal Current
.equ	AVEN	= 4 ; AVCC Enable
.equ	DVHEN	= 5 ; DVCC High Current Mode Enable
.equ	VMRESM	= 6 ; VMEM Reset Mask
.equ	VMEMEN	= 7 ; Memory Voltage Regulator Enable

; SUPFR - Supply Interrupt Flag Register
.equ	AVCCRF	= 0 ; AVCC reset interrupt flag
.equ	AVCCLF	= 1 ; AVCC low interrupt flag

; VMCR - Voltage Monitor Control Register
.equ	VMLS0	= 0 ; Voltage Monitor Level Select
.equ	VMLS1	= 1 ; Voltage Monitor Level Select
.equ	VMLS2	= 2 ; Voltage Monitor Level Select
.equ	VMLS3	= 3 ; Voltage Monitor Level Select
.equ	VMIM	= 4 ; Voltage Monitor Interrupt Mask
.equ	VMPS0	= 5 ; Voltage Monitor Power Supply Select
.equ	VMPS1	= 6 ; Voltage Monitor Power Supply Select
.equ	VMRS	= 7 ; Voltage Monitor Range Select

; VMSCR - Voltage Monitor Status and Control Register
.equ	VMF	= 0 ; Voltage Monitor Flag
.equ	VMDIH	= 1 ; Voltage Monitor Disable Hysteresis


; ***** TIMER0_WDT *****************
; T0CR - Timer0 Control Register
.equ	T0PS0	= 0 ; Timer0 Prescaler Select
.equ	T0PS1	= 1 ; Timer0 Prescaler Select
.equ	T0PS2	= 2 ; Timer0 Prescaler Select
.equ	T0IE	= 3 ; Timer0 Interrupt Enable
.equ	T0PR	= 4 ; Timer0 Prescaler Reset

; T0IFR - Timer0 Interrupt Flag Register
.equ	T0F	= 0 ; Timer0 Flag

; WDTCR - Watchdog Timer0 control Register
.equ	WDPS0	= 0 ; Watchdog Prescaler Select
.equ	WDPS1	= 1 ; Watchdog Prescaler Select
.equ	WDPS2	= 2 ; Watchdog Prescaler Select
.equ	WDE	= 3 ; Watchdog System Reset Enable
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

; T1CR - Timer1 control Register
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
; T3CNT - Timer3 counter Register
.equ	T3CNTH0	= 0 ; Timer3 counter Register High Bit 8
.equ	T3CNTH1	= 1 ; Timer3 counter Register High Bit 9
.equ	T3CNTH2	= 2 ; Timer3 counter Register High Bit 10
.equ	T3CNTH3	= 3 ; Timer3 counter Register High Bit 11
.equ	T3CNTH4	= 4 ; Timer3 counter Register High Bit 12
.equ	T3CNTH5	= 5 ; Timer3 counter Register High Bit 13
.equ	T3CNTH6	= 6 ; Timer3 counter Register High Bit 14
.equ	T3CNTH7	= 7 ; Timer3 counter Register High Bit 15

.equ	T3CNTL0	= 0 ; Timer3 counter Register Low Bit 0
.equ	T3CNTL1	= 1 ; Timer3 counter Register Low Bit 1
.equ	T3CNTL2	= 2 ; Timer3 counter Register Low Bit 2
.equ	T3CNTL3	= 3 ; Timer3 counter Register Low Bit 3
.equ	T3CNTL4	= 4 ; Timer3 counter Register Low Bit 4
.equ	T3CNTL5	= 5 ; Timer3 counter Register Low Bit 5
.equ	T3CNTL6	= 6 ; Timer3 counter Register Low Bit 6
.equ	T3CNTL7	= 7 ; Timer3 counter Register Low Bit 7

; T3COR - Timer3 compare Register
.equ	T3CORH0	= 0 ; Timer3 compare Register High Bit 8
.equ	T3CORH1	= 1 ; Timer3 compare Register High Bit 9
.equ	T3CORH2	= 2 ; Timer3 compare Register High Bit 10
.equ	T3CORH3	= 3 ; Timer3 compare Register High Bit 11
.equ	T3CORH4	= 4 ; Timer3 compare Register High Bit 12
.equ	T3CORH5	= 5 ; Timer3 compare Register High Bit 13
.equ	T3CORH6	= 6 ; Timer3 compare Register High Bit 14
.equ	T3CORH7	= 7 ; Timer3 compare Register High Bit 15

.equ	T3CORL0	= 0 ; Timer3 compare Register Low Bit 0
.equ	T3CORL1	= 1 ; Timer3 compare Register Low Bit 1
.equ	T3CORL2	= 2 ; Timer3 compare Register Low Bit 2
.equ	T3CORL3	= 3 ; Timer3 compare Register Low Bit 3
.equ	T3CORL4	= 4 ; Timer3 compare Register Low Bit 4
.equ	T3CORL5	= 5 ; Timer3 compare Register Low Bit 5
.equ	T3CORL6	= 6 ; Timer3 compare Register Low Bit 6
.equ	T3CORL7	= 7 ; Timer3 compare Register Low Bit 7

; T3CR - Timer3 control Register
.equ	T3OTM	= 0 ; Timer3 Overflow Toggle Mask
.equ	T3CTM	= 1 ; Timer3 Compare Toggle Mask
.equ	T3CRM	= 2 ; Timer3 Compare Reset Mask
.equ	T3CPRM	= 3 ; Timer3 CaPture Reset Mask
.equ	T3TOP	= 4 ; Timer3 Toggle Output Preset
.equ	T3RES	= 5 ; Timer3 Reset
.equ	T3TOS	= 6 ; Timer3 Toggle with Start
.equ	T3ENA	= 7 ; Timer3 Enable

; T3ICR - Timer3 input capture Register
.equ	T3ICRH0	= 0 ; Timer3 input capture Register High Bit 8
.equ	T3ICRH1	= 1 ; Timer3 input capture Register High Bit 9
.equ	T3ICRH2	= 2 ; Timer3 input capture Register High Bit 10
.equ	T3ICRH3	= 3 ; Timer3 input capture Register High Bit 11
.equ	T3ICRH4	= 4 ; Timer3 input capture Register High Bit 12
.equ	T3ICRH5	= 5 ; Timer3 input capture Register High Bit 13
.equ	T3ICRH6	= 6 ; Timer3 input capture Register High Bit 14
.equ	T3ICRH7	= 7 ; Timer3 input capture Register High Bit 15

.equ	T3ICRL0	= 0 ; Timer3 input capture Register Low Bit 0
.equ	T3ICRL1	= 1 ; Timer3 input capture Register Low Bit 1
.equ	T3ICRL2	= 2 ; Timer3 input capture Register Low Bit 2
.equ	T3ICRL3	= 3 ; Timer3 input capture Register Low Bit 3
.equ	T3ICRL4	= 4 ; Timer3 input capture Register Low Bit 4
.equ	T3ICRL5	= 5 ; Timer3 input capture Register Low Bit 5
.equ	T3ICRL6	= 6 ; Timer3 input capture Register Low Bit 6
.equ	T3ICRL7	= 7 ; Timer3 input capture Register Low Bit 7

; T3IFR - Timer3 interrupt flag Register
.equ	T3OFF	= 0 ; Timer3 OverFlow Flag
.equ	T3COF	= 1 ; Timer3 Compare Flag
.equ	T3ICF	= 2 ; Timer3 Input Capture Flag

; T3IMR - Timer3 interrupt mask Register
.equ	T3OIM	= 0 ; Timer3 Overflow Interrupt Mask
.equ	T3CIM	= 1 ; Timer3 Compare Interrupt Mask
.equ	T3CPIM	= 2 ; Timer3 Capture Interrupt Mask

; T3MRA - Timer3 mode Register
.equ	T3CS0	= 0 ; Timer3 Clock Select
.equ	T3CS1	= 1 ; Timer3 Clock Select
.equ	T3PS0	= 2 ; Timer3 Prescaler Select
.equ	T3PS1	= 3 ; Timer3 Prescaler Select
.equ	T3PS2	= 4 ; Timer3 Prescaler Select

; T3MRB - Timer3 mode Register
.equ	T3SCE	= 1 ; Timer3 Software Capture Enable
.equ	T3CNC	= 2 ; Timer3 input Capture Noise Canceller
.equ	T3CE0	= 3 ; Timer3 Capture Edge select
.equ	T3CE1	= 4 ; Timer3 Capture Edge select
.equ	T3ICS0	= 5 ; Timer3 Input Capture Select
.equ	T3ICS1	= 6 ; Timer3 Input Capture Select
.equ	T3ICS2	= 7 ; Timer3 Input Capture Select


; ***** TIMER4 *****************
; T4CNT - Timer4 counter Register
.equ	T4CNTH0	= 0 ; Timer4 counter Register High Bit 8
.equ	T4CNTH1	= 1 ; Timer4 counter Register High Bit 9
.equ	T4CNTH2	= 2 ; Timer4 counter Register High Bit 10
.equ	T4CNTH3	= 3 ; Timer4 counter Register High Bit 11
.equ	T4CNTH4	= 4 ; Timer4 counter Register High Bit 12
.equ	T4CNTH5	= 5 ; Timer4 counter Register High Bit 13
.equ	T4CNTH6	= 6 ; Timer4 counter Register High Bit 14
.equ	T4CNTH7	= 7 ; Timer4 counter Register High Bit 15

.equ	T4CNTL0	= 0 ; Timer4 counter Register Low Bit 0
.equ	T4CNTL1	= 1 ; Timer4 counter Register Low Bit 1
.equ	T4CNTL2	= 2 ; Timer4 counter Register Low Bit 2
.equ	T4CNTL3	= 3 ; Timer4 counter Register Low Bit 3
.equ	T4CNTL4	= 4 ; Timer4 counter Register Low Bit 4
.equ	T4CNTL5	= 5 ; Timer4 counter Register Low Bit 5
.equ	T4CNTL6	= 6 ; Timer4 counter Register Low Bit 6
.equ	T4CNTL7	= 7 ; Timer4 counter Register Low Bit 7

; T4COR - Timer4 compare Register
.equ	T4CORH0	= 0 ; Timer4 compare Register High Bit 8
.equ	T4CORH1	= 1 ; Timer4 compare Register High Bit 9
.equ	T4CORH2	= 2 ; Timer4 compare Register High Bit 10
.equ	T4CORH3	= 3 ; Timer4 compare Register High Bit 11
.equ	T4CORH4	= 4 ; Timer4 compare Register High Bit 12
.equ	T4CORH5	= 5 ; Timer4 compare Register High Bit 13
.equ	T4CORH6	= 6 ; Timer4 compare Register High Bit 14
.equ	T4CORH7	= 7 ; Timer4 compare Register High Bit 15

.equ	T4CORL0	= 0 ; Timer4 compare Register Low Bit 0
.equ	T4CORL1	= 1 ; Timer4 compare Register Low Bit 1
.equ	T4CORL2	= 2 ; Timer4 compare Register Low Bit 2
.equ	T4CORL3	= 3 ; Timer4 compare Register Low Bit 3
.equ	T4CORL4	= 4 ; Timer4 compare Register Low Bit 4
.equ	T4CORL5	= 5 ; Timer4 compare Register Low Bit 5
.equ	T4CORL6	= 6 ; Timer4 compare Register Low Bit 6
.equ	T4CORL7	= 7 ; Timer4 compare Register Low Bit 7

; T4CR - Timer4 control Register
.equ	T4OTM	= 0 ; Timer4 Overflow Toggle Mask
.equ	T4CTM	= 1 ; Timer4 Compare Toggle Mask
.equ	T4CRM	= 2 ; Timer4 Compare Reset Mask
.equ	T4CPRM	= 3 ; Timer4 CaPture Reset Mask
.equ	T4TOP	= 4 ; Timer4 Toggle Output Preset
.equ	T4RES	= 5 ; Timer4 Reset
.equ	T4TOS	= 6 ; Timer4 Toggle with Start
.equ	T4ENA	= 7 ; Timer4 Enable

; T4ICR - Timer4 input capture Register
.equ	T4ICRH0	= 0 ; Timer4 input capture Register High Bit 8
.equ	T4ICRH1	= 1 ; Timer4 input capture Register High Bit 9
.equ	T4ICRH2	= 2 ; Timer4 input capture Register High Bit 10
.equ	T4ICRH3	= 3 ; Timer4 input capture Register High Bit 11
.equ	T4ICRH4	= 4 ; Timer4 input capture Register High Bit 12
.equ	T4ICRH5	= 5 ; Timer4 input capture Register High Bit 13
.equ	T4ICRH6	= 6 ; Timer4 input capture Register High Bit 14
.equ	T4ICRH7	= 7 ; Timer4 input capture Register High Bit 15

.equ	T4ICRL0	= 0 ; Timer4 input capture Register Low Bit 0
.equ	T4ICRL1	= 1 ; Timer4 input capture Register Low Bit 1
.equ	T4ICRL2	= 2 ; Timer4 input capture Register Low Bit 2
.equ	T4ICRL3	= 3 ; Timer4 input capture Register Low Bit 3
.equ	T4ICRL4	= 4 ; Timer4 input capture Register Low Bit 4
.equ	T4ICRL5	= 5 ; Timer4 input capture Register Low Bit 5
.equ	T4ICRL6	= 6 ; Timer4 input capture Register Low Bit 6
.equ	T4ICRL7	= 7 ; Timer4 input capture Register Low Bit 7

; T4IFR - Timer4 interrupt flag Register
.equ	T4OFF	= 0 ; Timer4 OverFlow Flag
.equ	T4COF	= 1 ; Timer4 Compare Flag
.equ	T4ICF	= 2 ; Timer4 Input Capture Flag

; T4IMR - Timer4 interrupt mask Register
.equ	T4OIM	= 0 ; Timer4 Overflow Interrupt Mask
.equ	T4CIM	= 1 ; Timer4 Compare Interrupt Mask
.equ	T4CPIM	= 2 ; Timer4 Capture Interrupt Mask

; T4MRA - Timer4 mode Register
.equ	T4CS0	= 0 ; Timer4 Clock Select
.equ	T4CS1	= 1 ; Timer4 Clock Select
.equ	T4PS0	= 2 ; Timer4 Prescaler Select
.equ	T4PS1	= 3 ; Timer4 Prescaler Select
.equ	T4PS2	= 4 ; Timer4 Prescaler Select

; T4MRB - Timer4 mode Register
.equ	T4SCE	= 1 ; Timer4 Software Capture Enable
.equ	T4CNC	= 2 ; Timer4 input Capture Noise Canceller
.equ	T4CE0	= 3 ; Timer4 Capture Edge select
.equ	T4CE1	= 4 ; Timer4 Capture Edge select
.equ	T4ICS0	= 5 ; Timer4 Input Capture Select
.equ	T4ICS1	= 6 ; Timer4 Input Capture Select
.equ	T4ICS2	= 7 ; Timer4 Input Capture Select


; ***** TIMER5 *****************
; GTCCR - General Timer/Counter Control Register
.equ	PSR10	= 0 ; PreScaler Reset
.equ	TSM	= 7 ; Timer/Counter Synchronization Mode

; T5CCR - Timer5 Control Register
.equ	T5CS0	= 0 ; Timer5 Clock Select
.equ	T5CS1	= 1 ; Timer5 Clock Select
.equ	T5CS2	= 2 ; Timer5 Clock Select
.equ	T5CTC	= 3 ; Clear Timer5 on Compare Match

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
.equ	T5OFF	= 0 ; Timer5 Output Overflow Flag
.equ	T5COF	= 1 ; Timer5 Output Compare Output Match Flag

; T5IMR - Timer5 Interrupt Mask Register
.equ	T5OIM	= 0 ; Timer5 Output Overflow Interrupt Mask
.equ	T5CIM	= 1 ; Timer5 Output Compare Interrupt Mask

; T5OCR - Timer5 Output Compare Register
.equ	T5OCRH0	= 0 ; Timer5 Output Compare Register High Bit 8
.equ	T5OCRH1	= 1 ; Timer5 Output Compare Register High Bit 9
.equ	T5OCRH2	= 2 ; Timer5 Output Compare Register High Bit 10
.equ	T5OCRH3	= 3 ; Timer5 Output Compare Register High Bit 11
.equ	T5OCRH4	= 4 ; Timer5 Output Compare Register High Bit 12
.equ	T5OCRH5	= 5 ; Timer5 Output Compare Register High Bit 13
.equ	T5OCRH6	= 6 ; Timer5 Output Compare Register High Bit 14
.equ	T5OCRH7	= 7 ; Timer5 Output Compare Register High Bit 15

.equ	T5OCRL0	= 0 ; Timer5 Output Compare Register Low Bit 0
.equ	T5OCRL1	= 1 ; Timer5 Output Compare Register Low Bit 1
.equ	T5OCRL2	= 2 ; Timer5 Output Compare Register Low Bit 2
.equ	T5OCRL3	= 3 ; Timer5 Output Compare Register Low Bit 3
.equ	T5OCRL4	= 4 ; Timer5 Output Compare Register Low Bit 4
.equ	T5OCRL5	= 5 ; Timer5 Output Compare Register Low Bit 5
.equ	T5OCRL6	= 6 ; Timer5 Output Compare Register Low Bit 6
.equ	T5OCRL7	= 7 ; Timer5 Output Compare Register Low Bit 7

; T5TEMP - Timer5 Temp Register
.equ	T5TEMP0	= 0 ; Timer5 Temp Register Bit 0
.equ	T5TEMP1	= 1 ; Timer5 Temp Register Bit 1
.equ	T5TEMP2	= 2 ; Timer5 Temp Register Bit 2
.equ	T5TEMP3	= 3 ; Timer5 Temp Register Bit 3
.equ	T5TEMP4	= 4 ; Timer5 Temp Register Bit 4
.equ	T5TEMP5	= 5 ; Timer5 Temp Register Bit 5
.equ	T5TEMP6	= 6 ; Timer5 Temp Register Bit 6
.equ	T5TEMP7	= 7 ; Timer5 Temp Register Bit 7


; ***** TMO *****************
; TMOCR - Timer Modulator Output Control Register
.equ	TO1PIS0	= 0 ; Timer modulator Output 1 Port Interface Select
.equ	TO1PIS1	= 1 ; Timer modulator Output 1 Port Interface Select
.equ	TO2PIS0	= 2 ; Timer modulator Output 2 Port Interface Select
.equ	TO2PIS1	= 3 ; Timer modulator Output 2 Port Interface Select
.equ	TO3PIS0	= 4 ; Timer modulator Output 3 Port Interface Select
.equ	TO3PIS1	= 5 ; Timer modulator Output 3 Port Interface Select
.equ	TO4PIS0	= 6 ; Timer modulator Output 4 Port Interface Select
.equ	TO4PIS1	= 7 ; Timer modulator Output 4 Port Interface Select


; ***** TPLF_CAL *****************
; LFCALR1 - LF Receiver Calibration Register 1
.equ	LFSTC0	= 0 ; lf_stim_trim_current
.equ	LFSTC1	= 1 ; lf_stim_trim_current
.equ	LFSTC2	= 2 ; lf_stim_trim_current
.equ	ICOMPRT0	= 3 ; icomp_range_trim
.equ	ICOMPRT1	= 4 ; icomp_range_trim
.equ	SEL150M0	= 5 ; Bandgap Calibration of VREF1
.equ	SEL150M1	= 6 ; Bandgap Calibration of VREF1
.equ	SEL150M2	= 7 ; Bandgap Calibration of VREF1

; LFCALR10 - LF Receiver Calibration Register 10
.equ	LFCALR100	= 0 ; LF Receiver Calibration Register 10 Bit 0
.equ	LFCALR101	= 1 ; LF Receiver Calibration Register 10 Bit 1
.equ	LFCALR102	= 2 ; LF Receiver Calibration Register 10 Bit 2
.equ	LFCALR103	= 3 ; LF Receiver Calibration Register 10 Bit 3
.equ	LFCALR104	= 4 ; LF Receiver Calibration Register 10 Bit 4
.equ	LFCALR105	= 5 ; LF Receiver Calibration Register 10 Bit 5
.equ	LFCALR106	= 6 ; LF Receiver Calibration Register 10 Bit 6

; LFCALR11 - LF Receiver Calibration Register 11
.equ	LFCALR110	= 0 ; LF Receiver Calibration Register 11 Bit 0
.equ	LFCALR111	= 1 ; LF Receiver Calibration Register 11 Bit 1
.equ	LFCALR112	= 2 ; LF Receiver Calibration Register 11 Bit 2
.equ	LFCALR113	= 3 ; LF Receiver Calibration Register 11 Bit 3
.equ	LFCALR114	= 4 ; LF Receiver Calibration Register 11 Bit 4
.equ	LFCALR115	= 5 ; LF Receiver Calibration Register 11 Bit 5
.equ	LFCALR116	= 6 ; LF Receiver Calibration Register 11 Bit 6
.equ	LFCALR117	= 7 ; LF Receiver Calibration Register 11 Bit 7

; LFCALR12 - LF Receiver Calibration Register 12
.equ	LFCALR120	= 0 ; LF Receiver Calibration Register 12 Bit 0
.equ	LFCALR121	= 1 ; LF Receiver Calibration Register 12 Bit 1
.equ	LFCALR122	= 2 ; LF Receiver Calibration Register 12 Bit 2
.equ	LFCALR123	= 3 ; LF Receiver Calibration Register 12 Bit 3
.equ	LFCALR124	= 4 ; LF Receiver Calibration Register 12 Bit 4
.equ	LFCALR125	= 5 ; LF Receiver Calibration Register 12 Bit 5
.equ	LFCALR126	= 6 ; LF Receiver Calibration Register 12 Bit 6
.equ	LFCALR127	= 7 ; LF Receiver Calibration Register 12 Bit 7

; LFCALR13 - LF Receiver Calibration Register 13
.equ	LFCALR130	= 0 ; LF Receiver Calibration Register 13 Bit 0
.equ	LFCALR131	= 1 ; LF Receiver Calibration Register 13 Bit 1
.equ	LFCALR132	= 2 ; LF Receiver Calibration Register 13 Bit 2
.equ	LFCALR133	= 3 ; LF Receiver Calibration Register 13 Bit 3
.equ	LFCALR134	= 4 ; LF Receiver Calibration Register 13 Bit 4
.equ	LFCALR135	= 5 ; LF Receiver Calibration Register 13 Bit 5
.equ	LFCALR136	= 6 ; LF Receiver Calibration Register 13 Bit 6
.equ	LFCALR137	= 7 ; LF Receiver Calibration Register 13 Bit 7

; LFCALR14 - LF Receiver Calibration Register 14
.equ	LFCALR140	= 0 ; LF Receiver Calibration Register 14 Bit 0
.equ	LFCALR141	= 1 ; LF Receiver Calibration Register 14 Bit 1
.equ	LFCALR142	= 2 ; LF Receiver Calibration Register 14 Bit 2
.equ	LFCALR143	= 3 ; LF Receiver Calibration Register 14 Bit 3
.equ	LFCALR144	= 4 ; LF Receiver Calibration Register 14 Bit 4
.equ	LFCALR145	= 5 ; LF Receiver Calibration Register 14 Bit 5
.equ	LFCALR146	= 6 ; LF Receiver Calibration Register 14 Bit 6

; LFCALR15 - LF Receiver Calibration Register 15
.equ	LFCALR150	= 0 ; LF Receiver Calibration Register 15 Bit 0
.equ	LFCALR151	= 1 ; LF Receiver Calibration Register 15 Bit 1
.equ	LFCALR152	= 2 ; LF Receiver Calibration Register 15 Bit 2
.equ	LFCALR153	= 3 ; LF Receiver Calibration Register 15 Bit 3
.equ	LFCALR154	= 4 ; LF Receiver Calibration Register 15 Bit 4
.equ	LFCALR155	= 5 ; LF Receiver Calibration Register 15 Bit 5
.equ	LFCALR156	= 6 ; LF Receiver Calibration Register 15 Bit 6
.equ	LFCALR157	= 7 ; LF Receiver Calibration Register 15 Bit 7

; LFCALR16 - LF Receiver Calibration Register 16
.equ	LFCALR160	= 0 ; LF Receiver Calibration Register 16 Bit 0
.equ	LFCALR161	= 1 ; LF Receiver Calibration Register 16 Bit 1
.equ	LFCALR162	= 2 ; LF Receiver Calibration Register 16 Bit 2
.equ	LFCALR163	= 3 ; LF Receiver Calibration Register 16 Bit 3
.equ	LFCALR164	= 4 ; LF Receiver Calibration Register 16 Bit 4

; LFCALR17 - LF Receiver Calibration Register 17
.equ	LFCALR170	= 0 ; LF Receiver Calibration Register 17 Bit 0
.equ	LFCALR171	= 1 ; LF Receiver Calibration Register 17 Bit 1
.equ	LFCALR172	= 2 ; LF Receiver Calibration Register 17 Bit 2
.equ	LFCALR173	= 3 ; LF Receiver Calibration Register 17 Bit 3
.equ	LFCALR174	= 4 ; LF Receiver Calibration Register 17 Bit 4

; LFCALR18 - LF Receiver Calibration Register 18
.equ	LFCALR180	= 0 ; LF Receiver Calibration Register 18 Bit 0
.equ	LFCALR181	= 1 ; LF Receiver Calibration Register 18 Bit 1
.equ	LFCALR182	= 2 ; LF Receiver Calibration Register 18 Bit 2
.equ	LFCALR183	= 3 ; LF Receiver Calibration Register 18 Bit 3
.equ	LFCALR184	= 4 ; LF Receiver Calibration Register 18 Bit 4
.equ	LFCALR185	= 5 ; LF Receiver Calibration Register 18 Bit 5
.equ	LFCALR186	= 6 ; LF Receiver Calibration Register 18 Bit 6
.equ	LFCALR187	= 7 ; LF Receiver Calibration Register 18 Bit 7

; LFCALR19 - LF Receiver Calibration Register 19
.equ	LFCALR190	= 0 ; LF Receiver Calibration Register 19 Bit 0
.equ	LFCALR191	= 1 ; LF Receiver Calibration Register 19 Bit 1
.equ	LFCALR192	= 2 ; LF Receiver Calibration Register 19 Bit 2
.equ	LFCALR193	= 3 ; LF Receiver Calibration Register 19 Bit 3
.equ	LFCALR194	= 4 ; LF Receiver Calibration Register 19 Bit 4
.equ	LFCALR195	= 5 ; LF Receiver Calibration Register 19 Bit 5
.equ	LFCALR196	= 6 ; LF Receiver Calibration Register 19 Bit 6

; LFCALR2 - LF Receiver Calibration Register 2
.equ	LFSTRES0	= 0 ; lf_stim_trim_res
.equ	LFSTRES1	= 1 ; lf_stim_trim_res
.equ	LFSTRES2	= 2 ; lf_stim_trim_res
.equ	LFSTRES3	= 3 ; lf_stim_trim_res
.equ	LFSTRES4	= 4 ; lf_stim_trim_res
.equ	LFSTRES5	= 5 ; lf_stim_trim_res
.equ	LFSRM	= 6 ; lf_stim_res_mode
.equ	TIKOMPD	= 7 ; trim_ikomp_data

; LFCALR20 - LF Receiver Calibration Register 20
.equ	LFCALR200	= 0 ; LF Receiver Calibration Register 20 Bit 0
.equ	LFCALR201	= 1 ; LF Receiver Calibration Register 20 Bit 1
.equ	LFCALR202	= 2 ; LF Receiver Calibration Register 20 Bit 2
.equ	LFCALR203	= 3 ; LF Receiver Calibration Register 20 Bit 3
.equ	LFCALR204	= 4 ; LF Receiver Calibration Register 20 Bit 4
.equ	LFCALR205	= 5 ; LF Receiver Calibration Register 20 Bit 5
.equ	LFCALR206	= 6 ; LF Receiver Calibration Register 20 Bit 6
.equ	LFCALR207	= 7 ; LF Receiver Calibration Register 20 Bit 7

; LFCALR21 - LF Receiver Calibration Register 21
.equ	LFCALR210	= 0 ; LF Receiver Calibration Register 21 Bit 0
.equ	LFCALR211	= 1 ; LF Receiver Calibration Register 21 Bit 1
.equ	LFCALR212	= 2 ; LF Receiver Calibration Register 21 Bit 2
.equ	LFCALR213	= 3 ; LF Receiver Calibration Register 21 Bit 3
.equ	LFCALR214	= 4 ; LF Receiver Calibration Register 21 Bit 4
.equ	LFCALR215	= 5 ; LF Receiver Calibration Register 21 Bit 5
.equ	LFCALR216	= 6 ; LF Receiver Calibration Register 21 Bit 6
.equ	LFCALR217	= 7 ; LF Receiver Calibration Register 21 Bit 7

; LFCALR22 - LF Receiver Calibration Register 22
.equ	LFCALR220	= 0 ; LF Receiver Calibration Register 22 Bit 0
.equ	LFCALR221	= 1 ; LF Receiver Calibration Register 22 Bit 1
.equ	LFCALR222	= 2 ; LF Receiver Calibration Register 22 Bit 2
.equ	LFCALR223	= 3 ; LF Receiver Calibration Register 22 Bit 3
.equ	LFCALR224	= 4 ; LF Receiver Calibration Register 22 Bit 4
.equ	LFCALR225	= 5 ; LF Receiver Calibration Register 22 Bit 5
.equ	LFCALR226	= 6 ; LF Receiver Calibration Register 22 Bit 6
.equ	LFCALR227	= 7 ; LF Receiver Calibration Register 22 Bit 7

; LFCALR23 - LF Receiver Calibration Register 23
.equ	LFCALR230	= 0 ; LF Receiver Calibration Register 23 Bit 0
.equ	LFCALR231	= 1 ; LF Receiver Calibration Register 23 Bit 1
.equ	LFCALR232	= 2 ; LF Receiver Calibration Register 23 Bit 2
.equ	LFCALR233	= 3 ; LF Receiver Calibration Register 23 Bit 3
.equ	LFCALR234	= 4 ; LF Receiver Calibration Register 23 Bit 4
.equ	LFCALR235	= 5 ; LF Receiver Calibration Register 23 Bit 5
.equ	LFCALR236	= 6 ; LF Receiver Calibration Register 23 Bit 6

; LFCALR24 - LF Receiver Calibration Register 24
.equ	LFCALR240	= 0 ; LF Receiver Calibration Register 24 Bit 0
.equ	LFCALR241	= 1 ; LF Receiver Calibration Register 24 Bit 1
.equ	LFCALR242	= 2 ; LF Receiver Calibration Register 24 Bit 2
.equ	LFCALR243	= 3 ; LF Receiver Calibration Register 24 Bit 3
.equ	LFCALR244	= 4 ; LF Receiver Calibration Register 24 Bit 4
.equ	LFCALR245	= 5 ; LF Receiver Calibration Register 24 Bit 5
.equ	LFCALR246	= 6 ; LF Receiver Calibration Register 24 Bit 6
.equ	LFCALR247	= 7 ; LF Receiver Calibration Register 24 Bit 7

; LFCALR25 - LF Receiver Calibration Register 25
.equ	LFCALR250	= 0 ; LF Receiver Calibration Register 25 Bit 0
.equ	LFCALR251	= 1 ; LF Receiver Calibration Register 25 Bit 1
.equ	LFCALR252	= 2 ; LF Receiver Calibration Register 25 Bit 2
.equ	LFCALR253	= 3 ; LF Receiver Calibration Register 25 Bit 3
.equ	LFCALR254	= 4 ; LF Receiver Calibration Register 25 Bit 4

; LFCALR26 - LF Receiver Calibration Register 26
.equ	LFCALR260	= 0 ; LF Receiver Calibration Register 26 Bit 0
.equ	LFCALR261	= 1 ; LF Receiver Calibration Register 26 Bit 1
.equ	LFCALR262	= 2 ; LF Receiver Calibration Register 26 Bit 2
.equ	LFCALR263	= 3 ; LF Receiver Calibration Register 26 Bit 3
.equ	LFCALR264	= 4 ; LF Receiver Calibration Register 26 Bit 4

; LFCALR27 - LF Receiver Calibration Register 27
.equ	LFCALR270	= 0 ; LF Receiver Calibration Register 27 Bit 0
.equ	LFCALR271	= 1 ; LF Receiver Calibration Register 27 Bit 1
.equ	LFCALR272	= 2 ; LF Receiver Calibration Register 27 Bit 2
.equ	LFCALR273	= 3 ; LF Receiver Calibration Register 27 Bit 3
.equ	LFCALR274	= 4 ; LF Receiver Calibration Register 27 Bit 4
.equ	LFCALR275	= 5 ; LF Receiver Calibration Register 27 Bit 5
.equ	LFCALR276	= 6 ; LF Receiver Calibration Register 27 Bit 6
.equ	LFCALR277	= 7 ; LF Receiver Calibration Register 27 Bit 7

; LFCALR28 - LF Receiver Calibration Register 28
.equ	LFCALR280	= 0 ; LF Receiver Calibration Register 28 Bit 0
.equ	LFCALR281	= 1 ; LF Receiver Calibration Register 28 Bit 1
.equ	LFCALR282	= 2 ; LF Receiver Calibration Register 28 Bit 2
.equ	LFCALR283	= 3 ; LF Receiver Calibration Register 28 Bit 3
.equ	LFCALR284	= 4 ; LF Receiver Calibration Register 28 Bit 4
.equ	LFCALR285	= 5 ; LF Receiver Calibration Register 28 Bit 5
.equ	LFCALR286	= 6 ; LF Receiver Calibration Register 28 Bit 6

; LFCALR29 - LF Receiver Calibration Register 29
.equ	LFCALR290	= 0 ; LF Receiver Calibration Register 29 Bit 0
.equ	LFCALR291	= 1 ; LF Receiver Calibration Register 29 Bit 1
.equ	LFCALR292	= 2 ; LF Receiver Calibration Register 29 Bit 2
.equ	LFCALR293	= 3 ; LF Receiver Calibration Register 29 Bit 3
.equ	LFCALR294	= 4 ; LF Receiver Calibration Register 29 Bit 4
.equ	LFCALR295	= 5 ; LF Receiver Calibration Register 29 Bit 5
.equ	LFCALR296	= 6 ; LF Receiver Calibration Register 29 Bit 6
.equ	LFCALR297	= 7 ; LF Receiver Calibration Register 29 Bit 7

; LFCALR3 - LF Receiver Calibration Register 3
.equ	TCGAIN10	= 0 ; Trim coarse gain
.equ	TCGAIN11	= 1 ; Trim coarse gain
.equ	TCGAIN12	= 2 ; Trim coarse gain
.equ	TCGAIN13	= 3 ; Trim coarse gain
.equ	TCGAIN14	= 4 ; Trim coarse gain
.equ	TCGAIN15	= 5 ; Trim coarse gain
.equ	TCGAIN16	= 6 ; Trim coarse gain
.equ	TCGAIN17	= 7 ; Trim coarse gain

; LFCALR30 - LF Receiver Calibration Register 30
.equ	LFCALR300	= 0 ; LF Receiver Calibration Register 30 Bit 0
.equ	LFCALR301	= 1 ; LF Receiver Calibration Register 30 Bit 1
.equ	LFCALR302	= 2 ; LF Receiver Calibration Register 30 Bit 2
.equ	LFCALR303	= 3 ; LF Receiver Calibration Register 30 Bit 3
.equ	LFCALR304	= 4 ; LF Receiver Calibration Register 30 Bit 4
.equ	LFCALR305	= 5 ; LF Receiver Calibration Register 30 Bit 5
.equ	LFCALR306	= 6 ; LF Receiver Calibration Register 30 Bit 6
.equ	LFCALR307	= 7 ; LF Receiver Calibration Register 30 Bit 7

; LFCALR31 - LF Receiver Calibration Register 31
.equ	LFCALR310	= 0 ; LF Receiver Calibration Register 31 Bit 0
.equ	LFCALR311	= 1 ; LF Receiver Calibration Register 31 Bit 1
.equ	LFCALR312	= 2 ; LF Receiver Calibration Register 31 Bit 2
.equ	LFCALR313	= 3 ; LF Receiver Calibration Register 31 Bit 3
.equ	LFCALR314	= 4 ; LF Receiver Calibration Register 31 Bit 4
.equ	LFCALR315	= 5 ; LF Receiver Calibration Register 31 Bit 5
.equ	LFCALR316	= 6 ; LF Receiver Calibration Register 31 Bit 6
.equ	LFCALR317	= 7 ; LF Receiver Calibration Register 31 Bit 7

; LFCALR32 - LF Receiver Calibration Register 32
.equ	LFCALR320	= 0 ; LF Receiver Calibration Register 32 Bit 0
.equ	LFCALR321	= 1 ; LF Receiver Calibration Register 32 Bit 1
.equ	LFCALR322	= 2 ; LF Receiver Calibration Register 32 Bit 2
.equ	LFCALR323	= 3 ; LF Receiver Calibration Register 32 Bit 3
.equ	LFCALR324	= 4 ; LF Receiver Calibration Register 32 Bit 4
.equ	LFCALR325	= 5 ; LF Receiver Calibration Register 32 Bit 5
.equ	LFCALR326	= 6 ; LF Receiver Calibration Register 32 Bit 6

; LFCALR33 - LF Receiver Calibration Register 33
.equ	LFCALR330	= 0 ; LF Receiver Calibration Register 33 Bit 0
.equ	LFCALR331	= 1 ; LF Receiver Calibration Register 33 Bit 1
.equ	LFCALR332	= 2 ; LF Receiver Calibration Register 33 Bit 2
.equ	LFCALR333	= 3 ; LF Receiver Calibration Register 33 Bit 3
.equ	LFCALR334	= 4 ; LF Receiver Calibration Register 33 Bit 4
.equ	LFCALR335	= 5 ; LF Receiver Calibration Register 33 Bit 5
.equ	LFCALR336	= 6 ; LF Receiver Calibration Register 33 Bit 6
.equ	LFCALR337	= 7 ; LF Receiver Calibration Register 33 Bit 7

; LFCALR34 - LF Receiver Calibration Register 34
.equ	LFCALR340	= 0 ; LF Receiver Calibration Register 34 Bit 0
.equ	LFCALR341	= 1 ; LF Receiver Calibration Register 34 Bit 1
.equ	LFCALR342	= 2 ; LF Receiver Calibration Register 34 Bit 2
.equ	LFCALR343	= 3 ; LF Receiver Calibration Register 34 Bit 3
.equ	LFCALR344	= 4 ; LF Receiver Calibration Register 34 Bit 4

; LFCALR35 - LF Receiver Calibration Register 35
.equ	LFCALR350	= 0 ; LF Receiver Calibration Register 35 Bit 0
.equ	LFCALR351	= 1 ; LF Receiver Calibration Register 35 Bit 1
.equ	LFCALR352	= 2 ; LF Receiver Calibration Register 35 Bit 2
.equ	LFCALR353	= 3 ; LF Receiver Calibration Register 35 Bit 3
.equ	LFCALR354	= 4 ; LF Receiver Calibration Register 35 Bit 4
.equ	LFCALR355	= 5 ; LF Receiver Calibration Register 35 Bit 5
.equ	LFCALR356	= 6 ; LF Receiver Calibration Register 35 Bit 6
.equ	LFCALR357	= 7 ; LF Receiver Calibration Register 35 Bit 7

; LFCALR36 - LF Receiver Calibration Register 36
.equ	LFCALR360	= 0 ; LF Receiver Calibration Register 36 Bit 0
.equ	LFCALR361	= 1 ; LF Receiver Calibration Register 36 Bit 1
.equ	LFCALR362	= 2 ; LF Receiver Calibration Register 36 Bit 2
.equ	LFCALR363	= 3 ; LF Receiver Calibration Register 36 Bit 3
.equ	LFCALR364	= 4 ; LF Receiver Calibration Register 36 Bit 4
.equ	LFCALR365	= 5 ; LF Receiver Calibration Register 36 Bit 5
.equ	LFCALR366	= 6 ; LF Receiver Calibration Register 36 Bit 6

; LFCALR37 - LF Receiver Calibration Register 37
.equ	LFCALR370	= 0 ; LF Receiver Calibration Register 37 Bit 0
.equ	LFCALR371	= 1 ; LF Receiver Calibration Register 37 Bit 1
.equ	LFCALR372	= 2 ; LF Receiver Calibration Register 37 Bit 2
.equ	LFCALR373	= 3 ; LF Receiver Calibration Register 37 Bit 3
.equ	LFCALR374	= 4 ; LF Receiver Calibration Register 37 Bit 4
.equ	LFCALR375	= 5 ; LF Receiver Calibration Register 37 Bit 5

; LFCALR38 - LF Receiver Calibration Register 38
.equ	LFCALR380	= 0 ; LF Receiver Calibration Register 38 Bit 0
.equ	LFCALR381	= 1 ; LF Receiver Calibration Register 38 Bit 1
.equ	LFCALR382	= 2 ; LF Receiver Calibration Register 38 Bit 2
.equ	LFCALR383	= 3 ; LF Receiver Calibration Register 38 Bit 3

; LFCALR39 - LF Receiver Calibration Register 39
.equ	LFCALR390	= 0 ; LF Receiver Calibration Register 39 Bit 0
.equ	LFCALR391	= 1 ; LF Receiver Calibration Register 39 Bit 1
.equ	LFCALR392	= 2 ; LF Receiver Calibration Register 39 Bit 2
.equ	LFCALR393	= 3 ; LF Receiver Calibration Register 39 Bit 3

; LFCALR4 - LF Receiver Calibration Register 4
.equ	TCGAIN20	= 0 ; Trim coarse gain bit 8
.equ	TCGAIN21	= 1 ; Trim coarse gain bit 9
.equ	TCGAIN22	= 2 ; Trim coarse gain bit 10
.equ	TCGAIN23	= 3 ; Trim coarse gain bit 11
.equ	TCGAIN24	= 4 ; Trim coarse gain bit 12
.equ	TCGAIN25	= 5 ; Trim coarse gain bit 13
.equ	TCGAIN26	= 6 ; Trim coarse gain bit 14
.equ	TCGAIN27	= 7 ; Trim coarse gain bit 15

; LFCALR40 - LF Receiver Calibration Register 40
.equ	LFCALR400	= 0 ; LF Receiver Calibration Register 40 Bit 0
.equ	LFCALR401	= 1 ; LF Receiver Calibration Register 40 Bit 1
.equ	LFCALR402	= 2 ; LF Receiver Calibration Register 40 Bit 2
.equ	LFCALR403	= 3 ; LF Receiver Calibration Register 40 Bit 3

; LFCALR41 - LF Receiver Calibration Register 41
.equ	LFCALR410	= 0 ; LF Receiver Calibration Register 41 Bit 0
.equ	LFCALR411	= 1 ; LF Receiver Calibration Register 41 Bit 1
.equ	LFCALR412	= 2 ; LF Receiver Calibration Register 41 Bit 2
.equ	LFCALR413	= 3 ; LF Receiver Calibration Register 41 Bit 3
.equ	LFCALR414	= 4 ; LF Receiver Calibration Register 41 Bit 4
.equ	LFCALR415	= 5 ; LF Receiver Calibration Register 41 Bit 5
.equ	LFCALR416	= 6 ; LF Receiver Calibration Register 41 Bit 6
.equ	LFCALR417	= 7 ; LF Receiver Calibration Register 41 Bit 7

; LFCALR42 - LF Receiver Calibration Register 42
.equ	LFCALR420	= 0 ; LF Receiver Calibration Register 42 Bit 0
.equ	LFCALR421	= 1 ; LF Receiver Calibration Register 42 Bit 1
.equ	LFCALR422	= 2 ; LF Receiver Calibration Register 42 Bit 2
.equ	LFCALR423	= 3 ; LF Receiver Calibration Register 42 Bit 3
.equ	LFCALR424	= 4 ; LF Receiver Calibration Register 42 Bit 4
.equ	LFCALR425	= 5 ; LF Receiver Calibration Register 42 Bit 5
.equ	LFCALR426	= 6 ; LF Receiver Calibration Register 42 Bit 6
.equ	LFCALR427	= 7 ; LF Receiver Calibration Register 42 Bit 7

; LFCALR43 - LF Receiver Calibration Register 43
.equ	LFCALR430	= 0 ; LF Receiver Calibration Register 43 Bit 0
.equ	LFCALR431	= 1 ; LF Receiver Calibration Register 43 Bit 1
.equ	LFCALR432	= 2 ; LF Receiver Calibration Register 43 Bit 2
.equ	LFCALR433	= 3 ; LF Receiver Calibration Register 43 Bit 3
.equ	LFCALR434	= 4 ; LF Receiver Calibration Register 43 Bit 4
.equ	LFCALR435	= 5 ; LF Receiver Calibration Register 43 Bit 5
.equ	LFCALR436	= 6 ; LF Receiver Calibration Register 43 Bit 6
.equ	LFCALR437	= 7 ; LF Receiver Calibration Register 43 Bit 7

; LFCALR44 - LF Receiver Calibration Register 44
.equ	LFCALR440	= 0 ; LF Receiver Calibration Register 44 Bit 0
.equ	LFCALR441	= 1 ; LF Receiver Calibration Register 44 Bit 1
.equ	LFCALR442	= 2 ; LF Receiver Calibration Register 44 Bit 2
.equ	LFCALR443	= 3 ; LF Receiver Calibration Register 44 Bit 3
.equ	LFCALR444	= 4 ; LF Receiver Calibration Register 44 Bit 4
.equ	LFCALR445	= 5 ; LF Receiver Calibration Register 44 Bit 5

; LFCALR45 - LF Receiver Calibration Register 45
.equ	LFCALR450	= 0 ; LF Receiver Calibration Register 45 Bit 0
.equ	LFCALR451	= 1 ; LF Receiver Calibration Register 45 Bit 1
.equ	LFCALR452	= 2 ; LF Receiver Calibration Register 45 Bit 2
.equ	LFCALR453	= 3 ; LF Receiver Calibration Register 45 Bit 3
.equ	LFCALR454	= 4 ; LF Receiver Calibration Register 45 Bit 4
.equ	LFCALR455	= 5 ; LF Receiver Calibration Register 45 Bit 5
.equ	LFCALR456	= 6 ; LF Receiver Calibration Register 45 Bit 6
.equ	LFCALR457	= 7 ; LF Receiver Calibration Register 45 Bit 7

; LFCALR46 - LF Receiver Calibration Register 46
.equ	LFCALR460	= 0 ; LF Receiver Calibration Register 46 Bit 0
.equ	LFCALR461	= 1 ; LF Receiver Calibration Register 46 Bit 1
.equ	LFCALR462	= 2 ; LF Receiver Calibration Register 46 Bit 2
.equ	LFCALR463	= 3 ; LF Receiver Calibration Register 46 Bit 3
.equ	LFCALR464	= 4 ; LF Receiver Calibration Register 46 Bit 4
.equ	LFCALR465	= 5 ; LF Receiver Calibration Register 46 Bit 5
.equ	LFCALR466	= 6 ; LF Receiver Calibration Register 46 Bit 6
.equ	LFCALR467	= 7 ; LF Receiver Calibration Register 46 Bit 7

; LFCALR47 - LF Receiver Calibration Register 47
.equ	LFCALR470	= 0 ; LF Receiver Calibration Register 47 Bit 0
.equ	LFCALR471	= 1 ; LF Receiver Calibration Register 47 Bit 1
.equ	LFCALR472	= 2 ; LF Receiver Calibration Register 47 Bit 2
.equ	LFCALR473	= 3 ; LF Receiver Calibration Register 47 Bit 3
.equ	LFCALR474	= 4 ; LF Receiver Calibration Register 47 Bit 4
.equ	LFCALR475	= 5 ; LF Receiver Calibration Register 47 Bit 5
.equ	LFCALR476	= 6 ; LF Receiver Calibration Register 47 Bit 6
.equ	LFCALR477	= 7 ; LF Receiver Calibration Register 47 Bit 7

; LFCALR48 - LF Receiver Calibration Register 48
.equ	LFCALR480	= 0 ; LF Receiver Calibration Register 48 Bit 0
.equ	LFCALR481	= 1 ; LF Receiver Calibration Register 48 Bit 1
.equ	LFCALR482	= 2 ; LF Receiver Calibration Register 48 Bit 2
.equ	LFCALR483	= 3 ; LF Receiver Calibration Register 48 Bit 3
.equ	LFCALR484	= 4 ; LF Receiver Calibration Register 48 Bit 4
.equ	LFCALR485	= 5 ; LF Receiver Calibration Register 48 Bit 5

; LFCALR49 - LF Receiver Calibration Register 49
.equ	LFCALR490	= 0 ; LF Receiver Calibration Register 49 Bit 0
.equ	LFCALR491	= 1 ; LF Receiver Calibration Register 49 Bit 1
.equ	LFCALR492	= 2 ; LF Receiver Calibration Register 49 Bit 2
.equ	LFCALR493	= 3 ; LF Receiver Calibration Register 49 Bit 3
.equ	LFCALR494	= 4 ; LF Receiver Calibration Register 49 Bit 4
.equ	LFCALR495	= 5 ; LF Receiver Calibration Register 49 Bit 5
.equ	LFCALR496	= 6 ; LF Receiver Calibration Register 49 Bit 6
.equ	LFCALR497	= 7 ; LF Receiver Calibration Register 49 Bit 7

; LFCALR5 - LF Receiver Calibration Register 5
.equ	TCGAIN30	= 0 ; Trim coarse gain bit 16
.equ	TCGAIN31	= 1 ; Trim coarse gain bit 17
.equ	TCGAIN32	= 2 ; Trim coarse gain bit 18
.equ	TCGAIN34	= 4 ; Trim coarse gain bit 20
.equ	TCGAIN35	= 5 ; Trim coarse gain bit 21
.equ	TCGAIN36	= 6 ; Trim coarse gain bit 22
.equ	TCGAIN37	= 7 ; Trim coarse gain bit 23

; LFCALR50 - LF Receiver Calibration Register 50
.equ	LFCALR500	= 0 ; LF Receiver Calibration Register 50 Bit 0
.equ	LFCALR501	= 1 ; LF Receiver Calibration Register 50 Bit 1
.equ	LFCALR502	= 2 ; LF Receiver Calibration Register 50 Bit 2
.equ	LFCALR503	= 3 ; LF Receiver Calibration Register 50 Bit 3
.equ	LFCALR504	= 4 ; LF Receiver Calibration Register 50 Bit 4
.equ	LFCALR505	= 5 ; LF Receiver Calibration Register 50 Bit 5
.equ	LFCALR506	= 6 ; LF Receiver Calibration Register 50 Bit 6
.equ	LFCALR507	= 7 ; LF Receiver Calibration Register 50 Bit 7

; LFCALR51 - LF Receiver Calibration Register 51
.equ	LFCALR510	= 0 ; LF Receiver Calibration Register 51 Bit 0
.equ	LFCALR511	= 1 ; LF Receiver Calibration Register 51 Bit 1
.equ	LFCALR512	= 2 ; LF Receiver Calibration Register 51 Bit 2
.equ	LFCALR513	= 3 ; LF Receiver Calibration Register 51 Bit 3
.equ	LFCALR514	= 4 ; LF Receiver Calibration Register 51 Bit 4
.equ	LFCALR515	= 5 ; LF Receiver Calibration Register 51 Bit 5
.equ	LFCALR516	= 6 ; LF Receiver Calibration Register 51 Bit 6
.equ	LFCALR517	= 7 ; LF Receiver Calibration Register 51 Bit 7

; LFCALR52 - LF Receiver Calibration Register 52
.equ	LFCALR520	= 0 ; LF Receiver Calibration Register 52 Bit 0
.equ	LFCALR521	= 1 ; LF Receiver Calibration Register 52 Bit 1
.equ	LFCALR522	= 2 ; LF Receiver Calibration Register 52 Bit 2
.equ	LFCALR523	= 3 ; LF Receiver Calibration Register 52 Bit 3
.equ	LFCALR524	= 4 ; LF Receiver Calibration Register 52 Bit 4
.equ	LFCALR525	= 5 ; LF Receiver Calibration Register 52 Bit 5

; LFCALR53 - LF Receiver Calibration Register 53
.equ	LFCALR530	= 0 ; LF Receiver Calibration Register 53 Bit 0
.equ	LFCALR531	= 1 ; LF Receiver Calibration Register 53 Bit 1
.equ	LFCALR532	= 2 ; LF Receiver Calibration Register 53 Bit 2
.equ	LFCALR533	= 3 ; LF Receiver Calibration Register 53 Bit 3
.equ	LFCALR534	= 4 ; LF Receiver Calibration Register 53 Bit 4
.equ	LFCALR535	= 5 ; LF Receiver Calibration Register 53 Bit 5
.equ	LFCALR536	= 6 ; LF Receiver Calibration Register 53 Bit 6
.equ	LFCALR537	= 7 ; LF Receiver Calibration Register 53 Bit 7

; LFCALR6 - LF Receiver Calibration Register 6
.equ	TCGAIN40	= 0 ; Trim coarse gain bit 24
.equ	TCGAIN41	= 1 ; Trim coarse gain bit 25
.equ	TCGAIN42	= 2 ; Trim coarse gain bit 26
.equ	TCGAIN43	= 3 ; Trim coarse gain bit 27
.equ	TCGAIN44	= 4 ; Trim coarse gain bit 28

; LFCALR7 - LF Receiver Calibration Register 7
.equ	LFCALR70	= 0 ; LF Receiver Calibration Register 7 Bit 0
.equ	LFCALR71	= 1 ; LF Receiver Calibration Register 7 Bit 1
.equ	LFCALR72	= 2 ; LF Receiver Calibration Register 7 Bit 2
.equ	LFCALR73	= 3 ; LF Receiver Calibration Register 7 Bit 3
.equ	LFCALR74	= 4 ; LF Receiver Calibration Register 7 Bit 4
.equ	LFCALR75	= 5 ; LF Receiver Calibration Register 7 Bit 5
.equ	LFCALR76	= 6 ; LF Receiver Calibration Register 7 Bit 6
.equ	LFCALR77	= 7 ; LF Receiver Calibration Register 7 Bit 7

; LFCALR8 - LF Receiver Calibration Register 8
.equ	LFCALR80	= 0 ; LF Receiver Calibration Register 8 Bit 0
.equ	LFCALR81	= 1 ; LF Receiver Calibration Register 8 Bit 1
.equ	LFCALR82	= 2 ; LF Receiver Calibration Register 8 Bit 2
.equ	LFCALR83	= 3 ; LF Receiver Calibration Register 8 Bit 3
.equ	LFCALR84	= 4 ; LF Receiver Calibration Register 8 Bit 4

; LFCALR9 - LF Receiver Calibration Register 9
.equ	LFCALR90	= 0 ; LF Receiver Calibration Register 9 Bit 0
.equ	LFCALR91	= 1 ; LF Receiver Calibration Register 9 Bit 1
.equ	LFCALR92	= 2 ; LF Receiver Calibration Register 9 Bit 2
.equ	LFCALR93	= 3 ; LF Receiver Calibration Register 9 Bit 3
.equ	LFCALR94	= 4 ; LF Receiver Calibration Register 9 Bit 4
.equ	LFCALR95	= 5 ; LF Receiver Calibration Register 9 Bit 5
.equ	LFCALR96	= 6 ; LF Receiver Calibration Register 9 Bit 6
.equ	LFCALR97	= 7 ; LF Receiver Calibration Register 9 Bit 7

; LFCPR - LF Receiver Calibration Protect Register
.equ	LFCALP	= 0 ; LF Calibration Protection
.equ	LFCALRY	= 1 ; LF Calibration Ready
.equ	TPCD	= 6 ; Transponder Constant Disable
.equ	LFCPCE	= 7 ; LF Calibration Protect Change Enable

; SRCCAL - Slow RC oscillator calibration
.equ	SRCCAL1	= 0 ; Slow RC oscillator calibration bit 1
.equ	SRCCAL2	= 1 ; Slow RC oscillator calibration bit 2
.equ	SRCCAL3	= 2 ; Slow RC oscillator calibration bit 3
.equ	SRCCAL4	= 3 ; Slow RC oscillator calibration bit 4
.equ	SRCCAL5	= 4 ; Slow RC oscillator calibration bit 5
.equ	SRCCAL6	= 5 ; Slow RC oscillator calibration bit 6
.equ	SRCCAL7	= 6 ; Slow RC oscillator calibration bit 7
.equ	SRCCAL8	= 7 ; Slow RC oscillator calibration bit 8

; SRCCALL - Slow RC oscillator calibration LSB
.equ	SRCCAL0	= 0 ; Slow RC oscillator calibration bit 0

; SRCTCAL - SRC oscillator Temperature Compensation register
.equ	SRCTC0	= 0 ; SRC Oscillator Temperature Compensation
.equ	SRCTC1	= 1 ; SRC Oscillator Temperature Compensation
.equ	SRCTC2	= 2 ; SRC Oscillator Temperature Compensation
.equ	SRCS0	= 3 ; SRC Oscillator Select delta current
.equ	SRCS1	= 4 ; SRC Oscillator Select delta current
.equ	DIS_SRC	= 6 ; Disable SRC Bandgap
.equ	HOLD_SRC	= 7 ; Stop SRC-Osccillator output

; TPCALR1 - Transponder Calibration Register 1
.equ	TPBG_IREF0	= 0 ; Transponder Bandgap IREF
.equ	TPBG_IREF1	= 1 ; Transponder Bandgap IREF
.equ	TPBG_IREF2	= 2 ; Transponder Bandgap IREF
.equ	TPBG_IREF3	= 3 ; Transponder Bandgap IREF
.equ	TPBG_IREF4	= 4 ; Transponder Bandgap IREF
.equ	TPBG_IREF5	= 5 ; Transponder Bandgap IREF

; TPCALR10 - Transponder Calibration Register 10
.equ	TPCALR100	= 0 ; Transponder Calibration Register 10 Bit 0
.equ	TPCALR101	= 1 ; Transponder Calibration Register 10 Bit 1
.equ	TPCALR102	= 2 ; Transponder Calibration Register 10 Bit 2
.equ	TPCALR103	= 3 ; Transponder Calibration Register 10 Bit 3
.equ	TPCALR104	= 4 ; Transponder Calibration Register 10 Bit 4
.equ	TPCALR105	= 5 ; Transponder Calibration Register 10 Bit 5
.equ	TPCALR106	= 6 ; Transponder Calibration Register 10 Bit 6

; TPCALR11 - Transponder Calibration Register 11
.equ	MTBTR0	= 0 ; Measurement Buffer Trimming bit 0
.equ	MTBTR1	= 1 ; Measurement Buffer Trimming bit 1
.equ	ENDVBD	= 2 ; Enable DVCC Brown Out Detection
.equ	ENLFBD	= 3 ; Enable LFVCC Brown Out Detection
.equ	ENVSWBD	= 4 ; Enable VSW Brown Out Detection
.equ	TPCALR115	= 5 ; 
.equ	TPCALR116	= 6 ; 
.equ	TPCALR117	= 7 ; 

; TPCALR12 - Transponder Calibration Register 12
.equ	TPDMOD	= 0 ; Transponder Direct Modulation
.equ	TPCALR121	= 1 ; 
.equ	TPCALR122	= 2 ; 
.equ	TPCALR123	= 3 ; 
.equ	TPCALR124	= 4 ; 
.equ	TPCALR125	= 5 ; 
.equ	TPCALR126	= 6 ; 
.equ	TPCALR127	= 7 ; 

; TPCALR13 - Transponder Calibration Register 13
.equ	TPCALR130	= 0 ; Transponder Calibration Register 13 Bit 0
.equ	TPCALR131	= 1 ; Transponder Calibration Register 13 Bit 1
.equ	TPCALR132	= 2 ; Transponder Calibration Register 13 Bit 2
.equ	TPCALR133	= 3 ; Transponder Calibration Register 13 Bit 3
.equ	TPCALR134	= 4 ; Transponder Calibration Register 13 Bit 4
.equ	TPCALR135	= 5 ; Transponder Calibration Register 13 Bit 5
.equ	TPCALR136	= 6 ; Transponder Calibration Register 13 Bit 6
.equ	TPCALR137	= 7 ; Transponder Calibration Register 13 Bit 7

; TPCALR2 - Transponder Calibration Register 2
.equ	TPBG_UREF0	= 0 ; Transponder Bandgap UREF
.equ	TPBG_UREF1	= 1 ; Transponder Bandgap UREF
.equ	TPBG_UREF2	= 2 ; Transponder Bandgap UREF
.equ	TPBG_UREF3	= 3 ; Transponder Bandgap UREF
.equ	TPBG_UREF4	= 4 ; Transponder Bandgap UREF
.equ	TPBG_UREF5	= 5 ; Transponder Bandgap UREF
.equ	TPBG_UREF6	= 6 ; Transponder Bandgap UREF

; TPCALR3 - Transponder Calibration Register 3
.equ	LFVCC_TPCAL0	= 0 ; Not used
.equ	LFVCC_TPCAL1	= 1 ; Not used
.equ	LFVCC_TPCAL2	= 2 ; Not used
.equ	TPORTH0	= 3 ; Transponder Power On Reset Threshold
.equ	TPORTH1	= 4 ; Transponder Power On Reset Threshold

; TPCALR4 - Transponder Calibration Register 4
.equ	TPINIT_CAL0	= 0 ; Transponder Init Calibration
.equ	TPINIT_CAL1	= 1 ; Transponder Init Calibration
.equ	TPINIT_CAL2	= 2 ; Transponder Init Calibration
.equ	COMPVC_CAL0	= 3 ; Comparator VC Calibration
.equ	COMPVC_CAL1	= 4 ; Comparator VC Calibration

; TPCALR5 - Transponder Calibration Register 5
.equ	TPCALR50	= 0 ; Transponder Calibration Register 5 Bit 0
.equ	TPCALR51	= 1 ; Transponder Calibration Register 5 Bit 1
.equ	TPCALR52	= 2 ; Transponder Calibration Register 5 Bit 2
.equ	TPCALR53	= 3 ; Transponder Calibration Register 5 Bit 3

; TPCALR6 - Transponder Calibration Register 6
.equ	TPCALR60	= 0 ; Transponder Calibration Register 6 Bit 0
.equ	TPCALR61	= 1 ; Transponder Calibration Register 6 Bit 1
.equ	TPCALR62	= 2 ; Transponder Calibration Register 6 Bit 2
.equ	TPCALR63	= 3 ; Transponder Calibration Register 6 Bit 3
.equ	TPCALR64	= 4 ; Transponder Calibration Register 6 Bit 4

; TPCALR7 - Transponder Calibration Register 7
.equ	TPCALR70	= 0 ; Transponder Calibration Register 7 Bit 0
.equ	TPCALR71	= 1 ; Transponder Calibration Register 7 Bit 1
.equ	TPCALR72	= 2 ; Transponder Calibration Register 7 Bit 2

; TPCALR8 - Transponder Calibration Register 8
.equ	TPCALR80	= 0 ; Transponder Calibration Register 8 Bit 0
.equ	TPCALR81	= 1 ; Transponder Calibration Register 8 Bit 1
.equ	TPCALR82	= 2 ; Transponder Calibration Register 8 Bit 2
.equ	TPCALR83	= 3 ; Transponder Calibration Register 8 Bit 3
.equ	TPCALR84	= 4 ; Transponder Calibration Register 8 Bit 4
.equ	TPCALR85	= 5 ; Transponder Calibration Register 8 Bit 5
.equ	TPCALR86	= 6 ; Transponder Calibration Register 8 Bit 6

; TPCALR9 - Transponder Calibration Register 9
.equ	TPCALR90	= 0 ; Transponder Calibration Register 9 Bit 0
.equ	TPCALR91	= 1 ; Transponder Calibration Register 9 Bit 1
.equ	TPCALR92	= 2 ; Transponder Calibration Register 9 Bit 2
.equ	TPCALR93	= 3 ; Transponder Calibration Register 9 Bit 3
.equ	TPCALR94	= 4 ; Transponder Calibration Register 9 Bit 4
.equ	TPCALR95	= 5 ; Transponder Calibration Register 9 Bit 5
.equ	TPCALR96	= 6 ; Transponder Calibration Register 9 Bit 6
.equ	TPCALR97	= 7 ; Transponder Calibration Register 9 Bit 7


; ***** TWI1 *****************
; TW1AMR - TWI1 Address Mask Register
.equ	TW1AM0	= 1 ; TWI1 Address Mask
.equ	TW1AM1	= 2 ; TWI1 Address Mask
.equ	TW1AM2	= 3 ; TWI1 Address Mask
.equ	TW1AM3	= 4 ; TWI1 Address Mask
.equ	TW1AM4	= 5 ; TWI1 Address Mask
.equ	TW1AM5	= 6 ; TWI1 Address Mask
.equ	TW1AM6	= 7 ; TWI1 Address Mask

; TW1AR - TWI1 (Slave) Address Register
.equ	TW1GCE	= 0 ; TWI1 General Call Recognition Enable
.equ	TW1A0	= 1 ; TWI1 (Slave) Address
.equ	TW1A1	= 2 ; TWI1 (Slave) Address
.equ	TW1A2	= 3 ; TWI1 (Slave) Address
.equ	TW1A3	= 4 ; TWI1 (Slave) Address
.equ	TW1A4	= 5 ; TWI1 (Slave) Address
.equ	TW1A5	= 6 ; TWI1 (Slave) Address
.equ	TW1A6	= 7 ; TWI1 (Slave) Address

; TW1BR - TWI1 Bit Rate Register
.equ	TW1BR0	= 0 ; TWI1 Bit Rate Register Bit 0
.equ	TW1BR1	= 1 ; TWI1 Bit Rate Register Bit 1
.equ	TW1BR2	= 2 ; TWI1 Bit Rate Register Bit 2
.equ	TW1BR3	= 3 ; TWI1 Bit Rate Register Bit 3
.equ	TW1BR4	= 4 ; TWI1 Bit Rate Register Bit 4
.equ	TW1BR5	= 5 ; TWI1 Bit Rate Register Bit 5
.equ	TW1BR6	= 6 ; TWI1 Bit Rate Register Bit 6
.equ	TW1BR7	= 7 ; TWI1 Bit Rate Register Bit 7

; TW1CR - TWI1 Control Register
.equ	TW1IE	= 0 ; TWI1 Interrupt Enable
.equ	TW1EN	= 2 ; TWI1 Enable
.equ	TW1WC	= 3 ; TWI1 Write Collision Flag
.equ	TW1STO	= 4 ; TWI1 STOP Condition
.equ	TW1STA	= 5 ; TWI1 START Condition
.equ	TW1EA	= 6 ; TWI1 Enable Acknowledge
.equ	TW1INT	= 7 ; TWI1 Interrupt Flag

; TW1DR - TWI1 Data Register
.equ	TW1DR0	= 0 ; TWI1 Data Register Bit 0
.equ	TW1DR1	= 1 ; TWI1 Data Register Bit 1
.equ	TW1DR2	= 2 ; TWI1 Data Register Bit 2
.equ	TW1DR3	= 3 ; TWI1 Data Register Bit 3
.equ	TW1DR4	= 4 ; TWI1 Data Register Bit 4
.equ	TW1DR5	= 5 ; TWI1 Data Register Bit 5
.equ	TW1DR6	= 6 ; TWI1 Data Register Bit 6
.equ	TW1DR7	= 7 ; TWI1 Data Register Bit 7

; TW1SR - TWI1 Status Register
.equ	TW1PS0	= 0 ; TWI1 Prescaler
.equ	TW1PS1	= 1 ; TWI1 Prescaler
.equ	TW1S0	= 3 ; TWI1 Status
.equ	TW1S1	= 4 ; TWI1 Status
.equ	TW1S2	= 5 ; TWI1 Status
.equ	TW1S3	= 6 ; TWI1 Status
.equ	TW1S4	= 7 ; TWI1 Status


; ***** TWI2 *****************
; TW2AMR - TWI2 Address Mask Register
.equ	TW2AM0	= 1 ; TWI2 Address Mask
.equ	TW2AM1	= 2 ; TWI2 Address Mask
.equ	TW2AM2	= 3 ; TWI2 Address Mask
.equ	TW2AM3	= 4 ; TWI2 Address Mask
.equ	TW2AM4	= 5 ; TWI2 Address Mask
.equ	TW2AM5	= 6 ; TWI2 Address Mask
.equ	TW2AM6	= 7 ; TWI2 Address Mask

; TW2AR - TWI2 (Slave) Address Register
.equ	TW2GCE	= 0 ; TWI2 General Call Recognition Enable
.equ	TW2A0	= 1 ; TWI2 (Slave) Address
.equ	TW2A1	= 2 ; TWI2 (Slave) Address
.equ	TW2A2	= 3 ; TWI2 (Slave) Address
.equ	TW2A3	= 4 ; TWI2 (Slave) Address
.equ	TW2A4	= 5 ; TWI2 (Slave) Address
.equ	TW2A5	= 6 ; TWI2 (Slave) Address
.equ	TW2A6	= 7 ; TWI2 (Slave) Address

; TW2BR - TWI2 Bit Rate Register
.equ	TW2BR0	= 0 ; TWI2 Bit Rate Register Bit 0
.equ	TW2BR1	= 1 ; TWI2 Bit Rate Register Bit 1
.equ	TW2BR2	= 2 ; TWI2 Bit Rate Register Bit 2
.equ	TW2BR3	= 3 ; TWI2 Bit Rate Register Bit 3
.equ	TW2BR4	= 4 ; TWI2 Bit Rate Register Bit 4
.equ	TW2BR5	= 5 ; TWI2 Bit Rate Register Bit 5
.equ	TW2BR6	= 6 ; TWI2 Bit Rate Register Bit 6
.equ	TW2BR7	= 7 ; TWI2 Bit Rate Register Bit 7

; TW2CR - TWI2 Control Register
.equ	TW2IE	= 0 ; TWI2 Interrupt Enable
.equ	TW2EN	= 2 ; TWI2 Enable
.equ	TW2WC	= 3 ; TWI2 Write Collision Flag
.equ	TW2STO	= 4 ; TWI2 STOP Condition
.equ	TW2STA	= 5 ; TWI2 START Condition
.equ	TW2EA	= 6 ; TWI2 Enable Acknowledge
.equ	TW2INT	= 7 ; TWI2 Interrupt Flag

; TW2DR - TWI2 Data Register
.equ	TW2DR0	= 0 ; TWI2 Data Register Bit 0
.equ	TW2DR1	= 1 ; TWI2 Data Register Bit 1
.equ	TW2DR2	= 2 ; TWI2 Data Register Bit 2
.equ	TW2DR3	= 3 ; TWI2 Data Register Bit 3
.equ	TW2DR4	= 4 ; TWI2 Data Register Bit 4
.equ	TW2DR5	= 5 ; TWI2 Data Register Bit 5
.equ	TW2DR6	= 6 ; TWI2 Data Register Bit 6
.equ	TW2DR7	= 7 ; TWI2 Data Register Bit 7

; TW2SR - TWI2 Status Register
.equ	TW2PS0	= 0 ; TWI2 Prescaler
.equ	TW2PS1	= 1 ; TWI2 Prescaler
.equ	TW2S0	= 3 ; TWI2 Status
.equ	TW2S1	= 4 ; TWI2 Status
.equ	TW2S2	= 5 ; TWI2 Status
.equ	TW2S3	= 6 ; TWI2 Status
.equ	TW2S4	= 7 ; TWI2 Status


; ***** TXDSP *****************
; BBTE2 - Base Band Test Enable 2
.equ	TDEPO	= 0 ; Tx DSP External Pin Output
.equ	DITDIS	= 1 ; Dither Disable on Sigma Delta Modulator

; FFREQ1H - Fractional Frequency 1 Setting, High Byte
.equ	FFREQ1H0	= 0 ; Fractional Frequency 1 Setting, High Byte Bit 0
.equ	FFREQ1H1	= 1 ; Fractional Frequency 1 Setting, High Byte Bit 1

; FFREQ1M - Fractional Frequency 1 Setting, Middle Byte
.equ	FFREQ1M0	= 0 ; Fractional Frequency 1 Setting, Middle Byte Bit 0
.equ	FFREQ1M1	= 1 ; Fractional Frequency 1 Setting, Middle Byte Bit 1
.equ	FFREQ1M2	= 2 ; Fractional Frequency 1 Setting, Middle Byte Bit 2
.equ	FFREQ1M3	= 3 ; Fractional Frequency 1 Setting, Middle Byte Bit 3
.equ	FFREQ1M4	= 4 ; Fractional Frequency 1 Setting, Middle Byte Bit 4
.equ	FFREQ1M5	= 5 ; Fractional Frequency 1 Setting, Middle Byte Bit 5
.equ	FFREQ1M6	= 6 ; Fractional Frequency 1 Setting, Middle Byte Bit 6
.equ	FFREQ1M7	= 7 ; Fractional Frequency 1 Setting, Middle Byte Bit 7

; FFREQ1L - Fractional Frequency 1 Setting, Low Byte
.equ	FFREQ1L0	= 0 ; Fractional Frequency 1 Setting, Low Byte Bit 0
.equ	FFREQ1L1	= 1 ; Fractional Frequency 1 Setting, Low Byte Bit 1
.equ	FFREQ1L2	= 2 ; Fractional Frequency 1 Setting, Low Byte Bit 2
.equ	FFREQ1L3	= 3 ; Fractional Frequency 1 Setting, Low Byte Bit 3
.equ	FFREQ1L4	= 4 ; Fractional Frequency 1 Setting, Low Byte Bit 4
.equ	FFREQ1L5	= 5 ; Fractional Frequency 1 Setting, Low Byte Bit 5
.equ	FFREQ1L6	= 6 ; Fractional Frequency 1 Setting, Low Byte Bit 6
.equ	FFREQ1L7	= 7 ; Fractional Frequency 1 Setting, Low Byte Bit 7

; FFREQ2H - Fractional Frequency 2 Setting, High Byte
.equ	FFREQ2H0	= 0 ; Fractional Frequency 2 Setting, High Byte Bit 0
.equ	FFREQ2H1	= 1 ; Fractional Frequency 2 Setting, High Byte Bit 1

; FFREQ2M - Fractional Frequency 2 Setting, Middle Byte
.equ	FFREQ2M0	= 0 ; Fractional Frequency 2 Setting, Middle Byte Bit 0
.equ	FFREQ2M1	= 1 ; Fractional Frequency 2 Setting, Middle Byte Bit 1
.equ	FFREQ2M2	= 2 ; Fractional Frequency 2 Setting, Middle Byte Bit 2
.equ	FFREQ2M3	= 3 ; Fractional Frequency 2 Setting, Middle Byte Bit 3
.equ	FFREQ2M4	= 4 ; Fractional Frequency 2 Setting, Middle Byte Bit 4
.equ	FFREQ2M5	= 5 ; Fractional Frequency 2 Setting, Middle Byte Bit 5
.equ	FFREQ2M6	= 6 ; Fractional Frequency 2 Setting, Middle Byte Bit 6
.equ	FFREQ2M7	= 7 ; Fractional Frequency 2 Setting, Middle Byte Bit 7

; FFREQ2L - Fractional Frequency 2 Setting, Low Byte
.equ	FFREQ2L0	= 0 ; Fractional Frequency 2 Setting, Low Byte Bit 0
.equ	FFREQ2L1	= 1 ; Fractional Frequency 2 Setting, Low Byte Bit 1
.equ	FFREQ2L2	= 2 ; Fractional Frequency 2 Setting, Low Byte Bit 2
.equ	FFREQ2L3	= 3 ; Fractional Frequency 2 Setting, Low Byte Bit 3
.equ	FFREQ2L4	= 4 ; Fractional Frequency 2 Setting, Low Byte Bit 4
.equ	FFREQ2L5	= 5 ; Fractional Frequency 2 Setting, Low Byte Bit 5
.equ	FFREQ2L6	= 6 ; Fractional Frequency 2 Setting, Low Byte Bit 6
.equ	FFREQ2L7	= 7 ; Fractional Frequency 2 Setting, Low Byte Bit 7

; FSCR - Frequency Synthesizer Control Register
.equ	TXMOD	= 0 ; Tx Modulation
.equ	SFM	= 1 ; Select FSK Modulation
.equ	TXMS0	= 2 ; Tx Modulation Source
.equ	TXMS1	= 3 ; Tx Modulation Source
.equ	PAOER	= 4 ; Power Amplifier Output Enable Register
.equ	PAON	= 7 ; Power Amplifier Output is On

; FSEN - Frequency Synthesizer Enable register
.equ	SDPU	= 0 ; Sigma-delta Modulator Power Up
.equ	SDEN	= 1 ; Sigma-delta Modulator Enable
.equ	GAEN	= 2 ; Gauss Filtering Enable
.equ	PEEN	= 3 ; Pre-emphasis Filtering Enable
.equ	ASEN	= 4 ; ASK Shaping Enable
.equ	ANTT	= 5 ; Antenna Tuning Active

; FSFCR - Frequency Synthesizer Filter Control Register
.equ	BTSEL0	= 0 ; Gauss Filter BT Selection
.equ	BTSEL1	= 1 ; Gauss Filter BT Selection
.equ	ASDIV0	= 4 ; ASK Shaping Divider
.equ	ASDIV1	= 5 ; ASK Shaping Divider
.equ	ASDIV2	= 6 ; ASK Shaping Divider
.equ	ASDIV3	= 7 ; ASK Shaping Divider

; GACDIV - Gauss Clock Divider
.equ	GACDIVH0	= 0 ; Gauss Clock Divider High Bit 8
.equ	GACDIVH1	= 1 ; Gauss Clock Divider High Bit 9
.equ	GACDIVH2	= 2 ; Gauss Clock Divider High Bit 10
.equ	GACDIVH3	= 3 ; Gauss Clock Divider High Bit 11
.equ	GACDIVH4	= 4 ; Gauss Clock Divider High Bit 12

.equ	GACDIVL0	= 0 ; Gauss Clock Divider Low Bit 0
.equ	GACDIVL1	= 1 ; Gauss Clock Divider Low Bit 1
.equ	GACDIVL2	= 2 ; Gauss Clock Divider Low Bit 2
.equ	GACDIVL3	= 3 ; Gauss Clock Divider Low Bit 3
.equ	GACDIVL4	= 4 ; Gauss Clock Divider Low Bit 4
.equ	GACDIVL5	= 5 ; Gauss Clock Divider Low Bit 5
.equ	GACDIVL6	= 6 ; Gauss Clock Divider Low Bit 6
.equ	GACDIVL7	= 7 ; Gauss Clock Divider Low Bit 7


; ***** TXM *****************
; TMCI - Tx Modulator CRC Init Value
.equ	TMCIH0	= 0 ; Tx Modulator CRC Init Value High Bit 8
.equ	TMCIH1	= 1 ; Tx Modulator CRC Init Value High Bit 9
.equ	TMCIH2	= 2 ; Tx Modulator CRC Init Value High Bit 10
.equ	TMCIH3	= 3 ; Tx Modulator CRC Init Value High Bit 11
.equ	TMCIH4	= 4 ; Tx Modulator CRC Init Value High Bit 12
.equ	TMCIH5	= 5 ; Tx Modulator CRC Init Value High Bit 13
.equ	TMCIH6	= 6 ; Tx Modulator CRC Init Value High Bit 14
.equ	TMCIH7	= 7 ; Tx Modulator CRC Init Value High Bit 15

.equ	TMCIL0	= 0 ; Tx Modulator CRC Init Value Low Bit 0
.equ	TMCIL1	= 1 ; Tx Modulator CRC Init Value Low Bit 1
.equ	TMCIL2	= 2 ; Tx Modulator CRC Init Value Low Bit 2
.equ	TMCIL3	= 3 ; Tx Modulator CRC Init Value Low Bit 3
.equ	TMCIL4	= 4 ; Tx Modulator CRC Init Value Low Bit 4
.equ	TMCIL5	= 5 ; Tx Modulator CRC Init Value Low Bit 5
.equ	TMCIL6	= 6 ; Tx Modulator CRC Init Value Low Bit 6
.equ	TMCIL7	= 7 ; Tx Modulator CRC Init Value Low Bit 7

; TMCP - Tx Modulator CRC Polynomial
.equ	TMCPH0	= 0 ; Tx Modulator CRC Polynomial High Bit 8
.equ	TMCPH1	= 1 ; Tx Modulator CRC Polynomial High Bit 9
.equ	TMCPH2	= 2 ; Tx Modulator CRC Polynomial High Bit 10
.equ	TMCPH3	= 3 ; Tx Modulator CRC Polynomial High Bit 11
.equ	TMCPH4	= 4 ; Tx Modulator CRC Polynomial High Bit 12
.equ	TMCPH5	= 5 ; Tx Modulator CRC Polynomial High Bit 13
.equ	TMCPH6	= 6 ; Tx Modulator CRC Polynomial High Bit 14
.equ	TMCPH7	= 7 ; Tx Modulator CRC Polynomial High Bit 15

.equ	TMCPL0	= 0 ; Tx Modulator CRC Polynomial Low Bit 0
.equ	TMCPL1	= 1 ; Tx Modulator CRC Polynomial Low Bit 1
.equ	TMCPL2	= 2 ; Tx Modulator CRC Polynomial Low Bit 2
.equ	TMCPL3	= 3 ; Tx Modulator CRC Polynomial Low Bit 3
.equ	TMCPL4	= 4 ; Tx Modulator CRC Polynomial Low Bit 4
.equ	TMCPL5	= 5 ; Tx Modulator CRC Polynomial Low Bit 5
.equ	TMCPL6	= 6 ; Tx Modulator CRC Polynomial Low Bit 6
.equ	TMCPL7	= 7 ; Tx Modulator CRC Polynomial Low Bit 7

; TMCR1 - Tx Modulator Control Register 1
.equ	TMPIS0	= 0 ; Tx Modulator Port Interface Select
.equ	TMPIS1	= 1 ; Tx Modulator Port Interface Select
.equ	TMPIS2	= 2 ; Tx Modulator Port Interface Select
.equ	TMSCS	= 3 ; Tx Modulator Serial Output Clock Select
.equ	TMCIM	= 4 ; Tx Modulator Transmission Complete Interrupt Mask

; TMCR2 - Tx Modulator Control Register 2
.equ	TMCRCE	= 0 ; Tx Modulator CRC Enable
.equ	TMCRCSE0	= 1 ; Tx Modulator CRC Select
.equ	TMCRCSE1	= 2 ; Tx Modulator CRC Select
.equ	TMNRZE	= 3 ; Tx Modulator NRZ Mode Enable
.equ	TMPOL	= 4 ; Tx Modulator Polarity
.equ	TMSSE	= 5 ; Tx Modulator Stop Sequence Enable
.equ	TMLSB	= 6 ; Tx Modulator Least Significant Bit First

; TMCRC - Tx Modulator CRC Result
.equ	TMCRCH0	= 0 ; Tx Modulator CRC Result High Bit 8
.equ	TMCRCH1	= 1 ; Tx Modulator CRC Result High Bit 9
.equ	TMCRCH2	= 2 ; Tx Modulator CRC Result High Bit 10
.equ	TMCRCH3	= 3 ; Tx Modulator CRC Result High Bit 11
.equ	TMCRCH4	= 4 ; Tx Modulator CRC Result High Bit 12
.equ	TMCRCH5	= 5 ; Tx Modulator CRC Result High Bit 13
.equ	TMCRCH6	= 6 ; Tx Modulator CRC Result High Bit 14
.equ	TMCRCH7	= 7 ; Tx Modulator CRC Result High Bit 15

.equ	TMCRCL0	= 0 ; Tx Modulator CRC Result Low Bit 0
.equ	TMCRCL1	= 1 ; Tx Modulator CRC Result Low Bit 1
.equ	TMCRCL2	= 2 ; Tx Modulator CRC Result Low Bit 2
.equ	TMCRCL3	= 3 ; Tx Modulator CRC Result Low Bit 3
.equ	TMCRCL4	= 4 ; Tx Modulator CRC Result Low Bit 4
.equ	TMCRCL5	= 5 ; Tx Modulator CRC Result Low Bit 5
.equ	TMCRCL6	= 6 ; Tx Modulator CRC Result Low Bit 6
.equ	TMCRCL7	= 7 ; Tx Modulator CRC Result Low Bit 7

; TMCSB - Tx Modulator CRC Skip Bit Number
.equ	TMCSB0	= 0 ; Tx Modulator CRC Skip Bit Number Bit 0
.equ	TMCSB1	= 1 ; Tx Modulator CRC Skip Bit Number Bit 1
.equ	TMCSB2	= 2 ; Tx Modulator CRC Skip Bit Number Bit 2
.equ	TMCSB3	= 3 ; Tx Modulator CRC Skip Bit Number Bit 3
.equ	TMCSB4	= 4 ; Tx Modulator CRC Skip Bit Number Bit 4
.equ	TMCSB5	= 5 ; Tx Modulator CRC Skip Bit Number Bit 5
.equ	TMCSB6	= 6 ; Tx Modulator CRC Skip Bit Number Bit 6
.equ	TMCSB7	= 7 ; Tx Modulator CRC Skip Bit Number Bit 7

; TMFSM - Tx Modulator Finite State Machine
.equ	TMSSM0	= 0 ; Tx Modulator Sub State Machine
.equ	TMSSM1	= 1 ; Tx Modulator Sub State Machine
.equ	TMSSM2	= 2 ; Tx Modulator Sub State Machine
.equ	TMSSM3	= 3 ; Tx Modulator Sub State Machine
.equ	TMMSM0	= 4 ; Tx Modulator Master State Machine
.equ	TMMSM1	= 5 ; Tx Modulator Master State Machine
.equ	TMMSM2	= 6 ; Tx Modulator Master State Machine

; TMSHR - Tx Modulator Shift Register
.equ	TMSHR0	= 0 ; Tx Modulator Shift Register Bit 0
.equ	TMSHR1	= 1 ; Tx Modulator Shift Register Bit 1
.equ	TMSHR2	= 2 ; Tx Modulator Shift Register Bit 2
.equ	TMSHR3	= 3 ; Tx Modulator Shift Register Bit 3
.equ	TMSHR4	= 4 ; Tx Modulator Shift Register Bit 4
.equ	TMSHR5	= 5 ; Tx Modulator Shift Register Bit 5
.equ	TMSHR6	= 6 ; Tx Modulator Shift Register Bit 6
.equ	TMSHR7	= 7 ; Tx Modulator Shift Register Bit 7

; TMSR - Tx Modulator Status Register
.equ	TMTCF	= 0 ; Tx Modulator Transmission Complete Status Flag

; TMSSC - Tx Modulator Stop Sequence Configuration
.equ	TMSSP0	= 0 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSP1	= 1 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSP2	= 2 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSP3	= 3 ; Tx Modulator Stop Sequence Pattern
.equ	TMSSL0	= 4 ; Tx Modulator Stop Sequence Length
.equ	TMSSL1	= 5 ; Tx Modulator Stop Sequence Length
.equ	TMSSL2	= 6 ; Tx Modulator Stop Sequence Length
.equ	TMSSH	= 7 ; Tx Modulator Stop Sequence Hold Mode

; TMTLL - Tx Modulator Telegram Length Register
.equ	TMTLLH0	= 0 ; Tx Modulator Telegram Length Register High Bit 8
.equ	TMTLLH1	= 1 ; Tx Modulator Telegram Length Register High Bit 9
.equ	TMTLLH2	= 2 ; Tx Modulator Telegram Length Register High Bit 10
.equ	TMTLLH3	= 3 ; Tx Modulator Telegram Length Register High Bit 11

.equ	TMTLLL0	= 0 ; Tx Modulator Telegram Length Register Low Bit 0
.equ	TMTLLL1	= 1 ; Tx Modulator Telegram Length Register Low Bit 1
.equ	TMTLLL2	= 2 ; Tx Modulator Telegram Length Register Low Bit 2
.equ	TMTLLL3	= 3 ; Tx Modulator Telegram Length Register Low Bit 3
.equ	TMTLLL4	= 4 ; Tx Modulator Telegram Length Register Low Bit 4
.equ	TMTLLL5	= 5 ; Tx Modulator Telegram Length Register Low Bit 5
.equ	TMTLLL6	= 6 ; Tx Modulator Telegram Length Register Low Bit 6
.equ	TMTLLL7	= 7 ; Tx Modulator Telegram Length Register Low Bit 7


; ***** VX_MODE *****************
; VXMCTRL - VX Mode Control Register
.equ	VX_SEL0	= 0 ; Select VX voltage level
.equ	VX_SEL1	= 1 ; Select VX voltage level
.equ	EN_VX	= 2 ; Enable the VX_LDO
.equ	EN_VX_OUT	= 3 ; Enable PB4 as an VX/VBAT Supply Output
.equ	EN_VX_IN	= 4 ; Enable VX Inputs


; ***** FUSE *****************
; LOW - 
.equ	PCEE1	= 0 ; Protect Customer EEPROM section
.equ	EEACC	= 1 ; EEPROM Access Control
.equ	BOOTRST	= 2 ; Select boot reset vector
.equ	EESAVE	= 3 ; Preserve EEPROM memory through the Chip Erase cycle
.equ	WDTON	= 4 ; Watch-dog Timer always on
.equ	SPIEN	= 5 ; Serial program downloading (SPI) enabled
.equ	DWEN	= 6 ; Debug Wire enable
.equ	CKSTART	= 7 ; MRC is selected during reset startup phase


; ***** LOCKBIT *****************
; LOCKBIT - 
.equ	LB1	= 0 ; Memory Lock
.equ	LB2	= 1 ; Memory Lock

; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30

; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHSTART	= 0x4000 ; Note: Word address
.equ	FLASHEND	= 0x7FFF ; Note: Word address
.equ	FLASHPAGESIZE	= 0x0040 ;

.equ	IOEND	= 0x01FF

.equ	SRAM_START	= 0x0200
.equ	SRAM_SIZE	= 1024
.equ	RAMEND	= 0x05FF

.equ	E2END	= 0x087F
.equ	EEPROMEND	= 0x087F
.equ	EEADRBITS	= 12

.equ	XRAMEND	= 0x0000

#pragma AVRPART MEMORY PROG_FLASH 65536
#pragma AVRPART MEMORY INT_SRAM SIZE 1024
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x200

#pragma AVRPART MEMORY EEPROM 2176

; ***** BOOTLOADER DECLARATIONS ******************************************
 ; No bootloader declariations; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	 = 0x0002 ; External Interrupt Request 0
.equ	INT1addr	 = 0x0004 ; External Interrupt Request 1
.equ	PCI0addr	 = 0x0006 ; Pin Change Interrupt Request 0
.equ	PCI1addr	 = 0x0008 ; Pin Change Interrupt Request 1
.equ	VMONaddr	 = 0x000A ; Voltage Monitoring Interrupt
.equ	AVCCRaddr	 = 0x000C ; AVCC Reset Interrupt
.equ	AVCCLaddr	 = 0x000E ; AVCC Low Interrupt
.equ	T0INTaddr	 = 0x0010 ; Timer0 Interval Interrupt
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
.equ	SSMaddr	 = 0x0030 ; Sequencer State Machine Interrupt
.equ	DFFLRaddr	 = 0x0032 ; Data FIFO fill level reached Interrupt
.equ	DFOUEaddr	 = 0x0034 ; Data FIFO overflow or underflow error Interrupt
.equ	SFFLRaddr	 = 0x0036 ; RSSI/Preamble FIFO fill level reached Interrupt
.equ	SFOUEaddr	 = 0x0038 ; RSSI/Preamble FIFO overflow or underflow error Interrupt
.equ	TMTCFaddr	 = 0x003A ; Tx Modulator Telegram Finish Interrupt
.equ	AESaddr	 = 0x003C ; AES Krypto Unit Interrupt
.equ	TPINTaddr	 = 0x003E ; Transponder Mode Interrupt
.equ	TPTOERRaddr	 = 0x0040 ; Transponder Timeout Error Interrupt
.equ	LFID0INTaddr	 = 0x0042 ; LF receiver Identifier 0 Interrupt
.equ	LFID1INTaddr	 = 0x0044 ; LF receiver Identifier 1 Interrupt
.equ	LFFEINTaddr	 = 0x0046 ; LF receiver Frame End Interrupt
.equ	LFBCRaddr	 = 0x0048 ; LF receiver Bit Count Reached Interrupt
.equ	LFPBDaddr	 = 0x004A ; LF receiver PreBurst Detected Interrupt
.equ	LFDEaddr	 = 0x004C ; LF receiver Decoder Error Interrupt
.equ	LFEOTaddr	 = 0x004E ; LF receiver End of Telegram Interrupt
.equ	LFTCORaddr	 = 0x0050 ; LF receiver Timer Compare Match Interrupt
.equ	LFRSCOaddr	 = 0x0052 ; LF receiver RSSI measurement Interrupt
.equ	LDFFLRaddr	 = 0x0054 ; LF Data FIFO Fill Level Reached Interrupt
.equ	LDFOUEaddr	 = 0x0056 ; LF Data FIFO Overflow or Underflow Error Interrupt
.equ	EXCMaddr	 = 0x0058 ; External input Clock monitoring Interrupt
.equ	E2CINTaddr	 = 0x005A ; EEPROM Error Correction Interrupt
.equ	ERDYaddr	 = 0x005C ; EEPROM Ready Interrupt
.equ	SPMRaddr	 = 0x005E ; Store Program Memory Ready
.equ	TWI1addr	 = 0x0060 ; TWI1 Interrupt
.equ	SPI2addr	 = 0x0062 ; SPI2 Interrupt
.equ	TWI2addr	 = 0x0064 ; TWI2 Interrupt

.equ	INT_VECTORS_SIZE	= 102 ; size in words

#endif /* _A5702M322DEF_INC_ */

; ***** END OF FILE ******************************************************



