#ifndef _ADC_H
#define _ADC_H

#include "main.h"

#include "stm32f10x_adc.h"

typedef struct
{
	ADC_TypeDef* adc_port;
	uint16_t adcValues[2];
	uint16_t adcAverage[2];
	float temp1;
	float temp2;
}adc1_handle_t;

extern adc1_handle_t adc1_handle;

void ADC1_Init_Config(void);
void TaskAdc(void *pvParameters)__attribute__((noreturn));

#endif
