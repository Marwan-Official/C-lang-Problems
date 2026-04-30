/*
write a c language program using arrays where user specify how many numbers he want to check for being even or odd then check these nmumbers and print out how many even and odd numbers he have entered */

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int numarray[100];
    
    int size;
    printf("Enter How Many Numbers You Want To Check: ");
    scanf("%d", &size);
    
    printf("Enter The Numbers You Wanna Check: \n");
    for(int i=0; i<size; i++){
        int num;
        scanf("%d",&num);
        numarray[i]=num;
    }
    
    int counteven=0,countodd=0;
    for(int i=0; i<size; i++){
        if(numarray[i]%2==0){
            counteven++;
        }else{
            countodd++;
        }
    }
    
    printf("You Entered %d Even Numbers\nYou Have Entered %d Odd Numbvers",counteven,countodd);
}