/*
 * check the last occurrence.c
 *
 *  Created on: 11 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
#include <string.h>
int checkLast_occurrence(int array[],int number, int length);
int main ()
{
    int number,i,size;
    int array[50];
    printf("Please enter the size of the array :");
    fflush(stdout); fflush(stdin);
    scanf("%d",&size);
    printf("Please enter the elements of the array :");
    fflush(stdout); fflush(stdin);
    for(i =0 ; i< size;i++){
        scanf("%d",&array[i]);
    }
    printf("Please enter the number to check :");
    fflush(stdout); fflush(stdin);
    scanf("%d",&number);
    printf("The number is %d and the result = %d",number, checkLast_occurrence(array,number,size));

  return 0;
}
int checkLast_occurrence(int array[],int number,int length){
    int index , i , flag =0;
    for (i =0; i< length;i++){
        if (number== array[i] ){
            flag =1;
            index =i;
        }

    }
    if (flag ==1){
        return index;
    }
    else{
        return -1;
    }

}

