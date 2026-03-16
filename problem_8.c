/*
write a program in C language to check vowel or consonant 
hint: vowel(a,e,i,o,u) consonant(the rest)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{

    char letter;
    
    printf("Enter The Letter: ");
    scanf("%c", &letter);
    
    //if-elseif-else method
    /*if(letter == 'a') printf("The Letter %c Is Vowel", letter);
    else if(letter == 'a') printf("The Letter %c Is Vowel", letter);
    else if(letter == 'a') printf("The Letter %c Is Vowel", letter);
    else if(letter == 'a') printf("The Letter %c Is Vowel", letter);
    else if(letter == 'a') printf("The Letter %c Is Vowel", letter);
    else printf("The Letter %c Is Consonant", letter);*/
    
    //switch method
    switch(letter)
    {
        case 'a':
        printf("The Letter %c Is Vowel", letter);
        break;
        
        case 'e':
        printf("The Letter %c Is Vowel", letter);
        break;
        
        case 'i':
        printf("The Letter %c Is Vowel", letter);
        break;
        
        case 'o':
        printf("The Letter %c Is Vowel", letter);
        break;
        
        case 'u':
        printf("The Letter %c Is Vowel", letter);
        break;
        
        default:
        printf("The Letter %c Is Consonant", letter);
        break;
    }

}