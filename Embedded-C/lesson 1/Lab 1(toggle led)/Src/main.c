/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include "Platform types.h"
#define GPIOA_BASE   0x40010800
#define RCC_BASE     0x40021000
#define APB2ENR_REG  *(vuint32_t*)(RCC_BASE + 0x18)
#define GPIOA_ODR    (GPIOA_BASE + 0x0C)
#define GPIOA_CRH    (GPIOA_BASE + 0x04)

typedef union{
	vuint32_t ALL_FIELDS;
	struct{
		vuint32_t RESERVED:13;
		vuint32_t P13:1;
	}Pin;

}ODR_REG;

typedef union{
	vuint32_t ALL_FIELDS;
	struct{
		vuint32_t RESERVED:20;
		vuint32_t Pins:5;
	}PINS;

}CRH_REG;
volatile ODR_REG* ODR = (ODR_REG*) GPIOA_ODR ;
CRH_REG* CRH = (CRH_REG*) GPIOA_CRH;

int main(void)
{
	APB2ENR_REG |= 1<<2;
	//GPIOA_CRH &= 0xFF0FFFFF;
	//GPIOA_CRH |= 0x00200000;
	CRH->PINS.Pins = 2;
	while(1){
		ODR->Pin.P13 = 1;
		sint32 i = 0;
		for (i = 0 ; i < 5000 ; i++ ){
			ODR->Pin.P13 = 0;
		}
		for (i = 0 ; i < 5000 ; i++ ){
					ODR->Pin.P13 = 1;
				}

	}
}
