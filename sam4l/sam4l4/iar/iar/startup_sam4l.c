/**
 * \file
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#include "sam4l.h"

typedef void (*intfunc) (void);
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

void __iar_program_start(void);
int __low_level_init(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M4 core handlers */
#pragma weak NMI_Handler              = Dummy_Handler
#pragma weak HardFault_Handler        = Dummy_Handler
#pragma weak MemManage_Handler        = Dummy_Handler
#pragma weak BusFault_Handler         = Dummy_Handler
#pragma weak UsageFault_Handler       = Dummy_Handler
#pragma weak SVC_Handler              = Dummy_Handler
#pragma weak DebugMon_Handler         = Dummy_Handler
#pragma weak PendSV_Handler           = Dummy_Handler
#pragma weak SysTick_Handler          = Dummy_Handler

/* Peripherals handlers */
#pragma weak HFLASHC_Handler          = Dummy_Handler
#pragma weak PDCA_0_Handler           = Dummy_Handler /* PDCA_0 */
#pragma weak PDCA_1_Handler           = Dummy_Handler /* PDCA_1 */
#pragma weak PDCA_2_Handler           = Dummy_Handler /* PDCA_2 */
#pragma weak PDCA_3_Handler           = Dummy_Handler /* PDCA_3 */
#pragma weak PDCA_4_Handler           = Dummy_Handler /* PDCA_4 */
#pragma weak PDCA_5_Handler           = Dummy_Handler /* PDCA_5 */
#pragma weak PDCA_6_Handler           = Dummy_Handler /* PDCA_6 */
#pragma weak PDCA_7_Handler           = Dummy_Handler /* PDCA_7 */
#pragma weak PDCA_8_Handler           = Dummy_Handler /* PDCA_8 */
#pragma weak PDCA_9_Handler           = Dummy_Handler /* PDCA_9 */
#pragma weak PDCA_10_Handler          = Dummy_Handler /* PDCA_10 */
#pragma weak PDCA_11_Handler          = Dummy_Handler /* PDCA_11 */
#pragma weak PDCA_12_Handler          = Dummy_Handler /* PDCA_12 */
#pragma weak PDCA_13_Handler          = Dummy_Handler /* PDCA_13 */
#pragma weak PDCA_14_Handler          = Dummy_Handler /* PDCA_14 */
#pragma weak PDCA_15_Handler          = Dummy_Handler /* PDCA_15 */
#pragma weak CRCCU_Handler            = Dummy_Handler
#ifdef       ID_USBC
#pragma weak USBC_Handler             = Dummy_Handler
#endif
#pragma weak PEVC_0_Handler           = Dummy_Handler /* PEVC_TR */
#pragma weak PEVC_1_Handler           = Dummy_Handler /* PEVC_OV */
#ifdef       ID_AESA
#pragma weak AESA_Handler             = Dummy_Handler
#endif
#pragma weak PM_Handler               = Dummy_Handler
#pragma weak SCIF_Handler             = Dummy_Handler
#pragma weak FREQM_Handler            = Dummy_Handler
#pragma weak GPIO_0_Handler           = Dummy_Handler /* GPIO_0 */
#pragma weak GPIO_1_Handler           = Dummy_Handler /* GPIO_1 */
#pragma weak GPIO_2_Handler           = Dummy_Handler /* GPIO_2 */
#pragma weak GPIO_3_Handler           = Dummy_Handler /* GPIO_3 */
#pragma weak GPIO_4_Handler           = Dummy_Handler /* GPIO_4 */
#pragma weak GPIO_5_Handler           = Dummy_Handler /* GPIO_5 */
#pragma weak GPIO_6_Handler           = Dummy_Handler /* GPIO_6 */
#pragma weak GPIO_7_Handler           = Dummy_Handler /* GPIO_7 */
#pragma weak GPIO_8_Handler           = Dummy_Handler /* GPIO_8 */
#pragma weak GPIO_9_Handler           = Dummy_Handler /* GPIO_9 */
#pragma weak GPIO_10_Handler          = Dummy_Handler /* GPIO_10 */
#pragma weak GPIO_11_Handler          = Dummy_Handler /* GPIO_11 */
#pragma weak BPM_Handler              = Dummy_Handler
#pragma weak BSCIF_Handler            = Dummy_Handler
#pragma weak AST_0_Handler            = Dummy_Handler /* AST_ALARM */
#pragma weak AST_1_Handler            = Dummy_Handler /* AST_PER */
#pragma weak AST_2_Handler            = Dummy_Handler /* AST_OVF */
#pragma weak AST_3_Handler            = Dummy_Handler /* AST_READY */
#pragma weak AST_4_Handler            = Dummy_Handler /* AST_CLKREADY */
#pragma weak WDT_Handler              = Dummy_Handler
#pragma weak EIC_0_Handler            = Dummy_Handler /* EIC_1 */
#pragma weak EIC_1_Handler            = Dummy_Handler /* EIC_2 */
#pragma weak EIC_2_Handler            = Dummy_Handler /* EIC_3 */
#pragma weak EIC_3_Handler            = Dummy_Handler /* EIC_4 */
#pragma weak EIC_4_Handler            = Dummy_Handler /* EIC_5 */
#pragma weak EIC_5_Handler            = Dummy_Handler /* EIC_6 */
#pragma weak EIC_6_Handler            = Dummy_Handler /* EIC_7 */
#pragma weak EIC_7_Handler            = Dummy_Handler /* EIC_8 */
#pragma weak IISC_Handler             = Dummy_Handler
#pragma weak SPI_Handler              = Dummy_Handler
#pragma weak TC0_0_Handler            = Dummy_Handler /* TC00 */
#pragma weak TC0_1_Handler            = Dummy_Handler /* TC01 */
#pragma weak TC0_2_Handler            = Dummy_Handler /* TC02 */
#pragma weak TC1_0_Handler            = Dummy_Handler /* TC10 */
#pragma weak TC1_1_Handler            = Dummy_Handler /* TC11 */
#pragma weak TC1_2_Handler            = Dummy_Handler /* TC12 */
#pragma weak TWIM0_Handler            = Dummy_Handler
#pragma weak TWIS0_Handler            = Dummy_Handler
#pragma weak TWIM1_Handler            = Dummy_Handler
#pragma weak TWIS1_Handler            = Dummy_Handler
#pragma weak USART0_Handler           = Dummy_Handler
#pragma weak USART1_Handler           = Dummy_Handler
#pragma weak USART2_Handler           = Dummy_Handler
#pragma weak USART3_Handler           = Dummy_Handler
#pragma weak ADCIFE_Handler           = Dummy_Handler
#pragma weak DACC_Handler             = Dummy_Handler
#pragma weak ACIFC_Handler            = Dummy_Handler
#pragma weak ABDACB_Handler           = Dummy_Handler
#pragma weak TRNG_Handler             = Dummy_Handler
#pragma weak PARC_Handler             = Dummy_Handler
#pragma weak CATB_Handler             = Dummy_Handler
#pragma weak TWIM2_Handler            = Dummy_Handler
#pragma weak TWIM3_Handler            = Dummy_Handler
#ifdef       ID_LCDCA
#pragma weak LCDCA_Handler            = Dummy_Handler
#endif

/* Exception Table */
#pragma language = extended
#pragma segment  = "CSTACK"

/* The name "__vector_table" has special meaning for C-SPY: */
/* it is where the SP start value is found, and the NVIC vector */
/* table register (VTOR) is initialized to this address if != 0 */

#pragma section  = ".intvec"
#pragma location = ".intvec"
const DeviceVectors __vector_table[] = {
        (void*) __sfe("CSTACK"),
        (void*) Reset_Handler,
        (void*) NMI_Handler,
        (void*) HardFault_Handler,
        (void*) MemManage_Handler,
        (void*) BusFault_Handler,
        (void*) UsageFault_Handler,
        (void*) (0UL), /* Reserved */
        (void*) (0UL), /* Reserved */
        (void*) (0UL), /* Reserved */
        (void*) (0UL), /* Reserved */
        (void*) SVC_Handler,
        (void*) DebugMon_Handler,
        (void*) (0UL), /* Reserved */
        (void*) PendSV_Handler,
        (void*) SysTick_Handler,

        /* Configurable interrupts */
        (void*) HFLASHC_Handler,        /*  0 Flash Controller */
        (void*) PDCA_0_Handler,         /*  1 PDCA_0 */
        (void*) PDCA_1_Handler,         /*  2 PDCA_1 */
        (void*) PDCA_2_Handler,         /*  3 PDCA_2 */
        (void*) PDCA_3_Handler,         /*  4 PDCA_3 */
        (void*) PDCA_4_Handler,         /*  5 PDCA_4 */
        (void*) PDCA_5_Handler,         /*  6 PDCA_5 */
        (void*) PDCA_6_Handler,         /*  7 PDCA_6 */
        (void*) PDCA_7_Handler,         /*  8 PDCA_7 */
        (void*) PDCA_8_Handler,         /*  9 PDCA_8 */
        (void*) PDCA_9_Handler,         /* 10 PDCA_9 */
        (void*) PDCA_10_Handler,        /* 11 PDCA_10 */
        (void*) PDCA_11_Handler,        /* 12 PDCA_11 */
        (void*) PDCA_12_Handler,        /* 13 PDCA_12 */
        (void*) PDCA_13_Handler,        /* 14 PDCA_13 */
        (void*) PDCA_14_Handler,        /* 15 PDCA_14 */
        (void*) PDCA_15_Handler,        /* 16 PDCA_15 */
        (void*) CRCCU_Handler,          /* 17 CRC Calculation Unit */
#ifdef ID_USBC
        (void*) USBC_Handler,           /* 18 USB 2.0 Interface */
#else
        (void*) (0UL),                  /* 18 Reserved */
#endif
        (void*) PEVC_0_Handler,         /* 19 PEVC_TR */
        (void*) PEVC_1_Handler,         /* 20 PEVC_OV */
#ifdef ID_AESA
        (void*) AESA_Handler,           /* 21 Advanced Encryption Standard */
#else
        (void*) (0UL),                  /* 21 Reserved */
#endif
        (void*) PM_Handler,             /* 22 Power Manager */
        (void*) SCIF_Handler,           /* 23 System Control Interface */
        (void*) FREQM_Handler,          /* 24 Frequency Meter */
        (void*) GPIO_0_Handler,         /* 25 GPIO_0 */
        (void*) GPIO_1_Handler,         /* 26 GPIO_1 */
        (void*) GPIO_2_Handler,         /* 27 GPIO_2 */
        (void*) GPIO_3_Handler,         /* 28 GPIO_3 */
        (void*) GPIO_4_Handler,         /* 29 GPIO_4 */
        (void*) GPIO_5_Handler,         /* 30 GPIO_5 */
        (void*) GPIO_6_Handler,         /* 31 GPIO_6 */
        (void*) GPIO_7_Handler,         /* 32 GPIO_7 */
        (void*) GPIO_8_Handler,         /* 33 GPIO_8 */
        (void*) GPIO_9_Handler,         /* 34 GPIO_9 */
        (void*) GPIO_10_Handler,        /* 35 GPIO_10 */
        (void*) GPIO_11_Handler,        /* 36 GPIO_11 */
        (void*) BPM_Handler,            /* 37 Backup Power Manager */
        (void*) BSCIF_Handler,          /* 38 Backup System Control Interface */
        (void*) AST_0_Handler,          /* 39 AST_ALARM */
        (void*) AST_1_Handler,          /* 40 AST_PER */
        (void*) AST_2_Handler,          /* 41 AST_OVF */
        (void*) AST_3_Handler,          /* 42 AST_READY */
        (void*) AST_4_Handler,          /* 43 AST_CLKREADY */
        (void*) WDT_Handler,            /* 44 Watchdog Timer */
        (void*) EIC_0_Handler,          /* 45 EIC_1 */
        (void*) EIC_1_Handler,          /* 46 EIC_2 */
        (void*) EIC_2_Handler,          /* 47 EIC_3 */
        (void*) EIC_3_Handler,          /* 48 EIC_4 */
        (void*) EIC_4_Handler,          /* 49 EIC_5 */
        (void*) EIC_5_Handler,          /* 50 EIC_6 */
        (void*) EIC_6_Handler,          /* 51 EIC_7 */
        (void*) EIC_7_Handler,          /* 52 EIC_8 */
        (void*) IISC_Handler,           /* 53 Inter-IC Sound (I2S) Controller */
        (void*) SPI_Handler,            /* 54 Serial Peripheral Interface */
        (void*) TC0_0_Handler,          /* 55 TC00 */
        (void*) TC0_1_Handler,          /* 56 TC01 */
        (void*) TC0_2_Handler,          /* 57 TC02 */
        (void*) TC1_0_Handler,          /* 58 TC10 */
        (void*) TC1_1_Handler,          /* 59 TC11 */
        (void*) TC1_2_Handler,          /* 60 TC12 */
        (void*) TWIM0_Handler,          /* 61 Two-wire Master Interface 0 */
        (void*) TWIS0_Handler,          /* 62 Two-wire Slave Interface 0 */
        (void*) TWIM1_Handler,          /* 63 Two-wire Master Interface 1 */
        (void*) TWIS1_Handler,          /* 64 Two-wire Slave Interface 1 */
        (void*) USART0_Handler,         /* 65 Universal Synchronous Asynchronous Receiver Transmitter 0 */
        (void*) USART1_Handler,         /* 66 Universal Synchronous Asynchronous Receiver Transmitter 1 */
        (void*) USART2_Handler,         /* 67 Universal Synchronous Asynchronous Receiver Transmitter 2 */
        (void*) USART3_Handler,         /* 68 Universal Synchronous Asynchronous Receiver Transmitter 3 */
        (void*) ADCIFE_Handler,         /* 69 ADC controller interface */
        (void*) DACC_Handler,           /* 70 DAC Controller */
        (void*) ACIFC_Handler,          /* 71 Analog Comparator Interface */
        (void*) ABDACB_Handler,         /* 72 Audio Bitstream DAC */
        (void*) TRNG_Handler,           /* 73 True Random Number Generator */
        (void*) PARC_Handler,           /* 74 Parallel Capture */
        (void*) CATB_Handler,           /* 75 Capacitive Touch Module B */
        (void*) (0UL),                  /* 76 Reserved */
        (void*) TWIM2_Handler,          /* 77 Two-wire Master Interface 2 */
        (void*) TWIM3_Handler,          /* 78 Two-wire Master Interface 3 */
#ifdef ID_LCDCA
        (void*) LCDCA_Handler           /* 79 LCD Controller */
#else
        (void*) (0UL)                   /* 79 Reserved */
#endif
};

/**------------------------------------------------------------------------------
 * This is the code that gets called on processor reset. To initialize the
 * device.
 *------------------------------------------------------------------------------*/
int __low_level_init(void)
{
        uint32_t *pSrc = __section_begin(".intvec");

        SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);

        return 1; /* if return 0, the data sections will not be initialized */
}

/**------------------------------------------------------------------------------
 * This is the code that gets called on processor reset. To initialize the
 * device.
 *------------------------------------------------------------------------------*/
void Reset_Handler(void)
{
        __iar_program_start();
}

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
        while (1) {
        }
}
