/*
 * switch.h
 *
 *  Created on: Dec 18, 2025
 *      Author: AKSHITA DAWARE
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"

#define BV(n) (1 << (n))

void led_init(void);
int switch_status(void);

void led_on(void);
void led_off(void);

#endif /* MY_SWITCH_H_ */

