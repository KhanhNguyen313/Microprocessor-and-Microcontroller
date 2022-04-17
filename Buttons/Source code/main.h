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
#define TEST_Pin GPIO_PIN_0
#define TEST_GPIO_Port GPIOA
#define SEG_10_Pin GPIO_PIN_1
#define SEG_10_GPIO_Port GPIOA
#define SEG_11_Pin GPIO_PIN_2
#define SEG_11_GPIO_Port GPIOA
#define SEG_12_Pin GPIO_PIN_3
#define SEG_12_GPIO_Port GPIOA
#define SEG_13_Pin GPIO_PIN_4
#define SEG_13_GPIO_Port GPIOA
#define SEG_14_Pin GPIO_PIN_5
#define SEG_14_GPIO_Port GPIOA
#define SEG_15_Pin GPIO_PIN_6
#define SEG_15_GPIO_Port GPIOA
#define SEG_16_Pin GPIO_PIN_7
#define SEG_16_GPIO_Port GPIOA
#define LED_1_Pin GPIO_PIN_0
#define LED_1_GPIO_Port GPIOB
#define LED_2_Pin GPIO_PIN_1
#define LED_2_GPIO_Port GPIOB
#define LED_3_Pin GPIO_PIN_2
#define LED_3_GPIO_Port GPIOB
#define BUTTON_0_Pin GPIO_PIN_13
#define BUTTON_0_GPIO_Port GPIOB
#define BUTTON_1_Pin GPIO_PIN_14
#define BUTTON_1_GPIO_Port GPIOB
#define BUTTON_2_Pin GPIO_PIN_15
#define BUTTON_2_GPIO_Port GPIOB
#define SEG_20_Pin GPIO_PIN_8
#define SEG_20_GPIO_Port GPIOA
#define SEG_21_Pin GPIO_PIN_9
#define SEG_21_GPIO_Port GPIOA
#define SEG_22_Pin GPIO_PIN_10
#define SEG_22_GPIO_Port GPIOA
#define SEG_23_Pin GPIO_PIN_11
#define SEG_23_GPIO_Port GPIOA
#define SEG_24_Pin GPIO_PIN_12
#define SEG_24_GPIO_Port GPIOA
#define SEG_25_Pin GPIO_PIN_13
#define SEG_25_GPIO_Port GPIOA
#define SEG_26_Pin GPIO_PIN_14
#define SEG_26_GPIO_Port GPIOA
#define LED_4_Pin GPIO_PIN_3
#define LED_4_GPIO_Port GPIOB
#define LED_5_Pin GPIO_PIN_4
#define LED_5_GPIO_Port GPIOB
#define LED_6_Pin GPIO_PIN_5
#define LED_6_GPIO_Port GPIOB
#define EN_0_Pin GPIO_PIN_6
#define EN_0_GPIO_Port GPIOB
#define EN_1_Pin GPIO_PIN_7
#define EN_1_GPIO_Port GPIOB
#define EN_2_Pin GPIO_PIN_8
#define EN_2_GPIO_Port GPIOB
#define EN_3_Pin GPIO_PIN_9
#define EN_3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
