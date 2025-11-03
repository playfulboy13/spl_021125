#ifndef _USART_H
#define _USART_H

#include "main.h"

typedef struct
{
	USART_TypeDef* usart_port;
	SemaphoreHandle_t usart_mutex;
}USART_Handle_t;

extern USART_Handle_t usart_handle;

void USART_Init_Config(USART_Handle_t* usart1_handle);
void USART_SendChar(USART_Handle_t* usart1_handle,char str);
void USART_Send(USART_Handle_t* usart1_handle,char *str);
void USART1_Config(void);
void TaskSendUsart(void *pvParameters)__attribute__((noreturn));
#endif
