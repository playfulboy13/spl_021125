#include "user_task.h"

void Task1(void *pvParameters)
{
	(void)*pvParameters;
	TickType_t LastWakeTime=xTaskGetTickCount();
	
	while(1)
	{
		LED_GPIO_Port->ODR|=(1<<LED_Pin);
		vTaskDelayUntil(&LastWakeTime,pdMS_TO_TICKS(200));
		LED_GPIO_Port->ODR&=~(uint32_t)(1<<LED_Pin);
		vTaskDelayUntil(&LastWakeTime,pdMS_TO_TICKS(2000));
		//
	}
}
