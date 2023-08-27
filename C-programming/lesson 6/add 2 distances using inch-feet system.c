/*
 * add 2 distances using inch-feet system.c
 *
 *  Created on: 27 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
struct Sdistance{
    int feet;
    float inches;
};
int main(){
    int remainder;
    struct Sdistance distance_1;
    struct Sdistance distance_2;
    struct Sdistance total_distance;
    fflush(stdout);
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d",&distance_1.feet);
    printf("Enter inches: ");
    fflush(stdout);
    scanf("%f",&distance_1.inches);
    printf("Enter information for 2nd distance\n");
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d",&distance_2.feet);
    printf("Enter inches: ");
    fflush(stdout);
    scanf("%f",&distance_2.inches);
    total_distance.inches = distance_1.inches+distance_2.inches;
    if(total_distance.inches>=12){
        remainder = total_distance.inches/12;
        total_distance.feet =distance_1.feet+distance_2.feet + remainder;
        fflush(stdout);
        printf("sum of distances=%d \'-%.1f\'", total_distance.feet,total_distance.inches-remainder*12);

    }
    else{
        total_distance.feet =distance_1.feet+distance_2.feet;
          printf("sum of distances=%d \'-%.1f\'", total_distance.feet,total_distance.inches);

    }


    return 0;
}


