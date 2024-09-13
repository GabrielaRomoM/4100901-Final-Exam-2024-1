/*
 * led.h
 *
 *  Created on: Sep 13, 2024
 *      Author: Gabriela
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "main.h"

void LED_Init(void);
void LED_On(void);
void LED_Off(void);
void LED_Toggle(void);
void LED_SetStatus(int value);
#endif /* INC_LED_H_ */
