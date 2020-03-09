################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Assignment5_2.cpp \
../src/date.cpp \
../src/employee.cpp \
../src/person.cpp 

OBJS += \
./src/Assignment5_2.o \
./src/date.o \
./src/employee.o \
./src/person.o 

CPP_DEPS += \
./src/Assignment5_2.d \
./src/date.d \
./src/employee.d \
./src/person.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


