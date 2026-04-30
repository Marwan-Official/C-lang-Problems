/*
write a c language program where user inputs the siize of the array and then enter numbers in each place inside the array he has defined his size before and then calculate how many negative numbers he has entered then print the negative numbers count
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int size;
    
    printf("Enter The Size Of The Array: ");
    scanf("%d",&size);
    
    int numarray[size];
    
    printf("Enter The Elements Of The Array: \n");
    for(int i=0; i<size; i++){
        int num;
        scanf("%d",&num);
        numarray[i]=num;
    }
    
    int negative=0;
    for(int i=0; i<size; i++){
        if(numarray[i]<0) negative++;
    }
    
    printf("The Number Of Negative Numbers User Have Entered = %d",negative);
}