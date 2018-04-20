/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.h
**     Project     : semaphore_project_K64F
**     Processor   : MK64FN1M0VLL12
**     Component   : MK64FN1M0LL12_4SDK
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.3.0
**     Datasheet   : K64P144M120SF5RM, Rev.2, January 2014
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-20, 20:20, # CodeGen: 0
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         SystemInit            - void SystemInit(void);
**         SystemCoreClockUpdate - void SystemCoreClockUpdate(void);
**
**     (c) Freescale Semiconductor, Inc.
**     2004 All Rights Reserved
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Cpu.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

#ifndef __Cpu_H
#define __Cpu_H

/* MODULE Cpu. */

/*Include shared modules, which are used for whole project*/
#include "fsl_device_registers.h"
#include "fsl_clock_manager.h"
#include "fsl_interrupt_manager.h"
#include "fsl_os_abstraction.h"
#include "osa1.h"
#include "fsl_mcg_hal.h"
#include "fsl_sim_hal.h"
#include "fsl_osc_hal.h"
#include "fsl_rtc_hal.h"
#include "fsl_port_hal.h"
#include <assert.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CPU_PERIPHERALS_INIT                               0x00U     /* Peripherals_Init() method is not called in PE_low_level_init() */ 
#define CPU_COMPONENTS_INIT                                0x01U     /* Call Components_Init() method in PE_low_level_init() */ 
#define CPU_INIT_CONFIG                                    0x00U     /* Do not include Init_Config.h in the main.c file */ 
#define CPU_HARDWARE_INIT                                  0x01U     /* Call hardware_init() method in PE_low_level_init() */ 
#define CPU_COMMON_INIT                                    0x00U     /* Common_Init() method is not called in PE_low_level_init() */ 

/*
** ===================================================================
**     Method      :  Common_Init (component MK64FN1M0LL12_4SDK)
**     Description :
**         Initialization of registers for that there is no 
**         initialization component.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#if CPU_COMMON_INIT
void Common_Init(void);
#endif /* CPU_COMMON_INIT */

/*
** ===================================================================
**     Method      :  Components_Init (component MK64FN1M0LL12_4SDK)
**     Description :
**         Initialization of components (with exception for Peripheral
**         Initialization Components which are initialized in 
**         Peripherals_Init() method).
**         For example, if automatic initialization feature 
**         is enabled in LDD component then its Init method call 
**         is executed in Components_Init() method.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#if CPU_COMPONENTS_INIT
void Components_Init(void);
#endif /* CPU_COMPONENTS_INIT */

/*
** ===================================================================
**     Method      :  PE_low_level_init (component MK64FN1M0LL12_4SDK)
**
**     Description :
**         Initializes components and provides common register 
**         initialization. The method is called automatically as a part 
**         of the application initialization code.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
extern void PE_low_level_init(void);



#ifdef __cplusplus
}
#endif

/* END Cpu. */

#endif
/* __Cpu_H */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
