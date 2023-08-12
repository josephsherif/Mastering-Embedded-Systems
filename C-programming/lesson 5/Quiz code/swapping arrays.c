/*
 * swap arrays.c
 *
 *  Created on: 11 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
#include <string.h>
void swapArrays(char first[],char second[]);

int main()
{
    char arr1[50];
    char arr2[50];
    printf("Enter the content of first string");
    fflush(stdout); fflush(stdin);
    scanf("%s",arr1);
    printf("Enter the content of second string");
    fflush(stdout); fflush(stdin);
    scanf("%s",arr2);
    swapArrays(arr1,arr2);
    printf("%s",arr1);
    printf("\n%s",arr2);

    return 0;
}
void swapArrays(char first[],char second[]){

    char copy[100];
    strcpy(copy,first);
    int i = 0,j = 0;
    while(first[i]!=0){
        if (second[i]!=0)
          first[i] = second[i];
          else
          first[i] = 0;
        i++;
    }
    while(copy[j]!=0){
        second[j] = copy[j];
        j++;
    }
}

