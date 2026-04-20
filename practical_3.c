/*

write a C language program when the user input the student degree print out the student grade for them
100:80 excellent
80:65 very good
65:50 good
else fail

*/
#include <stdio.h>

int main(void) {
    
    int degree;

    printf("Enter The Degree: ");
    scanf("%d",&degree);
    
    if(degree <= 100 && degree >80){
        printf("Grade: Excellent");
    }
    else if(degree <= 80 && degree >65){
        printf("Grade: Very Good");
    }
    else if(degree <= 65 && degree >50){
        printf("Grade: Good");
    }
    else printf("Grade: Failed");
}

