/*

write a program to check whether a number is odd or even

*/
#include <stdio.h>

int main(){
    
    int number;

    printf("Enter The Number: ");
    scanf("%d",&number);
    
    if(number%2==0){
        printf("\nThe Number '%d' is even",number);
    }else{
        printf("\nThe Number '%d' is odd",number);
    }
    
    return(0);
}

