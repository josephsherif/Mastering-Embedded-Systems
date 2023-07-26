/*
 * sum of natural numbers.c
 *
 *  Created on: 25 Jul 2023
 *      Author: Joseph Sherif
 */
#include<stdio.h>
void main(){
	int i, n , sum = 0;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("%d", sum);
}
