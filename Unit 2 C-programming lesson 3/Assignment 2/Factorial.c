/*
 * Factorial.c
 *
 *  Created on: 25 Jul 2023
 *      Author: Joseph Sherif
 */
#include<stdio.h>
void main(){
	int n,i , factorial =1;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d", &n);
	fflush(stdin);
	if (n>0){
		for (i=1;i<=n;i++){
			factorial*=i;
		}
		printf("Factroal =%d", factorial);
	}
	else if(n ==0){
		printf("Factorial =%d",1);
	}
	else{
		printf("Error!!! Factorial of negative number doesnt exist");
	}
}
