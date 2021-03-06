/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define SEG_10_Pin GPIO_PIN_0
#define SEG_10_GPIO_Port GPIOB
#define SEG_11_Pin GPIO_PIN_1
#define SEG_11_GPIO_Port GPIOB
#define SEG_12_Pin GPIO_PIN_2
#define SEG_12_GPIO_Port GPIOB
#define RED_Pin GPIO_PIN_8
#define RED_GPIO_Port GPIOA
#define GREEN_Pin GPIO_PIN_9
#define GREEN_GPIO_Port GPIOA
#define YELLOW_Pin GPIO_PIN_10
#define YELLOW_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_11
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_12
#define LED2_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_13
#define LED3_GPIO_Port GPIOA
#define LED4_Pin GPIO_PIN_14
#define LED4_GPIO_Port GPIOA
#define LED5_Pin GPIO_PIN_15
#define LED5_GPIO_Port GPIOA
#define SEG_13_Pin GPIO_PIN_3
#define SEG_13_GPIO_Port GPIOB
#define SEG_14_Pin GPIO_PIN_4
#define SEG_14_GPIO_Port GPIOB
#define SEG_15_Pin GPIO_PIN_5
#define SEG_15_GPIO_Port GPIOB
#define SEG_16_Pin GPIO_PIN_6
#define SEG_16_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
