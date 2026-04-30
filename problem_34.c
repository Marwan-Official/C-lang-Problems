/*
write a c language program to get the array size from the user then get every number according to its place in the array then sum then then get their avg and print both for the user 
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int size;
    float avg,sum=0;
    
    printf("Enter The Size Of The Array: ");
    scanf("%d",&size);
    
    int numarray[size];
    for(int i=0; i<size; i++){
        numarray[i]=i;
        sum=sum+numarray[i];
    }
    
    avg=sum/size;
    
    printf("The Sum Of The All Elements Of The [%d] Array = %f\n",size,sum);
    printf("The Avg Of The All Elements Of The [%d] Array = %f",size,avg);
    
    
}