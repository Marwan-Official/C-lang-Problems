/*

write A C language program that counts the number of students that got A and B and C and f in a class by entering them one by one until entering x then the program terminates and the prints the number of students for each grade by using do while

*/
#include <stdio.h>

int main(void) {
   
   int countA=0,countB=0,countC=0,countF=0;
   char grade;
   
         
   do{
       printf("Enter The Grade: ");
       scanf(" %c",&grade);
       
       if(grade == 'A' || grade == 'a'){
       countA++;
       }
       else if(grade == 'B' || grade == 'b'){
       countB++;
       }
       
       else if(grade == 'C' || grade == 'c'){
       countC++;
       }
       
       else if(grade == 'F' || grade == 'f'){
       countF++;
       }
       
   }while(grade != 'X' && grade != 'x');
   
   printf("The Number Of 'A' Grade is: %d\nThe Number Of 'B' Grade is: %d\nThe Number Of 'C' Grade is: %d\nThe Number Of 'F' Grade is: %d",countA,countB,countC,countF);
   
   
}

