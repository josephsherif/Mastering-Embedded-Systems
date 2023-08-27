/*
 * Area of circle.c
 *
 *  Created on: 28 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
#define PI 3.14159265359
#define AREA(r) PI*r*r
int main(){
    float radius;
    printf("Enter the radius: ");
    fflush(stdout);
    scanf("%f",&radius);
    printf("Area = %.2f",AREA(radius));

    return 0;
}


