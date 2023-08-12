/*
 * clear bit.c
 *
 *  Created on: 11 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
#include <string.h>
int clearBit(int number , int bitPosition);
int main ()
{
  int number , bitPosition;
  printf("Please enter the number: ");
  fflush(stdout); fflush(stdin);
  scanf("%d",&number);
  printf("Please enter the number position");
  fflush(stdout); fflush(stdin);
  scanf("%d",&bitPosition);
  printf("Result = %d",clearBit(number,bitPosition));


  return 0;
}
int clearBit(int number , int bitPosition){
    return number&=~1<<bitPosition;
}


