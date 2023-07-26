/*
 * Swap two numbers without temp.c
 *
 *  Created on: 25 Jul 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
void main(){
	float a,b,temp;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	fflush(stdin);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After swapping, value of a = %f \n" ,a );
	printf("After swapping, value of b = %f  \n",b);

}

