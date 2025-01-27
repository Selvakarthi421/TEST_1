/*
 * GPIO.c
 *
 *  Created on: Jan 24, 2025
 *      Author: ADMIN
 */


#include "GPIO_header.h"
#include "stm32l4xx_hal.h"
void gpio(void){

	if (HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_5) == GPIO_PIN_SET){
		 HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_RESET);
	 }
	 else{
		 HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_SET);
	 }
}
