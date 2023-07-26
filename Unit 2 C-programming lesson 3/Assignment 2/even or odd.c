/*
 * even or odd.c
 *
 *  Created on: 25 Jul 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
void main(){
	int integer;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&integer);
	fflush(stdin);
	if (integer%2 == 0){
		printf("%d is even",integer);
	}
	else{
		printf("%d is odd ", integer);
	}

}


