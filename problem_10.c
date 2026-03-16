/*
write a C language program that calculates the final salary of an employee after applying the cut-offs taxes which is based on his income as follows: 
if the income is higher than or equal to $500 per month then the tax will be 20% 
if the income is lower than $500 per month and higher than or equal to $300 per month then the text will be 10% 
if the income is less than $300 per month then the tax will be 5%
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    float salary;
    
    printf("Enter The Salary Of The Employ: ");
    scanf("%f", &salary);
    
    float tax;
    
    if(salary >= 500) tax = 0.2;
    else if(salary < 500 && salary >= 300) tax = 0.1;
    else tax = 0.05;
    
    float final_salary;
    final_salary = salary - (salary * tax);
    
    printf("The Final Salary Is: $%f", final_salary);
}