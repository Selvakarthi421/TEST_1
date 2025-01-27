/*
 * urt.c
 *
 *  Created on: Jan 23, 2025
 *      Author: ADMIN
 */

#include "uart_header.h"
#include "stm32l4xx_hal.h"

UART_HandleTypeDef huart3;


void uart(void){
	uint8_t TX_buffer[20]="HELLO_";
	uint8_t n[]="\r\n";
	uint8_t rx[2];

while (1)
 {

HAL_UART_Transmit(&huart3, TX_buffer, sizeof(TX_buffer), 200);
HAL_UART_Transmit(&huart3, n, sizeof(n), 200);
HAL_Delay(1000);


if (HAL_UART_Receive(&huart3, rx, sizeof(rx), 50) == HAL_OK) {

	if(rx[0]=='H' && rx[1]=='I'){
		            uint8_t message[] = "Received HI Exiting...\r\n";
		            HAL_UART_Transmit(&huart3, message, sizeof(message), 50);
		            break;
	}

}
}
}

