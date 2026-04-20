/*

write a C language program to write the summation of even numbers from 0 to 100

*/
#include <stdio.h>

int main(void) {
   
   int fac=1,n,i;
   
   printf("Enter The Number: ");
   scanf("%d",&n);
   
   for(i=1; i<=n; i++){
           fac=fac*i;
       
   }
   printf("The Final Result Is: %d",fac);
   
}

