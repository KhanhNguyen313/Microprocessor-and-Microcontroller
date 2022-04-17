/*
 * uart_proccessing.h
 *
 *  Created on: Nov 25, 2021
 *      Author: Khanh
 */
#include "main.h"

#ifndef INC_UART_PROCCESSING_H_
#define INC_UART_PROCCESSING_H_

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
uint8_t getBufferFlag();
void resetBufferFlag();
uint8_t getChar();

#endif /* INC_UART_PROCCESSING_H_ */
