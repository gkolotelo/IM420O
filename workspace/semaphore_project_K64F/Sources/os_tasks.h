/* ###################################################################
**     Filename    : os_tasks.h
**     Project     : main_project
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-03-13, 14:11, # CodeGen: 2
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Task2_task - void Task2_task(os_task_param_t task_init_data);
**         Task1_task - void Task1_task(os_task_param_t task_init_data);
**
** ###################################################################*/
/*!
** @file os_tasks.h
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup os_tasks_module os_tasks module documentation
**  @{
*/         

#ifndef __os_tasks_H
#define __os_tasks_H
/* MODULE os_tasks */

#include "fsl_device_registers.h"
#include "clockMan1.h"
#include "pin_init.h"
#include "osa1.h"
#include "free_rtos.h"
#include "MainTask.h"
#include "task_blue_LED_ON.h"
#include "task_blue_LED_OFF.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Event       :  Task2_task (module os_tasks)
**
**     Component   :  Task2 [OS_Task]
*/
/*!
**     @brief
**         RTOS task routine. The routine is generated into os_tasks.c
**         file.
**     @param
**         task_init_data  - Parameter to be passed to the
**         task when it is created.
*/
/* ===================================================================*/
void Task2_task(os_task_param_t task_init_data);

/*
** ===================================================================
**     Event       :  Task1_task (module os_tasks)
**
**     Component   :  Task1 [OS_Task]
*/
/*!
**     @brief
**         RTOS task routine. The routine is generated into os_tasks.c
**         file.
**     @param
**         task_init_data  - Parameter to be passed to the
**         task when it is created.
*/
/* ===================================================================*/
void Task1_task(os_task_param_t task_init_data);


/*
** ===================================================================
**     Event       :  Task_RedLed_entry (module os_tasks)
**
**     Component   :  Task_RedLed [OS_Task]
*/
/*!
**     @brief
**         RTOS task routine. The routine is generated into os_tasks.c
**         file.
**     @param
**         task_init_data  - Parameter to be passed to the
**         task when it is created.
*/
/* ===================================================================*/
void Task_RedLed_entry(os_task_param_t task_init_data);

/*
** ===================================================================
**     Event       :  Task_GreenLed_entry (module os_tasks)
**
**     Component   :  Task_GreenLed [OS_Task]
*/
/*!
**     @brief
**         RTOS task routine. The routine is generated into os_tasks.c
**         file.
**     @param
**         task_init_data  - Parameter to be passed to the
**         task when it is created.
*/
/* ===================================================================*/
void Task_GreenLed_entry(os_task_param_t task_init_data);

/*
** ===================================================================
**     Event       :  Task_BlueLed_entry (module os_tasks)
**
**     Component   :  Task_BlueLed [OS_Task]
*/
/*!
**     @brief
**         RTOS task routine. The routine is generated into os_tasks.c
**         file.
**     @param
**         task_init_data  - Parameter to be passed to the
**         task when it is created.
*/
/* ===================================================================*/
void Task_BlueLed_entry(os_task_param_t task_init_data);

/*
** ===================================================================
**     Callback    : task_blue_LED_OFF_entry
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void task_blue_LED_OFF_entry(os_task_param_t task_init_data);

/*
** ===================================================================
**     Callback    : task_blue_LED_ON_entry
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void task_blue_LED_ON_entry(os_task_param_t task_init_data);

/* END os_tasks */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __os_tasks_H*/
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
