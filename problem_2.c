/*
write a program using C Lang to enter the width and the height of a rectangle then calculate its area and circumference and then print the result to the user.
*/

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
    float height, width, area, circum;
    
    printf("Enter the height: ");
    //don't forget the &
    scanf("%f", &height);    
    
    printf("Enter the width: ");
    //don't forget the &
    scanf("%f", &width);
    
    area = height * width;
    circum = 2 * (height + width);
    
    printf("The Area = %f\nThe Circumference = %f", area, circum);
    
    return 0;
}