/*

write a C language program to write the summation of even numbers from 0 to 100

*/
#include <stdio.h>

int main(void) {
   
   int sum=0,i;
   
   for(i=1; i<=100; i++){
       if(i%2==0){
           sum+=i;
       } 
       
   }
   printf("The Final Result Is: %d",sum);
   
}

