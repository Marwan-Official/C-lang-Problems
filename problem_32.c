/*

write a C language program to identify the largest or the maximum and minimum of three numbers which are being inputed by the user. Using a custom function and then display it for the user.

*/

#include <stdio.h>
#include <stdlib.h>

int maximum(int n1, int n2, int n3);
int minimum(int n1, int n2, int n3);

int main(void) {
    
int num1,num2,num3,max,min;

printf("Enter The First Number: ");
scanf("%d",&num1);
printf("Enter The Second Number: ");
scanf("%d",&num2);
printf("Enter The Third Number: ");
scanf("%d",&num3);

max = maximum(num1,num2,num3);
min = minimum(num1,num2,num3);
printf("The Largest Number Is: %d\nThe Smallest Number Is: %d",max,min);
}


int maximum(int n1, int n2, int n3){
    int max;
    if(n1>n2){
        if(n1>n3){
            max=n1;
        }else{
            max=n3;
        }
    }else if(n2>n3){
        max=n2;
    }else{
        max=n3;
    }
    return max;
}

int minimum(int n1, int n2, int n3){
    int min;
    if(n1<n2){
        if(n1<n3){
            min=n1;
        }else{
            min=n3;
        }
    }else if(n2<n3){
        min=n2;
    }else{
        min=n3;
    }
    return min;
}


