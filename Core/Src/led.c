/*
 * led.c
 *
 *  Created on: Sep 13, 2024
 *      Author: Gabriela
 */

#include "led.h"

void LED_Init(void){
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin,GPIO_PIN_RESET);
}

void LED_On(void){
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin,GPIO_PIN_SET);
}

void LED_Off(void){
	HAL_GPIO_WritePin(LD2_GPIO_Port,LD2_Pin,GPIO_PIN_RESET);
}

void LED_Toggle(void){
	HAL_GPIO_TogglePin(LD2_GPIO_Port,LD2_Pin);
}
void LED_SetStatus(int value){
	if (value %2 ==0){
		LED_On();
	}else{
		LED_Off();
	}
}
