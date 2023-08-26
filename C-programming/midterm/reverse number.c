/*
 * reverse number.c
 *
 *  Created on: 25 Aug 2023
 *      Author: Joseph Sherif
 */

/*#include <stdio.h>
int reverse(int number,int no_Digits);
int calc_power(int number , int power);
int main()

{
  int number, no_Digits;
  printf("Please enter the number :");
  fflush(stdout);fflush(stdin);
  scanf("%d",&number);
  no_Digits = printf("%d", number);
  printf("\n reversed number :%d",reverse(number,no_Digits));

}
int calc_power(int number,int power){

	if(power ==0)
		return 1;
	else{
		number *=calc_power(number,power-1);
	}
	return number;
}
int reverse(int number,int no_Digits){
    int i,j,temp1,temp2,reversed =0 ;
    temp1 =number;
    for(i = 0, j =no_Digits; i<no_Digits;i++,j--){
        temp2 = temp1%10;
        temp1 = temp1 /10;
        reversed = reversed + (temp2*calc_power(10,j-1));
    }
    return reversed;
}
*/

