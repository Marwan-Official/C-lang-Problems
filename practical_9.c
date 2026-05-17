/*
Write a c program to print a day of week name according to number user enters.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int day;
    
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    
    switch (day) {
        case 1:
            printf("Today is Saturday\n");
            break;
        case 2:
            printf("Today is Sunday\n");
            break;
        case 3:
            printf("Today is Monday\n");
            break;
        case 4:
            printf("Today is Tuesday\n");
            break;
        case 5:
            printf("Today is Wednesday\n");
            break;
        case 6:
            printf("Today is Thursday\n");
            break;
        case 7:
            printf("Today is Friday\n");
            break;
        default:
            printf("incorrect day number\n");
    }
    
    return 0;
}
