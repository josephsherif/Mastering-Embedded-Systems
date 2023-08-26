/*
 * reverse integer array.c
 *
 *  Created on: 25 Aug 2023
 *      Author: Joseph Sherif
 */
/*#include <stdio.h>
#include <string.h>
void reverse(int array[], int length);
int main ()
{
    int array[50];
    int size,i;
    printf("Enter the size of the array :");
    fflush(stdout); fflush(stdin);
    scanf("%d",&size);
    printf("Enter the elements of the array :");
    fflush(stdout);
    for(i = 0;i<size;i++){
        scanf("%d",&array[i]);
    }
    reverse(array,size);
    for(i = 0 ; i<size;i++){
        printf("%d\t",array[i]);
    }



  return 0;
}
void reverse(int array[] , int length){
    int i , j =length-1;
    int copy [50];
    for(i = 0 ; i<length ; i++){
        copy[i] = array[i];
    }
    for (i =0 ; i<length;i++){
        array[i] = copy[j];
        j--;
    }
}
*/

