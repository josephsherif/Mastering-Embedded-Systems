/*
 * max number of ones.c
 *
 *  Created on: 25 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
int max_ones(int index[],int ones[], int number);
int greatest(int array[]);
int main ()
{
    int number,i,counter =0;
    int index[50] ={0};
    int number_ones[50] = {0};
    printf("please enter the number: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &number);
    for(i =0 ;i<32;i++){
        if((number &(1<<i)) == 0){
            index[counter] = i;
            counter++;
        }
    }

    printf("%d", max_ones(index,number_ones, number));
}
int max_ones(int index[],int ones[], int number){
    int i, max;
    for(i =0 ;i<31;i++){
        ones[i] = index[i+1]-index[i];
    }
    max = greatest(ones);
    return max;
}
int greatest(int array[]){
    int i,j, max =0;
    for(i =0;i<32;i++){
        for(j =0 ; j<31;j++){
            if(array[j]> max){
                max  = array[j];
            }
        }


    }
    return max-1;
}


