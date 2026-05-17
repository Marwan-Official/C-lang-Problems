/*
using while, write a c program that reads many integer numbers, and then print the number of odd and even integers( the program stops when a number higher than or equal 1000)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int countodd, counteven, number;
    counteven = 0;
    countodd = 0;
    
    while (1) {
        printf("enter your numbers = ");
        scanf("%d", &number);
        
        if (number >= 1000) {
            break;
        } else {
            if (number % 2 == 0) {
                counteven++;
            } else {
                countodd++;
            }
        }
    }
    
    printf("odd numbers = %d and even numbers = %d \n", countodd, counteven);
    
    return 0;
}

    