/*
 * PrintInteger.c
 *
 *  Created on: 24 Jul 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
void main(){
	int integer;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d", &integer);
	fflush(stdin);
	printf("You entered: %d",integer);

}


