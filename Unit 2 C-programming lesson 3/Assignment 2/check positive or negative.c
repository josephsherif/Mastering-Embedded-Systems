/*
 * check positive or negative.c
 *
 *  Created on: 25 Jul 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
void main(){
	float number;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%f",&number);
	fflush(stdin);
	if (number>0){
		printf("%f is positive",number);
	}
	else if (number ==0){
		printf("You entered zero");
	}
	else{
		printf("%f is negative", number);
	}
}

