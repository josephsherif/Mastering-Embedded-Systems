/*
 * Alphabet using pointers.c
 *
 *  Created on: 11 Sep 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>

int main()
{
	char letter ='A';
	char *ptr = &letter;
	while((letter>='A') && (letter<='Z')){
		printf("%c\t",(*ptr)++);

	}

	return 0;
}


