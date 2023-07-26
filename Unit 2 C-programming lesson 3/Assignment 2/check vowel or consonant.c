/*
 * check vowel or consonant.c
 *
 *  Created on: 25 Jul 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
void main(){
	char alphabet;
	printf("Enter an alphabet: ");
	fflush (stdout);
	scanf("%c",&alphabet);
	fflush(stdin);
	switch(alphabet){
	case('a'):
	case('A'):
	case('i'):
	case('I'):
	case('e'):
	case('E'):
	case('o'):
	case('O'):
	case('u'):
	case('U'):
	printf("%c is vowel",alphabet);
	break;
	default:
		printf("%c is consonant", alphabet);
	}
}

