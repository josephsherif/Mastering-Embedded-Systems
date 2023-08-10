/*
 * prime numbers.c
 *
 *  Created on: 10 Aug 2023
 *      Author: Joseph Sherif
 */
/*#include <stdio.h>
void prime_numbers(int firstLimit, int secondLimit);
int main()
{
	int limit1 ,limit2;
	printf("Enter two intervals: ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d", &limit1,&limit2);
	printf("Prime numbers between %d and %d are:", limit1 , limit2);
	prime_numbers(limit1,limit2);
s
	return 0;
}
void prime_numbers(int firstLimit, int secondLimit){
	int i ,j ,flag =1;
	if(secondLimit>firstLimit){
		for(i =firstLimit;i<=secondLimit;i++){
			flag =1;
			for (j =2 ; j< i-1;j++){
				if (i%j ==0){
					flag =0;
					break;
				}
			}
			if (flag ==1)
				printf("%d\t", i);
		}
	}


	else if (firstLimit >secondLimit){
		for(i =secondLimit;i<=firstLimit;i++){
			for (j =2 ; j< i-1;j++){
				if (i%j ==0){
					flag =0;
					break;
				}
			}
			if (flag ==1)
				printf("%d\t", i);
		}
	}
	else if (firstLimit < 0 && secondLimit < 0){
		printf("Invalid");
	}

}
*/

