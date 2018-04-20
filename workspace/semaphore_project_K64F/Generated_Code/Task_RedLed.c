/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Task_RedLed.c
**     Project     : semaphore_project_K64F
**     Processor   : MK64FN1M0VLL12
**     Component   : OS_Task
**     Version     : Component 1.3.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.3.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-20, 20:20, # CodeGen: 0
**     Contents    :
**         Init - osa_status_t Task_RedLed_Init(void);
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
** @file Task_RedLed.c
** @version 01.00
*/         
/*!
**  @addtogroup Task_RedLed_module Task_RedLed module documentation
**  @{
*/         

/* MODULE Task_RedLed. */

#include "os_tasks.h"
#include "Task_RedLed.h"

/* Define resources for a task statically */
OSA_TASK_DEFINE(Task_RedLed, TASK_REDLED_TASK_STACK_SIZE);

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
osa_status_t Task_RedLed_Init(void)
{
  /* Create "Task_RedLed" task */    
  if (OSA_TaskCreate(Task_RedLed_entry, /* The task function entry */
                     (uint8_t *)TASK_REDLED_TASK_NAME, /* The name of this task */
                     TASK_REDLED_TASK_STACK_SIZE, /* The stack size in byte */  
                     Task_RedLed_stack, /* Pointer to the stack */            
                     TASK_REDLED_TASK_PRIORITY, /* Initial priority of the task */
                     (task_param_t)(NULL), /* Pointer to be passed to the task when it is created */
                     false,            /* This task will use not float register */
                     &Task_RedLed_task_handler) /* Pointer to the task handler */  
                                    != kStatus_OSA_Success) {
    return kStatus_OSA_Error;                 
  }
  return kStatus_OSA_Success;               
}

/* END Task_RedLed. */

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