/*
Write a program using C lang where user will input 3 integers
the program will find the biggest of the numbers and print it.
*/

//Add main libraries
#include<stdio.h>
#include<stdlib.h>

//Add main function 
int main()
{
    int n1, n2, n3;
    
    //Reads the three numbers from user
    printf("Please enter the first number: ");
    scanf(" %d",&n1);
    
    printf("Please enter the second number: ");
    scanf(" %d",&n2);
    
    printf("Please enter the third number: ");
    scanf(" %d",&n3);
    
    if(n1 > n2)
    {
        //since n1>n2 and n1>n3 then n1 is the biggest.
        if(n1 > n3)
            printf("The biggest number is the first number: %d", n1);
        
        //else if n3>n1 and we know n1>n2 then n3 is the biggest.
        else if(n3 > n1)
            printf("The biggest number is the third number: %d", n3);
            
        //since n1>n2 and n1 is not bigger or smaller than n3 then they are equal.
        else
            printf("The first and third are equal with value: %d", n1);
            
    }
    
    else if(n1 < n2)
    {
        //since n2>n1 and n2>n3 then n2 is the biggest.
        if(n2 > n3)
            printf("The biggest number is the second number: %d", n2);
            
        //else if n3>n2 and we know n2>n1 then n3 is the biggest.
        else if(n3 > n2)
            printf("The biggest number is the third number: %d", n3);
            
        //since n2>n1 and n2 is not bigger or smaller than n3 then they are equal.
        else
            printf("The second and third are equal with value: %d", n2);
            
    }
    
    else
    {
        //since n1 is not bigger or smaller than n2 then they are equal, if n3>n1 then it's the biggest.
        if(n1 < n3)
            printf("The biggest number is the third with value: %d", n3);
          
        //else if they were equal but bigger than n3 then they are equally big.    
        else if(n1 > n3)
            printf("The first and second are equal with value: %d", n1);
        
        //but if n1=n2 and they are not bigger or smaller, n3 must equal them.
        else
            printf("The three numbers are equal.");    
    }
    
    //Different approach:
    /*
    int n1, n2, n3;

    printf("Enter three integers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 == n2 && n2 == n3)
    {
        printf("All three numbers are equal: %d\n", n1);
    }
    
    else if(n1 >= n2 && n1 >= n3)
    {
        if(n1 == n2)
            printf("First and second numbers are equal and largest: %d\n", n1);
            
        else if(n1 == n3)
            printf("First and third numbers are equal and largest: %d\n", n1);
            
        else
            printf("Largest number is the first: %d\n", n1);
            
    }
    
    else if(n2 >= n1 && n2 >= n3)
    {
        if(n2 == n3)
            printf("Second and third numbers are equal and largest: %d\n", n2);
            
        else
            printf("Largest number is the second: %d\n", n2);
            
    }
    
    else
    {
        printf("Largest number is the third: %d\n", n3);
    }
    */
    
    //finish program with return 0 to ensure safe and complete compilation.
    return 0;
}
