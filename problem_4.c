/*
write a C Lang program to enter two resistance values R1 and R2 that are connected as parallel on a circuit and it calculates the equivalent resistance of the circuit. 
Re = R1*R2 / (R1+R2)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float R1, R2, Re;
    
    printf("Enter R1 Value: ");
    scanf("%f", &R1);
    
    printf("Enter R2 Value: ");
    scanf("%f", &R2);
    
    Re = R1 * R2 / (R1 + R2);

    printf("The Equivalent Resistance (Re) = %f", Re);
}