/*

depends on user input

  *
 ***
*****

*/


#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i, j, n, s;
    
    printf("Enter The Number Of The Rows: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
    
        for(s=1; s<=n-i; s++){
            printf(" ");
        }
    
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}