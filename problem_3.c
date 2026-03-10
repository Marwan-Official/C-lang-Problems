/*
write a C Lang program to enter a value in hours then the program transforms it into minutes and seconds and then display this hours in minutes and seconds.
*/

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void main()
{
    int hours, mins, secs;
    
    printf("Enter the Hours Value: ");
    scanf("%d", &hours);

    mins = hours * 60;
    // could be mins*60 or hours*3600
    secs = mins * 60;

    printf("In Hours: %d\nIn Minutes: %d\nIn Seconds: %d", hours, mins, secs);
}