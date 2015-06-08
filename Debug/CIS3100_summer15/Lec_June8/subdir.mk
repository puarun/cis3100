################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../CIS3100_summer15/Lec_June8/Assignment_MacLaurin.cpp \
../CIS3100_summer15/Lec_June8/Main1.cpp \
../CIS3100_summer15/Lec_June8/Main2.cpp 

OBJS += \
./CIS3100_summer15/Lec_June8/Assignment_MacLaurin.o \
./CIS3100_summer15/Lec_June8/Main1.o \
./CIS3100_summer15/Lec_June8/Main2.o 

CPP_DEPS += \
./CIS3100_summer15/Lec_June8/Assignment_MacLaurin.d \
./CIS3100_summer15/Lec_June8/Main1.d \
./CIS3100_summer15/Lec_June8/Main2.d 


# Each subdirectory must supply rules for building sources it contributes
CIS3100_summer15/Lec_June8/%.o: ../CIS3100_summer15/Lec_June8/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include/opencv -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


