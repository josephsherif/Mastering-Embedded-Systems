/*
 * insert an element.c
 *
 *  Created on: 2 Aug 2023
 *      Author: Joseph Sherif
 */
/*#include <stdio.h>
int main(void){
	int array [100];
	int i,index ,number,inserted;
	printf("Enter number of elements:\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&number);
	fflush(stdout);fflush(stdin);
	for(i = 0; i< number ; i++){

		fflush(stdout);fflush(stdin);
		scanf("%d", &array[i]);
	}
	for(i = 0; i< number ; i++){
		   fflush(stdout);fflush(stdin);
			printf("%d \t", array[i]);
		}
	printf("\nEnter the element to be inserted : ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &inserted);
	printf("Enter the location :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&index);
	if (index> number){
		printf("Wrong location");
		return 1;
	}
	else
		array[index-1] = inserted ;
	for(i = 0 ; i< number;i++){
		printf("%d \t",array[i]);
	}

}
*/
