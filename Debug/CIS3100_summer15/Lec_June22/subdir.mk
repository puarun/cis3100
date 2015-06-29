################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../CIS3100_summer15/Lec_June22/Main.cpp \
../CIS3100_summer15/Lec_June22/add1.cpp \
../CIS3100_summer15/Lec_June22/mul2.cpp \
../CIS3100_summer15/Lec_June22/sub4.cpp 

OBJS += \
./CIS3100_summer15/Lec_June22/Main.o \
./CIS3100_summer15/Lec_June22/add1.o \
./CIS3100_summer15/Lec_June22/mul2.o \
./CIS3100_summer15/Lec_June22/sub4.o 

CPP_DEPS += \
./CIS3100_summer15/Lec_June22/Main.d \
./CIS3100_summer15/Lec_June22/add1.d \
./CIS3100_summer15/Lec_June22/mul2.d \
./CIS3100_summer15/Lec_June22/sub4.d 


# Each subdirectory must supply rules for building sources it contributes
CIS3100_summer15/Lec_June22/%.o: ../CIS3100_summer15/Lec_June22/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include/opencv -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


