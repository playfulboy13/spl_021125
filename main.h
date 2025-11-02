#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "stm32f10x_gpio.h"
#include "stm32f10x_usart.h"
#include "stm32f10x_i2c.h"

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "queue.h"
#include "timers.h"
#include "event_groups.h"

#include "user_task.h"


typedef struct 
{
	GPIO_TypeDef* GPIO_Port;
	uint16_t GPIO_Pin;
	GPIOMode_TypeDef GPIO_Mode;
	GPIOSpeed_TypeDef GPIO_Speed;
}GPIO_Config_t;

void SystemClock_Config(void);
void GPIO_Init_Config(GPIO_Config_t* config);
void GPIO_Config(void);

#endif
