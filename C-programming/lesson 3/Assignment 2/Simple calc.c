/*
 * simple calculator.c
 *
 *  Created on: 25 Jul 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
void main(){
	char operation;
	float operand1,operand2;
	printf("Enter the operation either + or - or * or divide:");
	fflush(stdout);
	scanf("%c", &operation);
	fflush(stdin);
	printf("Enter two operands:");
	fflush(stdout);
	scanf("%f %f",&operand1,&operand2);
	fflush(stdin);
	switch(operation){
	case('+'):
			printf("%.2f + %.2f = %.2f",operand1,operand2,operand1+operand2);
	break;
	case('-'):
		 printf("%.2f - %.2f = %.2f",operand1,operand2,operand1-operand2);
	break;
	case('*'):
		printf("%.2f * %.2f = %.2f",operand1,operand2,operand1*operand2);
	break;
	case('/'):
		printf("%.2f / %.2f = %.2f",operand1,operand2,operand1/operand2);
	break;
	default:
		printf("wrong input");

	}
}
