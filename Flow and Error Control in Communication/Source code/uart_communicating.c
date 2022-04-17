/*
 * uart_communicating.c
 *
 *  Created on: Nov 25, 2021
 *      Author: Khanh
 */
#include "uart_communicating.h"
#include "command_proccessing.h"
#include "timer.h"
#include "main.h"
#include <stdio.h>

#define PERIOD_FOR_RESEND 3000
#define VDDA ((uint16_t*)((uint32_t)0x1FFFF7BA))

enum UART{
	WAITTING_RST,
	WAITTING_OK,
	SEND_REP
};

char buffer_uart[20];
enum UART uart_state = WAITTING_RST;

uint32_t adc_value = 0;

extern UART_HandleTypeDef huart2;
extern ADC_HandleTypeDef hadc1;

void uart_communication_fsm(){
	switch (uart_state) {
		case WAITTING_RST:
			if(isCommandRST()){
				adc_value = HAL_ADC_GetValue(&hadc1);
				uart_state = SEND_REP;
			}
			break;
		case SEND_REP:
			HAL_UART_Transmit(&huart2, (void*)buffer_uart, sprintf(buffer_uart, "\r\n!ADC=%d#", adc_value),200);
			uart_state = WAITTING_OK;
			setTimer0(PERIOD_FOR_RESEND);
			break;
		case WAITTING_OK:
			if(isCommandOK()){
				stopTimer0();
				uart_state = WAITTING_RST;
				HAL_UART_Transmit(&huart2, (void*)buffer_uart, sprintf(buffer_uart, "\r\n"),200);
			}
			if(getTimer0Flag() == 1){
				uart_state = SEND_REP;
			}
			break;
		default:
			break;
	}
}
