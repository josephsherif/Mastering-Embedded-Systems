/*
 * sum all digits.c
 *
 *  Created on: 25 Aug 2023
 *      Author: Joseph Sherif
 */
/*#include <stdio.h>
int sumDigits(int number,int no_digits);
int main()

{
	int number, no_Digits;
	printf("Please enter the number :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&number);
	no_Digits = printf("%d\n", number);
	printf("%d",sumDigits(number,no_Digits));

}
int sumDigits(int number,int no_digits){
	int i, temp ,temp2,sum =0;
	temp = number;
	for(i = 0; i<no_digits;i++){
		temp2 =temp%10;
		temp = temp/10;
		sum+= temp2;

	}
	return sum;
}
*/
