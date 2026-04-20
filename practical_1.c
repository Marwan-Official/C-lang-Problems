/*

using a c program design a calculator that accepts two numbers from the user then do all operations on them (+,-,*,/)

*/
#include <stdio.h>

int main(void) {
    
    float n1,n2,res;
    float sum,divs,multi,subs;

    printf("Enter The First Number: ");
    scanf("%f",&n1);
    
    printf("Enter The Second Number: ");
    scanf("%f",&n2);
    
    sum = n1 + n2;
    multi = n1 * n2;
    divs = n1 / n2;
    subs = n1 - n2;
    
    printf("Results:\nSummation = %f\nSubtraction = %f\nMultiplication = %f\nDivision = %f\n",sum,subs,multi,divs);
}

