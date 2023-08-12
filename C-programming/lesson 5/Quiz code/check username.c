/*
 * check user.c
 *
 *  Created on: 11 Aug 2023
 *      Author: Joseph Sherif
 */
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int checkUser(char username[],char enteredUser[]);
int main()
{
    char username[] = "Josephsherif";
    char enteredUser[50];
    printf("Please enter the user name :");
    fflush(stdout); fflush(stdin);
    gets(enteredUser);
    printf("%d", checkUser(username,enteredUser));

    return 0;
}
int checkUser(char username[],char enteredUser[]){
    int i = 0 ,flag = 1 ;
    while(username[i] !=0){
        if(username[i] != enteredUser[i]){
            flag = 0;
            break;
        }
        i++;
    }
    if (flag ==1){
        return 1;
    }
    else{
        return 0;
    }
}



