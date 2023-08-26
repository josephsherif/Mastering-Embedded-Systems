/*
 * reverse word in a string.c
 *
 *  Created on: 26 Aug 2023
 *      Author: Joseph Sherif
 */
/*#include <stdio.h>
#include <string.h>

void reverseString(char array[], char reverse[], int length);
int main ()
{
    char array[20] ;
    char reverse[20];
    fflush(stdout);
    printf("Please enter the string: ");
    fflush(stdout); fflush(stdin);
   gets(array);
    reverseString(array,reverse,strlen(array));


  return 0;
}
void reverseString(char array[], char reverse[], int length){
    int i, j , index;
    char x[20];
    strcpy(x,array);
    for(i = length, j =0  ;i>0;i--,j++){
        reverse[j] = array[i-1];
    }
    reverse[length] = 0;

    for(i =0;i< length;i++){
        if (reverse[i]==' '){
        index = i;
        break;
        }
    }
    strcpy(x,reverse);

    j = index;
    for(i = 0  ; i< index ;i++){
        reverse[i] = x[j-1];
        j--;
    }

    for(i = index+1 ,j = length; i< length ;i++){
        reverse[i] = x[j-1];
        j--;
    }
    reverse[length] = 0;
    strcpy(x,reverse);
     printf("%s", reverse);

}
*/




