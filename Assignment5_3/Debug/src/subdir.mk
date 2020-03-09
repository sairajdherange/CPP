################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Assignment5_3.cpp \
../src/employee.cpp \
../src/manager.cpp \
../src/salesman.cpp \
../src/salesmanager.cpp 

OBJS += \
./src/Assignment5_3.o \
./src/employee.o \
./src/manager.o \
./src/salesman.o \
./src/salesmanager.o 

CPP_DEPS += \
./src/Assignment5_3.d \
./src/employee.d \
./src/manager.d \
./src/salesman.d \
./src/salesmanager.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


