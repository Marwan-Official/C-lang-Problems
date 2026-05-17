/*
Write a c program to check if character vowel or not.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The character is a vowel\n");
            break;
        default:
            printf("The character is not a vowel\n");
    }
    
    return 0;
}
