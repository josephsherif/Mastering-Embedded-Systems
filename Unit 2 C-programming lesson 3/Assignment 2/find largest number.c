/*
 * find largest number.c
 *
 *  Created on: 25 Jul 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
void main(){
	float num1,num2,num3;
	printf("Enter three numbers:");
	fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);
	fflush(stdin);
	if(num1 >num2){
		if (num1>num3){
			printf("Largest number = %f", num1);

		}
		else{
			printf("Largest number = %f", num3);

		}
	}
	else if(num2>num3){
		printf("Largest number = %f", num2);

	}
	else {
		printf("Largest number = %f", num3);
	}

}

