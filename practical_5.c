/*
write a C language program to get the lowest of three numbers.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3;
    
    printf("Enter three numbers in order: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1 < n2) {
        if (n1 < n3) {
            printf("num 1 lowest\n");
        } else {
            printf("num 3 lowest\n");
        }
    } else if (n2 < n3) {
        printf("num 2 lowest\n");
    } else {
        printf("num 3 lowest\n");
    }
    
    return 0;
}
