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
#include <stdlib.h>

extern msg_queue_t led_queue_handle;
//struct {
//	bool R;
//	bool G;
//	bool B;
//} typedef led_msg; found at os_tasks.h
extern led_msg led_message;


/*
** ===================================================================
**     Callback    : task_recv_entry
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void task_recv_entry(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */
	OSA_TimeDelay(10);
	led_msg led_message;
	osa_status_t status;
	int state = 1;
  
#ifdef PEX_USE_RTOS
  while (1) {
#endif
    /* Write your code here ... */
    
	  switch(state){
	  	  case 1: // Receive message
	  		  status = OSA_MsgQGet(led_queue_handle,&led_message,2000);
	  		  if(status == kStatus_OSA_Success)
	  			  state = 2;
	  		  if(status == kStatus_OSA_Timeout)
	  			  state = 4;
	  		  break;

	  	  case 2: // Set LEDs
	  		  if(led_message.R)ledrgb_setRedLed();
			  else ledrgb_clearRedLed();

			  if(led_message.G)ledrgb_setGreenLed();
			  else ledrgb_clearGreenLed();

			  if(led_message.B)ledrgb_setBlueLed();
			  else ledrgb_clearBlueLed();

			  state = 3;
			  break;

	  	  case 3: // Wait
	  		  OSA_TimeDelay(200);
	  		  state = 1;
	  		  break;

	  	  case 4: // Clear LEDs
	  		ledrgb_clearRedLed();
	  		ledrgb_clearGreenLed();
	  		ledrgb_clearBlueLed();
	  		state = 1;
	  		break;

	  }
    







    

#ifdef PEX_USE_RTOS   
  }
#endif    
}

/*
** ===================================================================
**     Callback    : task_send_entry
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void task_send_entry(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */

	srand(OSA_TimeGetMsec());
	int rand_nmbr;
	led_msg led_message;
	OSA_TimeDelay(10);
	osa_status_t status;
	int state = 1;
  
#ifdef PEX_USE_RTOS
  while (1) {
#endif
    
	  switch(state){
		  case 1: // Idle
			  if(OSA_TimeGetMsec() < 2500)
				  state = 2;
			  break;

		  case 2: // Generate random RGB
			  rand_nmbr = rand() > 0x3FFFFFFF;
			  led_message.R = (bool) rand_nmbr;

			  rand_nmbr = rand() > 0x3FFFFFFF;
			  led_message.G = (bool) rand_nmbr;

			  rand_nmbr = rand() > 0x3FFFFFFF;
			  led_message.B = (bool) rand_nmbr;

			  state = 3;
			  break;

		  case 3: // Send message
			  status = OSA_MsgQPut(led_queue_handle,&led_message);
			  if(status == kStatus_OSA_Success)
				  state = 4;
			  break;

		  case 4: // Wait
			  OSA_TimeDelay(50);
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
