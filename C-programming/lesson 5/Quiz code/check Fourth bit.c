/*
 * check fourth bit.c
 *
 *  Created on: 11 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
#include <string.h>
int checkFourth_bit(int number);
int main ()
{
    int number;
    printf("Please enter the number to check:");
    fflush(stdout); fflush(stdin);
    scanf("%d",&number);
    printf("%d",checkFourth_bit(number));

  return 0;
}
int checkFourth_bit(int number){
    if ((number & 1<<3) == 0){
        return 0;
    }
    else{
        return 1;
    }
}

