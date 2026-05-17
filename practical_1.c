/*

using a c program design a calculator that accepts two numbers from the user then do all operations on them (+,-,*,/)

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    
    printf("Enter two numbers in order: ");
    scanf("%f %f", &num1, &num2);
    
    float sum = num1 + num2;
    printf("sum = %f \n", sum);
    
    float sub = num1 - num2;
    printf("sub = %f \n", sub);
    
    float multi = num1 * num2;
    printf("Multi = %f \n", multi);
    
    float div;
    if (num2 != 0) {
        div = num1 / num2;
        printf("div = %f \n", div);
    } else {
        printf("can't complete operation \n");
    }
    
    return 0;
}

