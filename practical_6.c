/*
write a C language program that identify if they're a triangle is equilateral or isosceles or scalene.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int l1, l2, l3;
    
    printf("Enter the three side lengths in order: ");
    scanf("%d %d %d", &l1, &l2, &l3);
    
    if (l1 == l2 && l2 == l3) {
        printf("Equilateral\n");
    } else if (l1 == l2 || l2 == l3 || l1 == l3) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
    
    return 0;
}
