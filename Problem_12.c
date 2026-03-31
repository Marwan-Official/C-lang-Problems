/*
Write a program using C lang where user will input a number of pennies
the program will compute the pennies and turn them into the simplest form in
dollars(100 pennies), quarters(25 pennies), dimes(10 pennies), nickels(5 pennies)
example: 
106 pennies = 1 dollar, 1 nickel, and 1 penny.
*/

//Add main libraries
#include<stdio.h>
#include<stdlib.h>

//Add main function 
int main()
{
    int pennies, nickels, dimes, quarters, dollars;
    
    //Ask the user to enter pennies
    printf("Enter the number of pennies: ");
    scanf(" %d",&pennies);
    
    //compute the number of dollars by integer division (which deletes the numbers after decimal point) 
    dollars = pennies / 100;
    pennies %= 100;
    
    //repeat with each coin
    quarters = pennies / 25;
    pennies %= 25;
    
    dimes = pennies / 10;
    pennies %= 10;
    
    nickels = pennies / 5;
    pennies %= 5;
    
    printf(" Dollars: %d \n Quarters: %d \n Dimes: %d \n Nickels: %d \n pennies: %d",
    dollars, quarters, dimes, nickels, pennies);
    
    //An alternative mehtod requires using loops which is yet to be studied
    //This method is the faster than loops
    
    //finish program with return 0 to ensure safe and complete compilation.
    return 0;
}
