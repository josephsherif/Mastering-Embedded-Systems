/*
 * pointer to array of pointers to a structure.c
 *
 *  Created on: 10 Sep 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
struct Sperson {
    char name[50];
    int ID;
};

int main()
{
    struct Sperson Employee1 ={"Alex",1002};
    struct Sperson Employee2 ={"Joseph",1004};
    struct Sperson *pe1 = &Employee1;
    struct Sperson *pe2 =&Employee2;
    struct Sperson *array[2] ={pe1,pe2};
    struct Sperson* (*pointer)[2] = array;
    int i;
    for(i = 0 ; i< 2 ; i++){
        printf("Employee %d name : %s\n", i+1, (**(*pointer+i)).name);
        printf("Employee %d ID : %d\n", i+1, (**(*pointer+i)).ID);
    }
    return 0;
}


