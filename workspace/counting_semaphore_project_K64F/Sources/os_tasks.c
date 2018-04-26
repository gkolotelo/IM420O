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



/* User includes (#include below this line is not maintained by Processor Expert) */

extern semaphore_t blue_led_count_sema_handle;

/*
** ===================================================================
**     Callback    : task_blue_LED_OFF_entry
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void task_blue_LED_OFF_entry(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */

	int state = 1;
	osa_status_t status;
	OSA_TimeDelay(10);
  
#ifdef PEX_USE_RTOS
  while (1) {
#endif
    /* Write your code here ... */

	switch(state){
		  case 1: // Acquire semaphore token
			  status = OSA_SemaWait(&blue_led_count_sema_handle,OSA_WAIT_FOREVER);
			  if(status == kStatus_OSA_Timeout)break;
			  if(status == kStatus_OSA_Success)
			  {
				  state = 2;
				  break;
			  }

			  break;

		  case 2: // Clear Blue LED
			  ledrgb_clearBlueLed();
			  state = 3;
			  break;

		  case 3: // Wait
			  for(int i=0; i<1000000; i++)__asm("nop"); // ~1 sec
			  state = 1;
			  break;

	  }
    
    
#ifdef PEX_USE_RTOS   
  }
#endif    
}

/*
** ===================================================================
**     Callback    : task_blue_LED_ON_entry
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void task_blue_LED_ON_entry(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */

	int state = 1;
	osa_status_t status;
	OSA_TimeDelay(10);

#ifdef PEX_USE_RTOS
  while (1) {
#endif
	  /* Write your code here ... */

		switch(state){
			  case 1: // Acquire semaphore token
				  status = OSA_SemaWait(&blue_led_count_sema_handle,OSA_WAIT_FOREVER);
				  if(status == kStatus_OSA_Timeout)break;
				  if(status == kStatus_OSA_Success)
				  {
					  state = 2;
					  break;
				  }

				  break;

			  case 2: // Set Blue LED
				  ledrgb_setBlueLed();
				  state = 3;
				  break;

			  case 3: // Wait
				  for(int i=0; i<1000000; i++)__asm("nop"); // ~1 sec
				  state = 1;
				  break;

		  }
    
#ifdef PEX_USE_RTOS   
  }
#endif    
}

/*
** ===================================================================
**     Callback    : task_free_resource_entry
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void task_free_resource_entry(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */

	int state = 1;
	OSA_TimeDelay(10);
  
#ifdef PEX_USE_RTOS
  while (1) {
#endif
    /* Write your code here ... */
    
	  switch(state){
		  case 1: // Idle
			  state = 2;
			  break;

		  case 2: // Set Red LED
			  ledrgb_setRedLed();
			  state = 3;
			  break;

		  case 3: // Free resource
			  for(int i=0; i<1000000; i++)__asm("nop"); // ~0.1 sec
			  state = 4;
			  break;

		  case 4: // Release token
			  ledrgb_clearRedLed();
			  OSA_SemaPost(&blue_led_count_sema_handle);
			  OSA_TimeDelay(10);
			  state = 1;
			  break;

	  }
   
    
    
    
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
