/*
by using if else if statement and the switch case statement write a simple calculator program that add subtract multiply and divide two floating point numbers and then print the results in each process
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float num1, num2;
    
    printf("Enter The First Number: ");
    scanf("%f", &num1);
    
    printf("Enter The Second Number: ");
    scanf("%f", &num2);
    
    char operation;
    printf("Current Available Operations (+ , - , * , /)\n");
    printf("Enter The Operation: ");
    //must have a space before the %c or the code will go nuts for some reason :(
    scanf(" %c", &operation);
    
    float result;
    
    printf("\n");
    
    //if-elseif-else method
    /*if(operation == '+')
    {
        result = (num1 + num2);
        printf("The Result Of The Operation = %f", result);
    }
    else if(operation == '-')
    {
        result = (num1 - num2);
        printf("The Result Of The Operation = %f", result);
    }
    else if(operation == '*')
    {
        result = (num1 * num2);
        printf("The Result Of The Operation = %f", result);
    }
    else if(operation == '/')
    {   
        if (num2 == 0){
            printf("This Operation Can't Be Done");
        }
        else
        {
            result = (num1 / num2);
            printf("The Result Of The Operation = %f", result);
        }
    }
    else
    {
        printf("Error: You Have Not Entered A Supported Operation\nMake Sure You Are Using The Supported Operations.");
    }*/
    
    //switch method
    switch(operation)
    {
        case '+':
        result = (num1 + num2);
        printf("The Result Of The Operation = %f", result);
        break;
         
        case '-':
        result = (num1 - num2);
        printf("The Result Of The Operation = %f", result);
        break;
        
        case '*':
        result = (num1 * num2);
        printf("The Result Of The Operation = %f", result);
        break;
        
        case '/':
        if (num2 == 0){
            printf("This Operation Can't Be Done");
        }
        else
        {
            result = (num1 / num2);
            printf("The Result Of The Operation = %f", result);
        }
        break;
        
        default:
        printf("Error: You Have Not Entered A Supported Operation\nMake Sure You Are Using The Supported Operation");
        break;
        
    }
}
