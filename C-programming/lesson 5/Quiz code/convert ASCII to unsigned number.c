/*
 * convert ascii to unsigned number.c
 *
 *  Created on: 11 Aug 2023
 *      Author: Joseph Sherif
 */

#include <stdio.h>
#include <string.h>
int calc_power(int number , int power);
unsigned int conversion(char ascii[], int length);

int main()
{
  char x[50] ;
  printf("Enter the numbers:");
  fflush(stdout); fflush(stdin);
  scanf("%s",x);
  printf("%u",conversion(x, strlen(x)));


    return 0;
}
unsigned int conversion(char ascii[],int length){
    int i, j=0;
    unsigned int y = 0;
    for (i = length;i>0;i--){
        y = y + (ascii[j]-'0')*calc_power(10,i-1);
        j++;

    }
    return y;

}
int calc_power(int number,int power){

	if(power ==0)
		return 1;
	  else{
		number *=calc_power(number,power-1);

	}
	return number;
}


