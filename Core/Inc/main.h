/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define EXTRA_MOSI_Pin GPIO_PIN_1
#define EXTRA_MOSI_GPIO_Port GPIOA
#define TESEO_TX_Pin GPIO_PIN_2
#define TESEO_TX_GPIO_Port GPIOA
#define TESEO_RX_Pin GPIO_PIN_3
#define TESEO_RX_GPIO_Port GPIOA
#define TESEO_RST_Pin GPIO_PIN_4
#define TESEO_RST_GPIO_Port GPIOA
#define EXT_XBEE_CLK_Pin GPIO_PIN_5
#define EXT_XBEE_CLK_GPIO_Port GPIOA
#define EXT_XBEE_MISO_Pin GPIO_PIN_6
#define EXT_XBEE_MISO_GPIO_Port GPIOA
#define EXT_XBEE_MOSI_Pin GPIO_PIN_7
#define EXT_XBEE_MOSI_GPIO_Port GPIOA
#define EXT_XBEE_CS_Pin GPIO_PIN_4
#define EXT_XBEE_CS_GPIO_Port GPIOC
#define CAMERA_Pin GPIO_PIN_5
#define CAMERA_GPIO_Port GPIOC
#define LED_Pin GPIO_PIN_10
#define LED_GPIO_Port GPIOB
#define EXTRA_CLK_Pin GPIO_PIN_13
#define EXTRA_CLK_GPIO_Port GPIOB
#define EXTRA_CS_Pin GPIO_PIN_14
#define EXTRA_CS_GPIO_Port GPIOB
#define INT_XBEE_TX_Pin GPIO_PIN_6
#define INT_XBEE_TX_GPIO_Port GPIOC
#define INT_XBEE_RX_Pin GPIO_PIN_7
#define INT_XBEE_RX_GPIO_Port GPIOC
#define INT_XBEE_SLEEP_Pin GPIO_PIN_8
#define INT_XBEE_SLEEP_GPIO_Port GPIOC
#define MAIN_CLK_Pin GPIO_PIN_8
#define MAIN_CLK_GPIO_Port GPIOA
#define MAIN_TX_Pin GPIO_PIN_9
#define MAIN_TX_GPIO_Port GPIOA
#define MAIN_RX_Pin GPIO_PIN_10
#define MAIN_RX_GPIO_Port GPIOA
#define EXTRA_MISO_Pin GPIO_PIN_11
#define EXTRA_MISO_GPIO_Port GPIOA
#define AIRBRAKES_PWM_Pin GPIO_PIN_4
#define AIRBRAKES_PWM_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_9
#define BUZZER_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
