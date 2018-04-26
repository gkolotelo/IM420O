/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : task_free_resource.h
**     Project     : counting_semaphore_project_K64F
**     Processor   : MK64FN1M0VLL12
**     Component   : OS_Task
**     Version     : Component 1.3.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.3.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-26, 15:36, # CodeGen: 20
**     Contents    :
**         Init - osa_status_t task_free_resource_Init(void);
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
** @file task_free_resource.h
** @version 01.00
*/         
/*!
**  @addtogroup task_free_resource_module task_free_resource module documentation
**  @{
*/         

#ifndef __task_free_resource_H
#define __task_free_resource_H

/* MODULE task_free_resource. */

/* Include inherited beans */
#include "osa1.h"

#include "Cpu.h"

/* task_free_resource task name */  
#define TASK_FREE_RESOURCE_TASK_NAME   "task_free_resource"
/* task_free_resource task stack size */  
#define TASK_FREE_RESOURCE_TASK_STACK_SIZE 1024U
/* task_free_resource task priority value */  
#define TASK_FREE_RESOURCE_TASK_PRIORITY 40U
/*
** ===================================================================
**     Method      :  Init (component OS_Task)
**
**     Description :
**         The method creates and starts task defined by OS_Task 
**         component.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
osa_status_t task_free_resource_Init(void);


/* END task_free_resource. */

#endif 
/* ifndef __task_free_resource_H */
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
