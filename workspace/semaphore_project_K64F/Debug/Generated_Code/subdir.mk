################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/Cpu.c \
../Generated_Code/MainTask.c \
../Generated_Code/clockMan1.c \
../Generated_Code/free_rtos.c \
../Generated_Code/hardware_init.c \
../Generated_Code/osa1.c \
../Generated_Code/pin_init.c \
../Generated_Code/task_blue_LED_OFF.c \
../Generated_Code/task_blue_LED_ON.c 

OBJS += \
./Generated_Code/Cpu.o \
./Generated_Code/MainTask.o \
./Generated_Code/clockMan1.o \
./Generated_Code/free_rtos.o \
./Generated_Code/hardware_init.o \
./Generated_Code/osa1.o \
./Generated_Code/pin_init.o \
./Generated_Code/task_blue_LED_OFF.o \
./Generated_Code/task_blue_LED_ON.o 

C_DEPS += \
./Generated_Code/Cpu.d \
./Generated_Code/MainTask.d \
./Generated_Code/clockMan1.d \
./Generated_Code/free_rtos.d \
./Generated_Code/hardware_init.d \
./Generated_Code/osa1.d \
./Generated_Code/pin_init.d \
./Generated_Code/task_blue_LED_OFF.d \
./Generated_Code/task_blue_LED_ON.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MK64FN1M0VLL12" -D"FSL_RTOS_FREE_RTOS" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/hal/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/hal/src/sim/MK64F12" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/system/src/clock/MK64F12" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/system/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/osa/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/CMSIS/Include" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/devices" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/devices/MK64F12/include" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/utilities/src" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/utilities/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/devices/MK64F12/startup" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/Generated_Code/SDK/platform/devices/MK64F12/startup" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/Sources" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/Generated_Code" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/rtos/FreeRTOS/include" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/rtos/FreeRTOS/port/gcc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


