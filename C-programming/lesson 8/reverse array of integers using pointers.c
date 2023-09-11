/*
 * reverse array of integers using pointers.c
 *
 *  Created on: 11 Sep 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
#define MAXIMUM 15
int main(){
    int array[MAXIMUM] , reverse[MAXIMUM];
    int *ptr = reverse;
    int length,i,j;
    printf("Please enter the length of the array you want :");
    scanf("%d",&length);
    for(i = 0 ;i<length ; i++){
        printf("element - %d : ",i+1);
        scanf("%d",&array[i]);
        printf("\n");
    }
    for(i = length , j = 0; i>0 ; i--){
        *(ptr+j) = *(array +i-1);
        j++;
    }
    for (i = 0 ; i< length ; i++){
        printf("element - %d : %d\n", i+1, reverse[i]);
    }
    return 0;
}


