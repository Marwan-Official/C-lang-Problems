/*
write a C language program that would print a pyramid for the user depends on his inputs which is the number of the rows and if he would specify if we pyramid is normal as it is or is it reversed using custom function and then display the pyramid for the user to see as his inputs say
*/


#include <stdio.h>
#include <stdlib.h>

void pyramid(int rows, int reversed);

int main(void) {
    int num,rev;

    printf("Enter The Number Of Rows: ");
    scanf("%d",&num);

    printf("How Do You Want To Print The Pyramid?\n1. Normal(from the bottom to the top) - if so type '1'\n2. Reversed(from the top to the bottom) - if so type '0'\nEnter The Decision: ");
    scanf("%d",&rev);

    pyramid(num,rev);

}

void pyramid(int rows,int reversed) {
    int i, j, s;
    
    printf("\n");
    
    if(reversed!=0) {

        for(i=1; i<=rows; i++) {

            for(s=1; s<=rows-i; s++) {
                printf(" ");
            }

            for(j=1; j<=2*i-1; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        for(i=1; i<=rows; i++) {

            for(s=1; s<=i-1; s++) {
                printf(" ");
            }

            for(j=1; j<=2*(rows-i)+1; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}