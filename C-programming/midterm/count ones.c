/*
 * count ones.c
 *
 *  Created on: 25 Aug 2023
 *      Author: Joseph Sherif
 */
/*#include<stdio.h>
int count_ones(int number);
int main ()
{
	int number;
	printf("Please enter the number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&number);
    printf("%d", count_ones(number));

}
int count_ones(int number){
    int i , x, counter =0;
    for(i =0 ; i<32;i++){
        x = number & (1<<i);
        if(x != 0){
            counter++;
        }
    }
    return counter;
}
*/
