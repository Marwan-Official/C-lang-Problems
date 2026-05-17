/*
write a C language program to check if the input is an alphabet or number or a special character
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char check;
    
    printf("Enter something to check: ");
    scanf("%c", &check);
    
    if ((check >= 'a' && check <= 'z') || (check >= 'A' && check <= 'Z')) {
        printf("Alphabet\n");
    } else if (check >= '0' && check <= '9') {
        printf("number\n");
    } else {
        printf("special\n");
    }
    
    return 0;
}
