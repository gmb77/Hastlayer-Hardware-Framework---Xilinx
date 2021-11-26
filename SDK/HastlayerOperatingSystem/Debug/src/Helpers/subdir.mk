################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Helpers/ValueConverters.cpp 

OBJS += \
./src/Helpers/ValueConverters.o 

CPP_DEPS += \
./src/Helpers/ValueConverters.d 


# Each subdirectory must supply rules for building sources it contributes
src/Helpers/%.o: ../src/Helpers/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 g++ compiler'
	arm-none-eabi-g++ -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I/home/halpa/Documents/Smith-Waterman/Hastlayer/Hastlayer-Hardware-Framework---Xilinx/SDK/Hastlayer_Platform/export/Hastlayer_Platform/sw/Hastlayer_Platform/standalone_ps7_cortexa9_0/bspinclude/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


