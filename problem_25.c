/*

    1
   121
  12321
 1234321
123454321

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i,j,k;

    for(i=1; i<=5; i++){
        for(k=1; k<=5-i; k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        for(j=2*i-1; j>i; j--){
            printf("%d",j-i);
        }
        printf("\n");
    }
    return 0;
}