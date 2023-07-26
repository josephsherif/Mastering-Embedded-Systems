/*
 * check alphabet.c
 *
 *  Created on: 25 Jul 2023
 *      Author: Joseph Sherif
 */
#include<stdio.h>
void main(){
	char character;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c",&character);
	fflush(stdin);
	if (((character>=97) && (character<=122)) || ((character>=65) && (character<=90)) ){
		printf("%c is an alphabet", character);
	}
	else{
		printf("%c is not an alphabet",character);
	}
}
