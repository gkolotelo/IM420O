/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.c
**     Project     : queue_project_K64F
**     Processor   : MK64FN1M0VLL12
**     Component   : MK64FN1M0LL12_4SDK
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.3.0
**     Datasheet   : K64P144M120SF5RM, Rev.2, January 2014
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-26, 20:09, # CodeGen: 19
**     Abstract    :
**
**     Settings    :
**          Component name                                 : Cpu
**          CPU type                                       : MK64FN1M0VLL12
**          fsl_clock_manager                              : clockMan1
**          CPU                                            : CPU
**          MemModelDev                                    : MemModel_NoFlexMem
**          Low power mode settings                        : 
**            Allowed power modes                          : 
**              Very low power modes                       : Allowed
**              Low leakage stop mode                      : Allowed
**              Very low leakage stop mode                 : Allowed
**          Flash memory organization                      : 
**            Flash blocks                                 : 2
**              Flash block 0                              : PFlash
**                Address                                  : 0x0
**                Size                                     : 524288
**                Write unit size                          : 8
**                Erase unit size                          : 4096
**                Protection unit size                     : 32768
**              Flash block 1                              : PFlash
**                Address                                  : 0x80000
**                Size                                     : 524288
**                Write unit size                          : 8
**                Erase unit size                          : 4096
**                Protection unit size                     : 32768
**          Flash configuration field                      : Disabled
**          Watchdog settings                              : 
**            Watchdog disable                             : yes
**          Pins/Signals                                   : 
**            Reset pin                                    : Enabled
**              Reset Pin                                  : RESET/J3_6
**            Debug interface (JTAG)                       : 
**              JTAG Mode                                  : JTAG
**                TDI                                      : Enabled
**                  TDI Pin                                : J1_8
**                TDO                                      : Enabled
**                  TDO Pin                                : J1_12
**                TCK                                      : Enabled
**                  TCK Pin                                : SWD_CLK/J2_2/J11_1
**                TMS                                      : Enabled
**                  TMS Pin                                : SWD_DIO
**                nTRST                                    : Disabled
**     Contents    :
**         SystemInit            - void SystemInit(void);
**         SystemCoreClockUpdate - void SystemCoreClockUpdate(void);
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
** @file Cpu.c
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

#if !defined(__PE_LOW_LEVEL_INIT_H__)
#define __PE_LOW_LEVEL_INIT_H__

#include "Cpu.h"
#include "Events.h"

#endif /* __PE_LOW_LEVEL_INIT_H__ */
