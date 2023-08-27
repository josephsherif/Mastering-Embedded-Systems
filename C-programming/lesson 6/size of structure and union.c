/*
 * size of structure and union.c
 *
 *  Created on: 28 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
    union job{
        char name[32];
        float salary;
        int worker_no;
    }u;
    struct job1{
        char name[32];
        float salary;
        int worker_no;
    }s;

int main(){
    //size of union will be the greatest size inside it which is 32 bytes
    printf("Size of union = %d",sizeof(u));
    //size of structure will be the sum of all the sizes inside it which is 40 bytes
    printf("\nSize of stucture = %d",sizeof(s));
    return 0;

}


