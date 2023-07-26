/*
 * Add Two Integers.c
 *
 *  Created on: 24 Jul 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
void main(){
	int first_integer , second_integer;
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%d %d", &first_integer,&second_integer);
	fflush(stdin);
	printf("Sum: %d",first_integer+second_integer );

}

