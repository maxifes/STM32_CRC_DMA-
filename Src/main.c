/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <registers.h>


#define MEMSIZE 32

uint16_t source[MEMSIZE];
uint16_t destination[MEMSIZE];

int main(void)
{
    RCC_AHB1ENR |= BIT_22; //activa reloj para DMA2

    for(int i = 0; i< MEMSIZE; i++){
    	source[i] = i;
    }

    DMA2_S0CR &= ~BIT_0; //Deshabilita DMA
    while((DMA2_S0CR & BIT_0)== 0x1){} //Espera a que el bit se ponga en 0

    DMA2_S0CR |= BIT_7; //Habilita Memory to memory
	DMA2_S0CR |=  BIT_13; //Source data size (Half word)- Peripheral Data Size
	DMA2_S0CR |= BIT_11; //Destination data size (Half word) - Memory Data Size
	DMA2_S0CR |= BIT_9; //PINC Habilita incrementar el puntero del source despues de cada transaccion.
	DMA2_S0CR |= BIT_10; //MINC habilita incrementar el puntero del destination
	DMA2_S0M0AR = (uint32_t)(destination); //destination
	DMA2_S0PAR = (uint32_t)(source); //source
	DMA2_S0NDTR = MEMSIZE;
	DMA2_S0CR |= BIT_0;

	while(1){}
}
