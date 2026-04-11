/*
Write a C program to check if a number that the user inputs is perfect
or not then prints the result.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Creating variables: num for input, sum for the total of proper divisors.
    // sum is initialized to 1 because 1 is a divisor for every number > 1.
    int num = 0, sum = 1; 
    
    // Read the input number from the user.
    printf("Enter a positive number: ");
    scanf("%d", &num);
    
    // If the number is not positive, print an error.
    if (num < 0)
    {
        printf("Error: number is not positive.");
        return 0;
    }
    
    // Perfect numbers must be greater than 1 (the smallest is 6).
    if (num <= 1)
    {
        printf("Not perfect");
        return 0;
    }

    // This loop finds all proper divisors, algorithm explained below. 
    // We check up to the square root of the number to optimize performance.
    for (int i = 2; i <= num / i; i++) 
    {
        // If 'i' divides 'num' without a remainder, it is a divisor.
        if (num % i == 0)
        {
            // If i is the square root, add it once.
            if (num / i == i)
                sum += i;
            // Otherwise, add both 'i' and the paired divisor 'num/i'.
            else
                sum += (i + num/i);
        }
    }
    
    // A number is perfect if the sum of its proper divisors equals the number.
    if (sum == num)
        printf("Perfect number");
    else
        printf("not perfect");
        
    return 0;
}

/*
ALGORITHM EXPLANATION:
A perfect number is a positive integer that is equal to the sum of its positive 
proper divisors (divisors excluding the number itself).

Optimization:
Instead of checking every number from 1 to (num-1),we use the property
that divisors appear in pairs. If 'i' is a divisor, 
then 'num/i' is also a divisor.

By iterating only up to the square root of 'num', we reduce the time of execution.

Example (Perfect number 6):
1. Proper divisors: 1, 2, 3.
2. Sum: 1 + 2 + 3 = 6. (Matches input, so it is Perfect).

Example (Perfect number 28):
1. Proper divisors: 1, 2, 4, 7, 14.
2. Sum: 1 + 2 + 4 + 7 + 14 = 28. (Matches input, so it is Perfect).
*/
    
