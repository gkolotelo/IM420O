################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/drivers/src/rtc/fsl_rtc_common.c 

OBJS += \
./SDK/platform/drivers/src/rtc/fsl_rtc_common.o 

C_DEPS += \
./SDK/platform/drivers/src/rtc/fsl_rtc_common.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/drivers/src/rtc/%.o: ../SDK/platform/drivers/src/rtc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"CPU_MKL25Z128VLK4" -D"FSL_RTOS_FREE_RTOS" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/platform/hal/inc" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/platform/hal/src/sim/MKL25Z4" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/platform/system/src/clock/MKL25Z4" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/platform/system/inc" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/platform/osa/inc" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/platform/CMSIS/Include" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/platform/devices" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/platform/devices/MKL25Z4/include" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/Sources" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/Generated_Code" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/rtos/FreeRTOS/include" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/SDK/rtos/FreeRTOS/port/gcc" -I"C:/Users/aluno/Documents/gkk/IM420O/workspace/led_project/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


