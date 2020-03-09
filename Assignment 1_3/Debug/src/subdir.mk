################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Assignment\ 1_3.cpp 

OBJS += \
./src/Assignment\ 1_3.o 

CPP_DEPS += \
./src/Assignment\ 1_3.d 


# Each subdirectory must supply rules for building sources it contributes
src/Assignment\ 1_3.o: ../src/Assignment\ 1_3.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Assignment 1_3.d" -MT"src/Assignment\ 1_3.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


