/*
 * How to handle pointers.c
 *
 *  Created on: 11 Sep 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>

int main()
{
   int m = 29;
   int *ab;
   printf("Address of m is : %p\n ",&m);
   printf("Value of m is : %d\n",m);
   ab = &m;
   printf("Now ab is assigned with the address of m.\n");
   printf("Address of pointer ab is : %p\n",ab);
   printf("Content of pointer ab : %d\n",*ab);
   m = 34;
    printf("Address of pointer ab is : %p\n",ab);
    printf("Content of pointer ab : %d\n",*ab);
    *ab = 7;
    printf("Address of m is : %p\n",&m);
    printf("Value of m is : %d\n",m);
    return 0;
}


