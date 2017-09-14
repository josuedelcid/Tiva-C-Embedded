// File:  UART_HAL.h
// Author: JS
// Date:  9/9/17
// Purpose: UART configuration and read/write utilities
// Hardware:  TM4C123 Tiva board

#ifndef UART_HAL_H
#define UART_HAL_H

typedef enum {
	UART0,
	UART1,
	UART2,
	UART3,
	UART4,
	UART5,
	UART6,
	UART7
} UART_ID_t;

int UART_Init(UART_ID_t uartId, uint32_t baud);
void UART_WriteChar(UART_ID_t uartId, char c);
void UART_WriteString(UART_ID_t uartId, char* sz);
char UART_ReadChar(UART_ID_t uartId);

#endif


