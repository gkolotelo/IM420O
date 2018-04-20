/* ###################################################################
**     Filename    : os_tasks.c
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
** @file os_tasks.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup os_tasks_module os_tasks module documentation
**  @{
*/         
/* MODULE os_tasks */

#include "Cpu.h"
#include "Events.h"
#include "rtos_main_task.h"
#include "os_tasks.h"
#include "hal/led/ledrgb_hal.h"

#ifdef __cplusplus
extern "C" {
#endif 


int i = 0;

/* User includes (#include below this line is not maintained by Processor Expert) */


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
void Task_RedLed_entry(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */
  
	uint16_t led_delay = 200;
	uint16_t state = 1;

	ledrgb_clearRedLed();


	#ifdef PEX_USE_RTOS
	  while (1) {
	#endif
	    /* Write your code here ... */

		  if(state == 1)
		  {
			  ledrgb_setRedLed();
			  state = 2;
			  OSA_TimeDelay(led_delay);                 /* Example code (for task release) */
		  }
		  if(state == 2)
		  {
			  ledrgb_clearRedLed();
			  state = 1;
			  OSA_TimeDelay(led_delay);                 /* Example code (for task release) */
		  }

    
    
#ifdef PEX_USE_RTOS   
  }
#endif    
}

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
void Task_GreenLed_entry(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */

	uint16_t led_delay = 100;
	uint16_t state = 1;

	ledrgb_clearGreenLed();


	#ifdef PEX_USE_RTOS
	  while (1) {
	#endif
	    /* Write your code here ... */

		  if(state == 1)
		  {
			  ledrgb_setGreenLed();
			  state = 2;
			  OSA_TimeDelay(led_delay);                 /* Example code (for task release) */
		  }
		  if(state == 2)
		  {
			  ledrgb_clearGreenLed();
			  state = 1;
			  OSA_TimeDelay(led_delay);                 /* Example code (for task release) */
		  }
    
    
#ifdef PEX_USE_RTOS   
  }
#endif    
}

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
void Task_BlueLed_entry(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */

	uint16_t led_delay = 1000;
	uint16_t state = 1;

	ledrgb_clearBlueLed();

	// Force delay:
	for(int i=0;i<10000000;i++)__asm("nop");
  
#ifdef PEX_USE_RTOS
  while (1) {
#endif
    /* Write your code here ... */
    
	  if(state == 1)
	  {
		  ledrgb_setBlueLed();
		  state = 2;
		  for(int i=0; i<10000000; i++)__asm("nop");
	  }
	  if(state == 2)
	  {
		  ledrgb_clearBlueLed();
		  state = 1;
		  for(int i=0; i<10000000; i++)__asm("nop");
	  }

	  OSA_TimeDelay(led_delay);                 /* Example code (for task release) */
   
    
    
    
#ifdef PEX_USE_RTOS   
  }
#endif    
}

/* END os_tasks */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

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
