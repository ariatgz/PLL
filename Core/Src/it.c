/*
 * it.c
 *
 *  Created on: Dec 18, 2024
 *      Author: ariat
 */
#include "main.h"

extern UART_HandleTypeDef huart2;

void SysTick_Handler(void){

		HAL_IncTick();
		HAL_SYSTICK_IRQHandler();
}



