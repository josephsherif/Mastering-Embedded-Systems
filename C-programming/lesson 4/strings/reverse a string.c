/*
 * reverse a string.c
 *
 *  Created on: 2 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
#include<string.h>
int main(void){
	char string[100];
	char reverse [100];
	printf("Enter a string: ");
	fflush(stdout);
	gets(string);
	int i , length =strlen(string);
	for(i =0; i< strlen(string);i++){
		reverse[i] = string[length-1];
		length--;
	}
	reverse[strlen(string)] = 0;
	printf("%s", reverse);
}
