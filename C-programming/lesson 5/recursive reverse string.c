/*
 * recursive reverse string.c
 *
 *  Created on: 11 Aug 2023
 *      Author: Joseph Sherif
 */
/*
#include <stdio.h>
#include <string.h>
void reverse(char string [],char copy[], int length);

int main ()
{
	char sentence[100];
	char copy[100];
	printf("Enter a sentence :");
	fflush(stdout);
	gets(sentence);
	strcpy(copy,sentence);
	reverse(sentence,copy ,strlen(sentence));
	printf("%s", sentence);

	return 0;
}
void reverse(char string[] ,char copy[] , int length){
	static int counter = 0;

	if(length>0){
		string[counter] = copy[length-1];
		counter++;
		reverse(string ,copy, length-1);
	}


}
*/

