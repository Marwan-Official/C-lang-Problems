/*

write a program to check whether a number is odd or even

*/
#include <stdio.h>

int main(void) {
    
    int number;

    printf("Enter The Number: ");
    scanf("%d",&number);
    
    if(number%2==0){
        printf("The Number '%d' is even",number);
    }else{
        
        printf("The Number '%d' is odd",number);
    }
}

