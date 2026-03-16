/*
by using the If-Else statement write a C language program that reads a number and the check whether it is even or an odd number then print if it is either even or odd number.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int num;
    
    printf("Enter The Number: ");
    scanf("%d", &num);
    
    float remainder = num % 2;
    
    if(remainder == 0)
    {
        printf("The Number %d Is An Even Number.", num);
    }
    else
    {
        printf("The Number %d Is An Odd Number.", num);
    }
}