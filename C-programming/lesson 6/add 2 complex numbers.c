/*
 * add 2 complex numbers.c
 *
 *  Created on: 27 Aug 2023
 *      Author: Joseph Sherif
 */
#include <stdio.h>
struct Scomplex{
    float real;
    float imaginary;
};
struct Scomplex addition(struct Scomplex x, struct Scomplex y);
int main(){
    struct Scomplex first_complex;
    struct Scomplex second_complex;
    struct Scomplex result;
    fflush(stdout);
    printf("For 1st complex number\n");
    printf("Enter real and imaginary respectively: ");
    fflush(stdout);
    scanf("%f %f",&first_complex.real,&first_complex.imaginary);
    printf("For 2nd complex number\n");
    printf("Enter real and imaginary respectively: ");
    fflush(stdout);
    scanf("%f %f",&second_complex.real,&second_complex.imaginary);
    result = addition(first_complex,second_complex);
    printf("sum= %.2fi + %.2fj", result.real,result.imaginary);


    return 0;
}
struct Scomplex addition(struct Scomplex x, struct Scomplex y){
    struct Scomplex sum ;
    sum.real = x.real + y.real;
    sum.imaginary = x.imaginary + y.imaginary;
    return sum;


}

