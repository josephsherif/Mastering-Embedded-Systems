/*
 * searching in array.c
 *
 *  Created on: 2 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
int main (void){
	int i , number , index , searched;
	int array[100];
	printf("Enter number of elements");
	fflush(stdout); fflush(stdin);
	scanf("%d", &number);
	for(i =0 ; i< number; i++){
		scanf("%d",&array[i]);
	}
	for(i =0 ; i< number; i++){
			printf("%d\t",array[i]);
			fflush(stdout);
		}
	printf("\nsEnter the elements to be searched:");
	fflush(stdout); fflush(stdin);
	scanf("%d", &searched);
	for(i =0; i< number ; i++){
		if (searched == array[i]){
			index = i;
			printf("Number found at: %d",index+1);
			fflush(stdout);
			break;
		}
	}
	if (i == number)
		printf("Number not found");
	fflush(stdout);

}
