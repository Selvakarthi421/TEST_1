/*
 * urt.h
 *
 *  Created on: Jan 23, 2025
 *      Author: ADMIN
 */

#ifndef INC_UART_HEADER_H_
#define INC_UART_HEADER_H_
#include "stm32l4xx_hal.h"

#ifdef __cplusplus

 extern "C" {
#endif

 extern UART_HandleTypeDef huart3;
 void uart(void);


#ifdef __cplusplus
}
#endif

#endif /* INC_UART_HEADER_H_ */

