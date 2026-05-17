/*
write a C language program to get the largest of three numbers.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3;
    
    printf("Enter three numbers in order: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1 > n2) {
        if (n1 > n3) {
            printf("num 1 biggest\n");
        } else {
            printf("num 3 biggest\n");
        }
    } else if (n2 > n3) {
        printf("num 2 biggest\n");
    } else {
        printf("num 3 biggest\n");
    }
    
    return 0;
}
