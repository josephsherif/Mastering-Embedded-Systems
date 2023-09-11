/*
 * reversing multiple types of arrays.c
 *
 *  Created on: 11 Sep 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
#include <string.h>
enum array_type { INT, CHAR };
#define MAXIMUM 15

int main() {
    enum array_type type;
    printf("Please enter the type of the array you want to reverse (0 for INT, 1 for CHAR): ");
    fflush(stdout);
    scanf("%u", &type);

    if (type == INT) {
        int array[MAXIMUM], reverse[MAXIMUM];
        void *ptr = reverse;
        int length, i, j;
        printf("Please enter the length of the array you want: ");
        fflush(stdout);
        scanf("%d", &length);
        for (i = 0; i < length; i++) {
            printf("element - %d : ", i + 1);
            fflush(stdout);
            scanf("%d", &array[i]);
        }
        for (i = length, j = 0; i > 0; i--) {
            *((int*)ptr + j) = *(array + i - 1);
            j++;
        }
        printf("\n");
        fflush(stdout);
        for (i = 0; i < length; i++) {
            printf("element - %d : %d\n", i + 1, reverse[i]);
        }
    } else if (type == CHAR) {
        char string[50], rev[50];
        void*ptr = rev;
        printf("Please enter string: ");
        fflush(stdout);
        scanf("%s", string);
        int length= strlen(string), i ,j;
        for (i = length, j = 0; i > 0; i--, j++) {
            *((char*)ptr + j) = *(string + i - 1);
        }
        *((char*)ptr + length) = 0;
        printf("Reverse of string is : %s", rev);
    }

    return 0;
}


