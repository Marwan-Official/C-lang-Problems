/*
Write a c program to to print to calculate 𝑥 pow y*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, base, power, result = 1;
    
    printf("Enter base : ");
    scanf("%d", &base);
    
    printf("Enter power : ");
    scanf("%d", &power);
    
    for (i = 1; i <= power; i++) {
        result = result * base;
    }
    
    printf("result = %d \n", result);
    
    return 0;
}

    