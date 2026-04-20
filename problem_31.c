/*

write a program with custom function that will calculate the cube and the square of a number that the user inputs then print the cube and square for the user to see

*/

#include <stdio.h>
#include <stdlib.h>

int cube(int n);
int square(int n);

int main(void) {
    
int num,cubed,squared;

printf("Enter The Number: ");
scanf("%d",&num);
    
cubed = cube(num);
squared = square(num);
printf("\nThe User Number = %d\nThe Squared Number = %d\nThe Cubed Number = %d",num, squared, cubed);
}

int cube(int n){
    int cubed;
    cubed=(n*n*n);
    return cubed;
}

int square(int n){
    int squared;
    squared=(n*n);
    return squared;
}