// Created on 14-Mar-24
//
#include<stdio.h>

int main() {

    while (1) {
        int x, i;
        int sum = 0;
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
        if (x % 2 != 0) {
            x += 1;
        }
        for (i = 1; i < 6; i++) {
            sum = sum + x;
            x = x + 2;
        }
        printf("%d\n", sum);
    }

    return 0;
}