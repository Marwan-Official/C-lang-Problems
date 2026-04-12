/*

    1
   232
  34543
 4567554
567898765

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i,j,k,c;
 c=0;
    for(i=1; i<=5; i++){
        for(k=1; k<=5-i; k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d",++c);
        }

        for(j=2*i-1; j>i; j--){
            printf("%d",--c);
        }
        
        printf("\n");
    }
    return 0;
}