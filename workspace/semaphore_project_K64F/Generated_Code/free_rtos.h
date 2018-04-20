/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : free_rtos.h
**     Project     : semaphore_project_K64F
**     Processor   : MK64FN1M0VLL12
**     Component   : FreeRTOS
**     Version     : Component 8.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.3.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-20, 20:20, # CodeGen: 0
**     Contents    :
**         xCoRoutineCreate               - BaseType_t xCoRoutineCreate(crCOROUTINE_CODE pxCoRoutineCode,UBaseType_t...
**         crDELAY                        - void crDELAY(CoRoutineHandle_t xHandle ,TickType_t xTicksToDelay);
**         crQUEUE_SEND                   - void crQUEUE_SEND(CoRoutineHandle_t xHandle, QueueHandle_t xQueue, void...
**         crQUEUE_RECEIVE                - void crQUEUE_RECEIVE(CoRoutineHandle_t xHandle, QueueHandle_t xQueue, void...
**         crQUEUE_SEND_FROM_ISR          - BaseType_t crQUEUE_SEND_FROM_ISR(QueueHandle_t xQueue, void * pvItemToQueue,...
**         crQUEUE_RECEIVE_FROM_ISR       - BaseType_t crQUEUE_RECEIVE_FROM_ISR(QueueHandle_t xQueue, void * pvBuffer,...
**         vCoRoutineSchedule             - void vCoRoutineSchedule(void);
**         xEventGroupCreate              - EventGroupHandle_t xEventGroupCreate(void);
**         xEventGroupClearBits           - EventBits_t xEventGroupClearBits(EventGroupHandle_t xEventGroup,const...
**         xEventGroupClearBitsFromISR    - EventBits_t xEventGroupClearBitsFromISR(EventGroupHandle_t xEventGroup,const...
**         vEventGroupDelete              - void vEventGroupDelete(EventGroupHandle_t xEventGroup);
**         xEventGroupGetBits             - EventBits_t xEventGroupGetBits(EventGroupHandle_t xEventGroup);
**         xEventGroupGetBitsFromISR      - EventBits_t xEventGroupGetBitsFromISR(EventGroupHandle_t xEventGroup);
**         xEventGroupSetBits             - EventBits_t xEventGroupSetBits(EventGroupHandle_t xEventGroup, const...
**         xEventGroupSetBitsFromISR      - BaseType_t xEventGroupSetBitsFromISR(EventGroupHandle_t xEventGroup, const...
**         xEventGroupSync                - EventBits_t xEventGroupSync(EventGroupHandle_t xEventGroup, const EventBits_t...
**         xEventGroupWaitBits            - EventBits_t xEventGroupWaitBits(EventGroupHandle_t xEventGroup,const...
**         vQueueAddToRegistry            - void vQueueAddToRegistry(QueueHandle_t xQueue,const char * pcName);
**         xQueueAddToSet                 - BaseType_t xQueueAddToSet(QueueSetMemberHandle_t...
**         xQueueCreate                   - QueueHandle_t xQueueCreate(UBaseType_t uxQueueLength, UBaseType_t uxItemSize);
**         xQueueCreateSet                - QueueSetHandle_t xQueueCreateSet(const UBaseType_t uxEventQueueLength);
**         vQueueDelete                   - void vQueueDelete(QueueHandle_t xQueue);
**         xQueueIsQueueEmptyFromISR      - BaseType_t xQueueIsQueueEmptyFromISR(const QueueHandle_t xQueue);
**         xQueueIsQueueFullFromISR       - BaseType_t xQueueIsQueueFullFromISR(const QueueHandle_t xQueue);
**         uxQueueMessagesWaiting         - UBaseType_t uxQueueMessagesWaiting(const QueueHandle_t xQueue);
**         uxQueueMessagesWaitingFromISR  - BaseType_t uxQueueMessagesWaitingFromISR(QueueHandle_t xQueue, const void *...
**         xQueueOverwriteFromISR         - BaseType_t xQueueOverwriteFromISR(QueueHandle_t xQueue, const void *...
**         xQueuePeek                     - BaseType_t xQueuePeek(QueueHandle_t xQueue,void *pvBuffer, TickType_t...
**         xQueuePeekFromISR              - BaseType_t xQueuePeekFromISR(QueueHandle_t xQueue,void *pvBuffer);
**         xQueueReceive                  - BaseType_t xQueueReceive(QueueHandle_t xQueue,void *pvBuffer,TickType_t...
**         xQueueReceiveFromISR           - BaseType_t xQueueReceiveFromISR(QueueHandle_t xQueue,void *const...
**         xQueueRemoveFromSet            - BaseType_t xQueueRemoveFromSet(QueueSetMemberHandle_t...
**         xQueueReset                    - BaseType_t xQueueReset(QueueHandle_t xQueue);
**         xQueueSelectFromSet            - QueueSetMemberHandle_t xQueueSelectFromSet(QueueSetHandle_t xQueueSet,const...
**         xQueueSelectFromSetFromISR     - QueueSetMemberHandle_t xQueueSelectFromSetFromISR(QueueSetHandle_t xQueueSet);
**         xQueueSend                     - BaseType_t xQueueSend(QueueHandle_t xQueue, const void * pvItemToQueue,...
**         xQueueSendToFront              - BaseType_t xQueueSendToFront(QueueHandle_t xQueue, const void *...
**         xQueueSendToBack               - BaseType_t xQueueSendToBack(QueueHandle_t xQueue, const void * pvItemToQueue,...
**         xQueueSendFromISR              - BaseType_t xQueueSendFromISR(QueueHandle_t xQueue, const void *...
**         xQueueSendToBackFromISR        - BaseType_t xQueueSendToBackFromISR(QueueHandle_t xQueue, const void *...
**         xQueueSendToFrontFromISR       - BaseType_t xQueueSendToFrontFromISR(QueueHandle_t xQueue, const void *...
**         uxQueueSpacesAvailable         - UBaseType_t uxQueueSpacesAvailable(const QueueHandle_t xQueue);
**         vSemaphoreCreateBinary         - void vSemaphoreCreateBinary(SemaphoreHandle_t xSemaphore);
**         xSemaphoreCreateBinary         - SemaphoreHandle_t xSemaphoreCreateBinary(void);
**         xSemaphoreCreateCounting       - SemaphoreHandle_t xSemaphoreCreateCounting(UBaseType_t uxMaxCount,...
**         xSemaphoreCreateMutex          - SemaphoreHandle_t xSemaphoreCreateMutex(void);
**         xSemaphoreCreateRecursiveMutex - SemaphoreHandle_t xSemaphoreCreateRecursiveMutex(void);
**         vSemaphoreDelete               - void vSemaphoreDelete(SemaphoreHandle_t xSemaphore);
**         xSemaphoreGetMutexHolder       - TaskHandle_t xSemaphoreGetMutexHolder(SemaphoreHandle_t xMutex);
**         xSemaphoreGive                 - BaseType_t xSemaphoreGive(SemaphoreHandle_t xSemaphore);
**         xSemaphoreGiveFromISR          - BaseType_t xSemaphoreGiveFromISR(SemaphoreHandle_t xSemaphore, signed...
**         xSemaphoreGiveRecursive        - BaseType_t xSemaphoreGiveRecursive(SemaphoreHandle_t xMutex);
**         xSemaphoreTake                 - BaseType_t xSemaphoreTake(SemaphoreHandle_t xSemaphore, TickType_t...
**         xSemaphoreTakeFromISR          - BaseType_t xSemaphoreTakeFromISR(SemaphoreHandle_t xSemaphore, signed...
**         xSemaphoreTakeRecursive        - BaseType_t xSemaphoreTakeRecursive(SemaphoreHandle_t xMutex, TickType_t...
**         xTimerChangePeriod             - BaseType_t xTimerChangePeriod(TimerHandle_t xTimer, TickType_t xNewPeriod,...
**         xTimerChangePeriodFromISR      - BaseType_t xTimerChangePeriodFromISR(TimerHandle_t xTimer, BaseType_t...
**         xTimerCreate                   - TimerHandle_t xTimerCreate(const char *const pcTimerName,const TickType_t...
**         xTimerDelete                   - BaseType_t xTimerDelete(TimerHandle_t xTimer, TickType_t xBlockTime);
**         xTimerGetTimerDaemonTaskHandle - TaskHandle_t xTimerGetTimerDaemonTaskHandle(void);
**         pvTimerGetTimerID              - void* pvTimerGetTimerID(TimerHandle_t xTimer);
**         pcTimerGetTimerName            - const char * pcTimerGetTimerName(TimerHandle_t xTimer);
**         xTimerIsTimerActive            - BaseType_t xTimerIsTimerActive(TimerHandle_t xTimer);
**         xTimerPendFunctionCall         - BaseType_t xTimerPendFunctionCall(PendedFunction_t xFunctionToPend,void *...
**         xTimerPendFunctionCallFromISR  - BaseType_t xTimerPendFunctionCallFromISR(PendedFunction_t...
**         xTimerReset                    - BaseType_t xTimerReset(TimerHandle_t xTimer, TickType_t xBlockTime);
**         xTimerResetFromISR             - BaseType_t xTimerResetFromISR(TimerHandle_t xTimer, BaseType_t...
**         xTimerStart                    - BaseType_t xTimerStart(TimerHandle_t xTimer, TickType_t xBlockTime);
**         xTimerStartFromISR             - BaseType_t xTimerStartFromISR(TimerHandle_t xTimer, BaseType_t...
**         xTimerStop                     - BaseType_t xTimerStop(TimerHandle_t xTimer, TickType_t xBlockTime);
**         xTimerStopFromISR              - BaseType_t xTimerStopFromISR(TimerHandle_t xTimer, BaseType_t...
**         portSWITCH_TO_USER_MODE        - void portSWITCH_TO_USER_MODE(void);
**         vTaskAllocateMPURegions        - void vTaskAllocateMPURegions(TaskHandle_t xTaskToModify, const MemoryRegion_t...
**         xTaskCreate                    - BaseType_t xTaskCreate(TaskFunction_t pvTaskCode, const char * const pcName,...
**         xTaskCreateRestricted          - BaseType_t xTaskCreateRestricted(TaskParameters_t *pxTaskDefinition,...
**         vTaskDelay                     - void vTaskDelay(const TickType_t xTicksToDelay);
**         vTaskDelayUntil                - void vTaskDelayUntil(TickType_t *const pxPreviousWakeTime,const TickType_t...
**         vTaskDelete                    - void vTaskDelete(TaskHandle_t xTaskToDelete);
**         taskDISABLE_INTERRUPTS         - void taskDISABLE_INTERRUPTS(void);
**         taskENABLE_INTERRUPTS          - void taskENABLE_INTERRUPTS(void);
**         taskENTER_CRITICAL             - void taskENTER_CRITICAL(void);
**         taskEXIT_CRITICAL              - void taskEXIT_CRITICAL(void);
**         xTaskGetApplicationTaskTag     - TaskHookFunction_t xTaskGetApplicationTaskTag(TaskHandle_t xTask);
**         uxTaskGetNumberOfTasks         - UBaseType_t uxTaskGetNumberOfTasks();
**         vTaskGetRunTimeStats           - void vTaskGetRunTimeStats(char * pcWriteBuffer,size_t bufSize);
**         xTaskGetSchedulerState         - BaseType_t xTaskGetSchedulerState();
**         uxTaskGetStackHighWaterMark    - UBaseType_t uxTaskGetStackHighWaterMark(TaskHandle_t xTask);
**         uxTaskGetSystemState           - UBaseType_t uxTaskGetSystemState(TaskStatus_t *const pxTaskStatusArray,const...
**         xTaskGetTickCount              - TickType_t xTaskGetTickCount();
**         xTaskGetTickCountFromISR       - TickType_t xTaskGetTickCountFromISR();
**         vTaskList                      - void vTaskList(char * pcWriteBuffer,size_t bufSize);
**         uxTaskPriorityGet              - UBaseType_t uxTaskPriorityGet(TaskHandle_t xTask);
**         vTaskPrioritySet               - void vTaskPrioritySet(TaskHandle_t xTask,UBaseType_t uxNewPriority);
**         vTaskResume                    - void vTaskResume(TaskHandle_t xTaskToResume);
**         xTaskResumeAll                 - BaseType_t xTaskResumeAll();
**         xTaskResumeFromISR             - BaseType_t xTaskResumeFromISR(TaskHandle_t xTaskToResume);
**         vTaskStepTick                  - void vTaskStepTick(const TickType_t xTicksToJump);
**         vTaskSuspend                   - void vTaskSuspend(TaskHandle_t xTaskToSuspend);
**         vTaskSuspendAll                - void vTaskSuspendAll();
**         taskYIELD                      - void taskYIELD();
**         vTaskStartScheduler            - void vTaskStartScheduler();
**         vTaskEndScheduler              - void vTaskEndScheduler();
**         xTaskCallApplicationTaskHook   - BaseType_t xTaskCallApplicationTaskHook(TaskHandle_t xTask,void * pvParameter);
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
** @file free_rtos.h
** @version 01.00
*/         
/*!
**  @addtogroup free_rtos_module free_rtos module documentation
**  @{
*/         

#ifndef __free_rtos_H
#define __free_rtos_H

/* MODULE free_rtos. */

/* Include inherited beans */
#include "MainTask.h"

#include "Cpu.h"

#define PEX_RTOS_START()  {  \
                            MainTask_Init();  \
                            OSA_Start();  \
                          }  
#define PEX_USE_RTOS 


typedef void * os_task_param_t;

/* END free_rtos. */

#endif 
/* ifndef __free_rtos_H */
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
