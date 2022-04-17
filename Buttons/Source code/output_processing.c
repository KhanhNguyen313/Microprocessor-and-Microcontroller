/*
 * output_processing.c
 *
 *  Created on: Oct 4, 2021
 *      Author: Khanh
 */
#include "main.h"

static int led_buffer_1[2];
static int led_buffer_2[2];

void display7SEG_1(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(GPIOA,SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin|SEG_14_Pin|SEG_15_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_16_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA,SEG_10_Pin|SEG_13_Pin|SEG_14_Pin|SEG_15_Pin|SEG_16_Pin, SET);
		HAL_GPIO_WritePin(GPIOA,SEG_11_Pin|SEG_12_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA,SEG_10_Pin|SEG_11_Pin|SEG_13_Pin|SEG_14_Pin|SEG_16_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_12_Pin|SEG_15_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA,SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin|SEG_16_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_14_Pin|SEG_15_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA,SEG_10_Pin|SEG_13_Pin|SEG_14_Pin, SET);
		HAL_GPIO_WritePin(GPIOA,SEG_11_Pin|SEG_12_Pin|SEG_15_Pin|SEG_16_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA,SEG_10_Pin|SEG_12_Pin|SEG_13_Pin|SEG_15_Pin|SEG_16_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_11_Pin|SEG_14_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA,SEG_10_Pin|SEG_12_Pin|SEG_13_Pin|SEG_14_Pin|SEG_15_Pin|SEG_16_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_11_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA,SEG_10_Pin|SEG_11_Pin|SEG_12_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_13_Pin|SEG_14_Pin|SEG_15_Pin|SEG_16_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA,SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin|SEG_14_Pin|SEG_15_Pin|SEG_16_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA,SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin|SEG_15_Pin|SEG_16_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_14_Pin, SET);
		break;
	default:
		break;
	}
}

void display7SEG_2(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(GPIOA,SEG_20_Pin|SEG_21_Pin|SEG_22_Pin|SEG_23_Pin|SEG_24_Pin|SEG_25_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_26_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA,SEG_20_Pin|SEG_23_Pin|SEG_24_Pin|SEG_25_Pin|SEG_26_Pin, SET);
		HAL_GPIO_WritePin(GPIOA,SEG_21_Pin|SEG_22_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA,SEG_20_Pin|SEG_21_Pin|SEG_23_Pin|SEG_24_Pin|SEG_26_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_22_Pin|SEG_25_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA,SEG_20_Pin|SEG_21_Pin|SEG_22_Pin|SEG_23_Pin|SEG_26_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_24_Pin|SEG_25_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA,SEG_20_Pin|SEG_23_Pin|SEG_24_Pin, SET);
		HAL_GPIO_WritePin(GPIOA,SEG_21_Pin|SEG_22_Pin|SEG_25_Pin|SEG_26_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA,SEG_20_Pin|SEG_22_Pin|SEG_23_Pin|SEG_25_Pin|SEG_26_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_21_Pin|SEG_24_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA,SEG_20_Pin|SEG_22_Pin|SEG_23_Pin|SEG_24_Pin|SEG_25_Pin|SEG_26_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_21_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA,SEG_20_Pin|SEG_21_Pin|SEG_22_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_23_Pin|SEG_24_Pin|SEG_25_Pin|SEG_26_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA,SEG_20_Pin|SEG_21_Pin|SEG_22_Pin|SEG_23_Pin|SEG_24_Pin|SEG_25_Pin|SEG_26_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA,SEG_20_Pin|SEG_21_Pin|SEG_22_Pin|SEG_23_Pin|SEG_25_Pin|SEG_26_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA,SEG_24_Pin, SET);
		break;
	default:
		break;
	}
}

void updateLEDBuffer(int value1, int value2){
	led_buffer_1[0] = value1 / 10;
	led_buffer_1[1] = value1 % 10;
	led_buffer_2[0] = value2 / 10;
	led_buffer_2[1] = value2 % 10;
}

void update7SEG(int index, int value1, int value2){
	updateLEDBuffer(value1, value2);
	switch(index){
	case 0:
		HAL_GPIO_WritePin(GPIOB, EN_0_Pin|EN_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, EN_1_Pin|EN_3_Pin, SET);
		display7SEG_1(led_buffer_1[0]);
		display7SEG_2(led_buffer_2[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, EN_1_Pin|EN_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, EN_0_Pin|EN_2_Pin, SET);
		display7SEG_1(led_buffer_1[1]);
		display7SEG_2(led_buffer_2[1]);
		break;
	default:
		break;
	}
}

void updateLED(int status_LED_1, int status_LED_2){
	switch(status_LED_1){
	case 0:
		HAL_GPIO_WritePin(GPIOB, LED_1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED_2_Pin|LED_3_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, LED_2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED_1_Pin|LED_3_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, LED_3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED_1_Pin|LED_2_Pin, SET);
		break;
	default:
		HAL_GPIO_WritePin(GPIOB, LED_1_Pin|LED_2_Pin|LED_3_Pin, SET);
		break;
	}

	switch(status_LED_2){
	case 0:
		HAL_GPIO_WritePin(GPIOB, LED_4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED_5_Pin|LED_6_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, LED_5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED_4_Pin|LED_6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, LED_6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, LED_4_Pin|LED_5_Pin, SET);
		break;
	default:
		HAL_GPIO_WritePin(GPIOB, LED_1_Pin|LED_2_Pin|LED_3_Pin, SET);
		break;
	}
}

void toggleLED(int value1, int value2){
	switch(value1){
	case 0:
		HAL_GPIO_TogglePin(GPIOB, LED_1_Pin);
		break;
	case 1:
		HAL_GPIO_TogglePin(GPIOB, LED_2_Pin);
		break;
	case 2:
		HAL_GPIO_TogglePin(GPIOB, LED_3_Pin);
		break;
	default:
		break;
	}

	switch(value2){
	case 0:
		HAL_GPIO_TogglePin(GPIOB, LED_4_Pin);
		break;
	case 1:
		HAL_GPIO_TogglePin(GPIOB, LED_5_Pin);
		break;
	case 2:
		HAL_GPIO_TogglePin(GPIOB, LED_6_Pin);
		break;
	default:
		break;
	}
}

