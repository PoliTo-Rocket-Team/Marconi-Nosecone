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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Payload_CS_Pin GPIO_PIN_1
#define Payload_CS_GPIO_Port GPIOC
#define SPI2_Payload_MISO_Pin GPIO_PIN_2
#define SPI2_Payload_MISO_GPIO_Port GPIOC
#define SPI2_Payload_MOSI_Pin GPIO_PIN_3
#define SPI2_Payload_MOSI_GPIO_Port GPIOC
#define USART2_TX_Payload_RX_Pin GPIO_PIN_2
#define USART2_TX_Payload_RX_GPIO_Port GPIOA
#define USART2_RX_Payload_TX_Pin GPIO_PIN_3
#define USART2_RX_Payload_TX_GPIO_Port GPIOA
#define USART2_Payload_CK_Pin GPIO_PIN_4
#define USART2_Payload_CK_GPIO_Port GPIOA
#define SPI1_Ext_XBEE_SCLK_Pin GPIO_PIN_5
#define SPI1_Ext_XBEE_SCLK_GPIO_Port GPIOA
#define SPI1_Ext_XBEE_MISO_Pin GPIO_PIN_6
#define SPI1_Ext_XBEE_MISO_GPIO_Port GPIOA
#define SPI1_Ext_XBEE_MOSI_Pin GPIO_PIN_7
#define SPI1_Ext_XBEE_MOSI_GPIO_Port GPIOA
#define Ext_XBEE_CS_Pin GPIO_PIN_4
#define Ext_XBEE_CS_GPIO_Port GPIOC
#define CAMERA_Pin GPIO_PIN_5
#define CAMERA_GPIO_Port GPIOC
#define ADC1_IN9_Battery_Pin GPIO_PIN_1
#define ADC1_IN9_Battery_GPIO_Port GPIOB
#define LED_Pin GPIO_PIN_2
#define LED_GPIO_Port GPIOB
#define SPI2_Payload_SCK_Pin GPIO_PIN_10
#define SPI2_Payload_SCK_GPIO_Port GPIOB
#define USART6_TX_Int_XBEE_RX_Pin GPIO_PIN_6
#define USART6_TX_Int_XBEE_RX_GPIO_Port GPIOC
#define USART6_RX_Int_XBEE_TX_Pin GPIO_PIN_7
#define USART6_RX_Int_XBEE_TX_GPIO_Port GPIOC
#define Int_XBEE_Sleep_Pin GPIO_PIN_8
#define Int_XBEE_Sleep_GPIO_Port GPIOC
#define Int_XBEE_NRST_Pin GPIO_PIN_9
#define Int_XBEE_NRST_GPIO_Port GPIOC
#define USART1_MarcDaVinci_CK_Pin GPIO_PIN_8
#define USART1_MarcDaVinci_CK_GPIO_Port GPIOA
#define USART1_Marc_TX_DaVinci_RX_Pin GPIO_PIN_9
#define USART1_Marc_TX_DaVinci_RX_GPIO_Port GPIOA
#define USART1_Marc_RX_DaVinci_TX_Pin GPIO_PIN_10
#define USART1_Marc_RX_DaVinci_TX_GPIO_Port GPIOA
#define Ext_XBEE_NRST_Pin GPIO_PIN_11
#define Ext_XBEE_NRST_GPIO_Port GPIOA
#define UART4_TX_Ext_XBEE_RX_Pin GPIO_PIN_12
#define UART4_TX_Ext_XBEE_RX_GPIO_Port GPIOA
#define Ext_XBEE_SPI_UART_CONF_Pin GPIO_PIN_10
#define Ext_XBEE_SPI_UART_CONF_GPIO_Port GPIOC
#define UART4_RX_Ext_XBEE_TX_Pin GPIO_PIN_11
#define UART4_RX_Ext_XBEE_TX_GPIO_Port GPIOC
#define UART5_TX_GNSS_RX_Pin GPIO_PIN_12
#define UART5_TX_GNSS_RX_GPIO_Port GPIOC
#define UART5_RX_GNSS_TX_Pin GPIO_PIN_2
#define UART5_RX_GNSS_TX_GPIO_Port GPIOD
#define UART7_Debug_RX_Pin GPIO_PIN_3
#define UART7_Debug_RX_GPIO_Port GPIOB
#define UART7_Debug_TX_Pin GPIO_PIN_4
#define UART7_Debug_TX_GPIO_Port GPIOB
#define Write_Protect_Pin GPIO_PIN_5
#define Write_Protect_GPIO_Port GPIOB
#define PWM_Airbrakes_Pin GPIO_PIN_8
#define PWM_Airbrakes_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_9
#define BUZZER_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
