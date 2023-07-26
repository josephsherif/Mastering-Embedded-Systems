/*
 * Find ASCII Value of a Character.c
 *
 *  Created on: 24 Jul 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
void main(){
	char character;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c",&character);
	printf("ASCII value of %c = %d" ,character, character);
}

