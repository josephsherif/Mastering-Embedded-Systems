/*
 * information of array of students.c
 *
 *  Created on: 28 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
struct Sinformation{
    int roll_no;
    char name[50];
    float marks;
};

int main(){
    int i;
    struct Sinformation students[10];
    printf("Enter information of students:\n");
    for(i = 0 ; i < 10 ; i++){
        students[i].roll_no = i+1;
        printf("For roll number %d\n",students[i].roll_no);
        printf("Enter name: ");
        fflush(stdout);
        scanf("%s",&students[i].name);
        printf("Enter marks: ");
        fflush(stdout);
        scanf("%f",&students[i].marks);
    }
    printf("Displaying information of students:\n");
      for(i = 0 ; i < 10 ; i++){
       printf("Information for roll number %d\n",students[i].roll_no);
       printf("Name: %s\n",&students[i].name);
       printf("Marks: %.2f\n", students[i].marks);
    }


    return 0;
}


