/*
write a C language program that reads the student score of one subject and if the score of the subject is greater than or equal to 50 then print pass if not print fail
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int degree;
    
    printf("Enter The The Student Degree: ");
    scanf("%d", &degree);
    
    if(degree >= 50){
        printf("The Student Grade Is: Pass");
    }
    else
    {
        printf("The Student Grade Is: Fail");
    }
}