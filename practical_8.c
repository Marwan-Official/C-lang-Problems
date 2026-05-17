/*
write a C language calculator that takes both the numbers and the operation symbol from the user and then calculate using switch.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2;
    char op;
    
    printf("Enter two nums in order: ");
    scanf("%f %f", &n1, &n2);
    
    printf("\nEnter the operation: ");
    scanf(" %c", &op);
    
    float sum, sub, multi, div;
    
    switch (op) {
        case '+':
            sum = n1 + n2;
            printf("sum = %f\n", sum);
            break;
        case '-':
            sub = n1 - n2;
            printf("sub = %f\n", sub);
            break;
        case '*':
            multi = n1 * n2;
            printf("multi = %f\n", multi);
            break;
        case '/':
            if (n2 != 0) {
                div = n1 / n2;
                printf("div = %f\n", div);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    
    return 0;
}
