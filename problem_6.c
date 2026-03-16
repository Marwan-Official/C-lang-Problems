/*
write a C language program that reads the student score in three subjects m1 M2 and M3 if the summation of this subjects is greater than or equal to 150 then print pass also if the total score is lower than 150 then print fail.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{

    float M1, M2, M3;
    
    printf("Enter The First Subject Degree: ");
    scanf("%f", &M1);
    
    printf("Enter The Second Subject Degree: ");
    scanf("%f", &M2);
    
    printf("Enter The Third Subject Degree: ");
    scanf("%f", &M3);
    
    float sum = M1 + M2 + M3;
    
    if(sum >= 150)
    {
        printf("The Grade Is: Pass");
    }
    else
    {
        printf("The Grade Is: Fail");
    }
}