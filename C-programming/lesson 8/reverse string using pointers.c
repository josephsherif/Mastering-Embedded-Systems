/*
 * reverse string using pointers.c
 *
 *  Created on: 11 Sep 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
#include<string.h>
int main()
{
  char string[50];
  char reverse[50];
  char *ptr = reverse;
  printf("Please enter string:");
  fflush(stdout);
  scanf("%s",string);
  int length = strlen(string), i,j;
  for(i = length, j = 0 ; i>0; i--, j++){
      *(ptr+j) = *(string + i-1) ;
  }
  *(ptr+length) = 0;
  printf("%s", reverse);

    return 0;
}

