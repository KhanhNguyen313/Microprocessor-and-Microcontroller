/*
 * display_LEDs.c
 *
 *  Created on: Oct 26, 2021
 *      Author: Khanh
 */

#include "main.h"
#include "display_LEDs.h"

void toggleLED1(){
	HAL_GPIO_TogglePin(GPIOA, LED1_Pin);
}

void toggleLED2(){
	HAL_GPIO_TogglePin(GPIOA, LED2_Pin);
}

void toggleLED3(){
	HAL_GPIO_TogglePin(GPIOA, LED3_Pin);
}

void toggleLED4(){
	HAL_GPIO_TogglePin(GPIOA, LED4_Pin);
}

void toggleLED5(){
	HAL_GPIO_TogglePin(GPIOA, LED5_Pin);
}

void toggleLEDRed(){
	HAL_GPIO_TogglePin(GPIOA, RED_Pin);
}

void toggleLEDGreen(){
	HAL_GPIO_TogglePin(GPIOA, GREEN_Pin);
}

void toggleLEDYellow(){
	HAL_GPIO_TogglePin(GPIOA, YELLOW_Pin);
}
