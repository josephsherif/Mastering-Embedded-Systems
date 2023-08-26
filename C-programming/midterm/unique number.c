/*
 * unique number.c
 *
 *  Created on: 25 Aug 2023
 *      Author: Joseph Sherif
 */
/*#include <stdio.h>
int search (int number,int arr[],int  length);
int uniqueNumber(int x[],int repeated[],int length);
int main ()
{
	int x[10]  ;
	int repeated[10];
	int i, j,length;
	printf("please enter the length of a string");
	fflush(stdout); fflush(stdin);
	scanf("%d",&length);
	for(i = 0;i<length;i++){
		scanf("%d",&x[i]);
	}

	printf("%d",uniqueNumber(x,repeated,length));
}
int uniqueNumber(int x[],int repeated[],int length){
	int i, j, unique, flag, counter = 0;
	for (i = 0; i < length; i++)
		{
			for (j = 0; j < length-1; j++)
			{
				if (i == j)
					continue;
				if (x[i] == x[j])
				{
					repeated[counter] = x[j];
					counter++;
				}
			}
		}
		for (i = 0; i < length-1; i++)
		{
			flag = search (x[i], repeated, length);
			if (flag == 0)
			{
				unique = x[i];
				break;
			}
		}
		return unique;
}
int search (int number, int arr[], int length)
{
	int i, found = 0;
	for (i = 0; i < length; i++)
	{
		if (arr[i] == number)
		{
			found = 1;
			break;
		}
	}
	return found;
}
*/

