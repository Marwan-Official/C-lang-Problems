/*
Write a program using C lang where user will input 2 integer values and the program will calculate (X^2)+(Y^2) then print it to the user.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{

    int n1, n2;
    int res;
    
    printf("Enter the first number:");
    scanf("%d", &n1);
    
    printf("Enter the second number:");
    scanf("%d", &n2);

    res = (pow(n1, 2)) + (pow(n2, 2));
    
    printf("The Result is: %d", res);
    
    return 0;
}