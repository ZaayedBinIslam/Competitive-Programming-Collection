// Created on 16-Mar-24
//
#include<stdio.h>


int main() {
    int a, b, c;
    printf("Enter the first side of a triangle: ");
    scanf("%f", &a);
    printf("Enter the second side of a triangle: ")
    scanf("%f", &b);
    printf("Enter the third side of a triangle: ")
    scanf("%f", &c);

    if (a + b  c || b + c > a || a + c > b)
        printf("It's not possible to make a triangle");
    else
        printf("It's possible to make a triangle")
    return 0;

}