/*
 * power recusion.c

 *
 *  Created on: 11 Aug 2023
 *      Author: Joseph Sherif
 */
/*
#include <stdio.h>
#include <string.h>
int calc_power(int number , int power);
int main ()
{
	int base,power;
	printf("Enter the base number:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&base);
	printf("Enter power number (positive integer):");
	fflush(stdout);fflush(stdin);
	scanf("%d",&power);
	printf("%d ^ %d = %d",base ,power, calc_power(base,power));


	return 0;
}

int calc_power(int number,int power){

	if(power ==0)
		return 1;
	else{
		number *=calc_power(number,power-1);
	}
	return number;
}





