################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/mytimer/mytimer.cpp 

OBJS += \
./Core/mytimer/mytimer.o 

CPP_DEPS += \
./Core/mytimer/mytimer.d 


# Each subdirectory must supply rules for building sources it contributes
Core/mytimer/%.o: ../Core/mytimer/%.cpp Core/mytimer/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/William/STM32CubeIDE/workspace_1.8.0/NUCLEO-F446RE/Core/mygpio" -I"C:/Users/William/STM32CubeIDE/workspace_1.8.0/NUCLEO-F446RE/Core/mytimer" -I"C:/Users/William/STM32CubeIDE/workspace_1.8.0/NUCLEO-F446RE/Core/myqueue" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-mytimer

clean-Core-2f-mytimer:
	-$(RM) ./Core/mytimer/mytimer.d ./Core/mytimer/mytimer.o

.PHONY: clean-Core-2f-mytimer

