/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file         stm32f4xx_hal_msp.c
  * @brief        This file provides code for the MSP Initialization
  *               and de-Initialization codes.
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

/* Includes ------------------------------------------------------------------*/
#include "main.h"
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN Define */

/* USER CODE END Define */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN Macro */

/* USER CODE END Macro */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* External functions --------------------------------------------------------*/
/* USER CODE BEGIN ExternalFunctions */

/* USER CODE END ExternalFunctions */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);
                                        /**
  * Initializes the Global MSP.
  */
void HAL_MspInit(void)
{

  /* USER CODE BEGIN MspInit 0 */

  /* USER CODE END MspInit 0 */

  __HAL_RCC_SYSCFG_CLK_ENABLE();
  __HAL_RCC_PWR_CLK_ENABLE();

  /* System interrupt init*/

  /* USER CODE BEGIN MspInit 1 */

  /* USER CODE END MspInit 1 */
}

/**
* @brief SPI MSP Initialization
* This function configures the hardware resources used in this example
* @param hspi: SPI handle pointer
* @retval None
*/
void HAL_SPI_MspInit(SPI_HandleTypeDef* hspi)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(hspi->Instance==SPI1)
  {
  /* USER CODE BEGIN SPI1_MspInit 0 */

  /* USER CODE END SPI1_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_SPI1_CLK_ENABLE();

    __HAL_RCC_GPIOA_CLK_ENABLE();
    /**SPI1 GPIO Configuration
    PA5     ------> SPI1_SCK
    PA6     ------> SPI1_MISO
    PA7     ------> SPI1_MOSI
    */
    GPIO_InitStruct.Pin = EXT_XBEE_CLK_Pin|EXT_XBEE_MISO_Pin|EXT_XBEE_MOSI_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF5_SPI1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /* USER CODE BEGIN SPI1_MspInit 1 */

  /* USER CODE END SPI1_MspInit 1 */
  }
  else if(hspi->Instance==SPI4)
  {
  /* USER CODE BEGIN SPI4_MspInit 0 */

  /* USER CODE END SPI4_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_SPI4_CLK_ENABLE();

    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    /**SPI4 GPIO Configuration
    PA1     ------> SPI4_MOSI
    PB13     ------> SPI4_SCK
    PA11     ------> SPI4_MISO
    */
    GPIO_InitStruct.Pin = EXTRA_MOSI_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF5_SPI4;
    HAL_GPIO_Init(EXTRA_MOSI_GPIO_Port, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = EXTRA_CLK_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF6_SPI4;
    HAL_GPIO_Init(EXTRA_CLK_GPIO_Port, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = EXTRA_MISO_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF6_SPI4;
    HAL_GPIO_Init(EXTRA_MISO_GPIO_Port, &GPIO_InitStruct);

  /* USER CODE BEGIN SPI4_MspInit 1 */

  /* USER CODE END SPI4_MspInit 1 */
  }

}

/**
* @brief SPI MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param hspi: SPI handle pointer
* @retval None
*/
void HAL_SPI_MspDeInit(SPI_HandleTypeDef* hspi)
{
  if(hspi->Instance==SPI1)
  {
  /* USER CODE BEGIN SPI1_MspDeInit 0 */

  /* USER CODE END SPI1_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_SPI1_CLK_DISABLE();

    /**SPI1 GPIO Configuration
    PA5     ------> SPI1_SCK
    PA6     ------> SPI1_MISO
    PA7     ------> SPI1_MOSI
    */
    HAL_GPIO_DeInit(GPIOA, EXT_XBEE_CLK_Pin|EXT_XBEE_MISO_Pin|EXT_XBEE_MOSI_Pin);

  /* USER CODE BEGIN SPI1_MspDeInit 1 */

  /* USER CODE END SPI1_MspDeInit 1 */
  }
  else if(hspi->Instance==SPI4)
  {
  /* USER CODE BEGIN SPI4_MspDeInit 0 */

  /* USER CODE END SPI4_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_SPI4_CLK_DISABLE();

    /**SPI4 GPIO Configuration
    PA1     ------> SPI4_MOSI
    PB13     ------> SPI4_SCK
    PA11     ------> SPI4_MISO
    */
    HAL_GPIO_DeInit(GPIOA, EXTRA_MOSI_Pin|EXTRA_MISO_Pin);

    HAL_GPIO_DeInit(EXTRA_CLK_GPIO_Port, EXTRA_CLK_Pin);

  /* USER CODE BEGIN SPI4_MspDeInit 1 */

  /* USER CODE END SPI4_MspDeInit 1 */
  }

}

/**
* @brief TIM_PWM MSP Initialization
* This function configures the hardware resources used in this example
* @param htim_pwm: TIM_PWM handle pointer
* @retval None
*/
void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef* htim_pwm)
{
  if(htim_pwm->Instance==TIM3)
  {
  /* USER CODE BEGIN TIM3_MspInit 0 */

  /* USER CODE END TIM3_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_TIM3_CLK_ENABLE();
  /* USER CODE BEGIN TIM3_MspInit 1 */

  /* USER CODE END TIM3_MspInit 1 */
  }
  else if(htim_pwm->Instance==TIM4)
  {
  /* USER CODE BEGIN TIM4_MspInit 0 */

  /* USER CODE END TIM4_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_TIM4_CLK_ENABLE();
  /* USER CODE BEGIN TIM4_MspInit 1 */

  /* USER CODE END TIM4_MspInit 1 */
  }

}

void HAL_TIM_MspPostInit(TIM_HandleTypeDef* htim)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(htim->Instance==TIM3)
  {
  /* USER CODE BEGIN TIM3_MspPostInit 0 */

  /* USER CODE END TIM3_MspPostInit 0 */
    __HAL_RCC_GPIOB_CLK_ENABLE();
    /**TIM3 GPIO Configuration
    PB4     ------> TIM3_CH1
    */
    GPIO_InitStruct.Pin = AIRBRAKES_PWM_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF2_TIM3;
    HAL_GPIO_Init(AIRBRAKES_PWM_GPIO_Port, &GPIO_InitStruct);

  /* USER CODE BEGIN TIM3_MspPostInit 1 */

  /* USER CODE END TIM3_MspPostInit 1 */
  }
  else if(htim->Instance==TIM4)
  {
  /* USER CODE BEGIN TIM4_MspPostInit 0 */

  /* USER CODE END TIM4_MspPostInit 0 */

    __HAL_RCC_GPIOB_CLK_ENABLE();
    /**TIM4 GPIO Configuration
    PB9     ------> TIM4_CH4
    */
    GPIO_InitStruct.Pin = BUZZER_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF2_TIM4;
    HAL_GPIO_Init(BUZZER_GPIO_Port, &GPIO_InitStruct);

  /* USER CODE BEGIN TIM4_MspPostInit 1 */

  /* USER CODE END TIM4_MspPostInit 1 */
  }

}
/**
* @brief TIM_PWM MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param htim_pwm: TIM_PWM handle pointer
* @retval None
*/
void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef* htim_pwm)
{
  if(htim_pwm->Instance==TIM3)
  {
  /* USER CODE BEGIN TIM3_MspDeInit 0 */

  /* USER CODE END TIM3_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_TIM3_CLK_DISABLE();
  /* USER CODE BEGIN TIM3_MspDeInit 1 */

  /* USER CODE END TIM3_MspDeInit 1 */
  }
  else if(htim_pwm->Instance==TIM4)
  {
  /* USER CODE BEGIN TIM4_MspDeInit 0 */

  /* USER CODE END TIM4_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_TIM4_CLK_DISABLE();
  /* USER CODE BEGIN TIM4_MspDeInit 1 */

  /* USER CODE END TIM4_MspDeInit 1 */
  }

}

/**
* @brief USART MSP Initialization
* This function configures the hardware resources used in this example
* @param husart: USART handle pointer
* @retval None
*/
void HAL_USART_MspInit(USART_HandleTypeDef* husart)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(husart->Instance==USART1)
  {
  /* USER CODE BEGIN USART1_MspInit 0 */

  /* USER CODE END USART1_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_USART1_CLK_ENABLE();

    __HAL_RCC_GPIOA_CLK_ENABLE();
    /**USART1 GPIO Configuration
    PA8     ------> USART1_CK
    PA9     ------> USART1_TX
    PA10     ------> USART1_RX
    */
    GPIO_InitStruct.Pin = MAIN_CLK_Pin|MAIN_TX_Pin|MAIN_RX_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF7_USART1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /* USER CODE BEGIN USART1_MspInit 1 */

  /* USER CODE END USART1_MspInit 1 */

  }

}

/**
* @brief UART MSP Initialization
* This function configures the hardware resources used in this example
* @param huart: UART handle pointer
* @retval None
*/
void HAL_UART_MspInit(UART_HandleTypeDef* huart)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  if(huart->Instance==USART2)
  {
  /* USER CODE BEGIN USART2_MspInit 0 */

  /* USER CODE END USART2_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_USART2_CLK_ENABLE();

    __HAL_RCC_GPIOA_CLK_ENABLE();
    /**USART2 GPIO Configuration
    PA2     ------> USART2_TX
    PA3     ------> USART2_RX
    */
    GPIO_InitStruct.Pin = TESEO_TX_Pin|TESEO_RX_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF7_USART2;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /* USER CODE BEGIN USART2_MspInit 1 */

  /* USER CODE END USART2_MspInit 1 */
  }
  else if(huart->Instance==USART6)
  {
  /* USER CODE BEGIN USART6_MspInit 0 */

  /* USER CODE END USART6_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_USART6_CLK_ENABLE();

    __HAL_RCC_GPIOC_CLK_ENABLE();
    /**USART6 GPIO Configuration
    PC6     ------> USART6_TX
    PC7     ------> USART6_RX
    */
    GPIO_InitStruct.Pin = INT_XBEE_TX_Pin|INT_XBEE_RX_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF8_USART6;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /* USER CODE BEGIN USART6_MspInit 1 */

  /* USER CODE END USART6_MspInit 1 */
  }

}

/**
* @brief USART MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param husart: USART handle pointer
* @retval None
*/
void HAL_USART_MspDeInit(USART_HandleTypeDef* husart)
{
  if(husart->Instance==USART1)
  {
  /* USER CODE BEGIN USART1_MspDeInit 0 */

  /* USER CODE END USART1_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_USART1_CLK_DISABLE();

    /**USART1 GPIO Configuration
    PA8     ------> USART1_CK
    PA9     ------> USART1_TX
    PA10     ------> USART1_RX
    */
    HAL_GPIO_DeInit(GPIOA, MAIN_CLK_Pin|MAIN_TX_Pin|MAIN_RX_Pin);

  /* USER CODE BEGIN USART1_MspDeInit 1 */

  /* USER CODE END USART1_MspDeInit 1 */
  }

}

/**
* @brief UART MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param huart: UART handle pointer
* @retval None
*/
void HAL_UART_MspDeInit(UART_HandleTypeDef* huart)
{
  if(huart->Instance==USART2)
  {
  /* USER CODE BEGIN USART2_MspDeInit 0 */

  /* USER CODE END USART2_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_USART2_CLK_DISABLE();

    /**USART2 GPIO Configuration
    PA2     ------> USART2_TX
    PA3     ------> USART2_RX
    */
    HAL_GPIO_DeInit(GPIOA, TESEO_TX_Pin|TESEO_RX_Pin);

  /* USER CODE BEGIN USART2_MspDeInit 1 */

  /* USER CODE END USART2_MspDeInit 1 */
  }
  else if(huart->Instance==USART6)
  {
  /* USER CODE BEGIN USART6_MspDeInit 0 */

  /* USER CODE END USART6_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_USART6_CLK_DISABLE();

    /**USART6 GPIO Configuration
    PC6     ------> USART6_TX
    PC7     ------> USART6_RX
    */
    HAL_GPIO_DeInit(GPIOC, INT_XBEE_TX_Pin|INT_XBEE_RX_Pin);

  /* USER CODE BEGIN USART6_MspDeInit 1 */

  /* USER CODE END USART6_MspDeInit 1 */
  }

}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
