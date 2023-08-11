/*
 * check power of 3.c
 *
 *  Created on: 11 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
#include <string.h>
int calc_power (int number, int power);
int checkPower3 (int number);
int main ()
{
    int number ;
    printf("please enter the number to check: ");
    fflush(stdout); fflush(stdin);
    scanf("%d",&number);
    printf("if the number is a power of 3 it will return 0 else it will retrn 1 \n %d",checkPower3(number));


  return 0;
}

int
checkPower3 (int number)
{
  int result = 0, flag = 1, i = 1;
  if (number == 1)
    {
      return 0;
    }
  else
    {
      while (result <= number)
	{
	  result = calc_power (3, i);
	  if (number == result)
	    {
	      flag = 0;
	      break;
	    }
           i++;
	}
    }
    if(flag ==0){
        return 0;
    }
    else{
        return 1;
    }
}

int
calc_power (int number, int power)
{

  if (power == 0)
    return 1;
  else
    {
      number *= calc_power (number, power - 1);
    }
  return number;
}


