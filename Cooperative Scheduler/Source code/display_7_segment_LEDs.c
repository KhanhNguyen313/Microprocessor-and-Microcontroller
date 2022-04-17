/*
 * display_7_segment_LEDs.c
 *
 *  Created on: Oct 26, 2021
 *      Author: Khanh
 */

#include "main.h"
#include "display_7_segment_LEDs.h"

static int value = 0;

void display7SEG_1(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(GPIOB,SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin|SEG_14_Pin|SEG_15_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,SEG_16_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB,SEG_10_Pin|SEG_13_Pin|SEG_14_Pin|SEG_15_Pin|SEG_16_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,SEG_11_Pin|SEG_12_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB,SEG_10_Pin|SEG_11_Pin|SEG_13_Pin|SEG_14_Pin|SEG_16_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,SEG_12_Pin|SEG_15_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB,SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin|SEG_16_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,SEG_14_Pin|SEG_15_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB,SEG_10_Pin|SEG_13_Pin|SEG_14_Pin, SET);
		HAL_GPIO_WritePin(GPIOB,SEG_11_Pin|SEG_12_Pin|SEG_15_Pin|SEG_16_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB,SEG_10_Pin|SEG_12_Pin|SEG_13_Pin|SEG_15_Pin|SEG_16_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,SEG_11_Pin|SEG_14_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB,SEG_10_Pin|SEG_12_Pin|SEG_13_Pin|SEG_14_Pin|SEG_15_Pin|SEG_16_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,SEG_11_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB,SEG_10_Pin|SEG_11_Pin|SEG_12_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,SEG_13_Pin|SEG_14_Pin|SEG_15_Pin|SEG_16_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB,SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin|SEG_14_Pin|SEG_15_Pin|SEG_16_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB,SEG_10_Pin|SEG_11_Pin|SEG_12_Pin|SEG_13_Pin|SEG_15_Pin|SEG_16_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB,SEG_14_Pin, SET);
		break;
	default:
		break;
	}
}

void increase7SegLED(){
	display7SEG_1(value++);
	if(value >= 10) value = 0;
}
