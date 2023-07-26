/*
 * Multiply two Floating Point Numbers.c
 *
 *  Created on: 24 Jul 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
void main(){
	float num1 , num2;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f", &num1,&num2);
	fflush(stdin);
	printf("Product: %f",num1*num2 );

}


