/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#define MODULE_Pin GPIO_PIN_13
#define MODULE_GPIO_Port GPIOC
#define LED_RED_OP_Pin GPIO_PIN_2
#define LED_RED_OP_GPIO_Port GPIOA
#define LED_YELLOW_OP_Pin GPIO_PIN_3
#define LED_YELLOW_OP_GPIO_Port GPIOA
#define LED_GREEN_OP_Pin GPIO_PIN_4
#define LED_GREEN_OP_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOA
#define a_Pin GPIO_PIN_0
#define a_GPIO_Port GPIOB
#define b_Pin GPIO_PIN_1
#define b_GPIO_Port GPIOB
#define c_Pin GPIO_PIN_2
#define c_GPIO_Port GPIOB
#define d2_Pin GPIO_PIN_10
#define d2_GPIO_Port GPIOB
#define e2_Pin GPIO_PIN_11
#define e2_GPIO_Port GPIOB
#define f2_Pin GPIO_PIN_12
#define f2_GPIO_Port GPIOB
#define g2_Pin GPIO_PIN_13
#define g2_GPIO_Port GPIOB
#define TIME_Pin GPIO_PIN_14
#define TIME_GPIO_Port GPIOB
#define VALUE_Pin GPIO_PIN_15
#define VALUE_GPIO_Port GPIOB
#define EN0_Pin GPIO_PIN_8
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_9
#define EN1_GPIO_Port GPIOA
#define d_Pin GPIO_PIN_3
#define d_GPIO_Port GPIOB
#define e_Pin GPIO_PIN_4
#define e_GPIO_Port GPIOB
#define f_Pin GPIO_PIN_5
#define f_GPIO_Port GPIOB
#define g_Pin GPIO_PIN_6
#define g_GPIO_Port GPIOB
#define a2_Pin GPIO_PIN_7
#define a2_GPIO_Port GPIOB
#define b2_Pin GPIO_PIN_8
#define b2_GPIO_Port GPIOB
#define c2_Pin GPIO_PIN_9
#define c2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
