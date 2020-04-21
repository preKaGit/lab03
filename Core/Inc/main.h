/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define SEG_a_Pin GPIO_PIN_0
#define SEG_a_GPIO_Port GPIOC
#define SEG_b_Pin GPIO_PIN_1
#define SEG_b_GPIO_Port GPIOC
#define SEG_c_Pin GPIO_PIN_2
#define SEG_c_GPIO_Port GPIOC
#define SEG_d_Pin GPIO_PIN_3
#define SEG_d_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define SEG_e_Pin GPIO_PIN_4
#define SEG_e_GPIO_Port GPIOC
#define SEG_f_Pin GPIO_PIN_5
#define SEG_f_GPIO_Port GPIOC
#define SEG_g_Pin GPIO_PIN_6
#define SEG_g_GPIO_Port GPIOC
#define SEG_dp_Pin GPIO_PIN_7
#define SEG_dp_GPIO_Port GPIOC
#define SEG_d1_Pin GPIO_PIN_8
#define SEG_d1_GPIO_Port GPIOC
#define SEG_d2_Pin GPIO_PIN_9
#define SEG_d2_GPIO_Port GPIOC
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SEG_d3_Pin GPIO_PIN_10
#define SEG_d3_GPIO_Port GPIOC
#define SEG_d4_Pin GPIO_PIN_11
#define SEG_d4_GPIO_Port GPIOC
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
