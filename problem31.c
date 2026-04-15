/*print a heart for a certain width with square grid using stars*/
#include <stdio.h>
#define Width 50
#define Height Width
double heart(double x,double y,int width){//the equiation of a heart is (x^2+y^2-1)^3 -x^2 *y^3=0
    x=(x-5*width/10)/(3*width/10);//normlizing for the reverse y + 0,0 origin diffrence
    y=(5*width/10-y)/(3*width/10);
    double f1=x*x+y*y-1;//x^2 +y^2 -1
    return f1*f1*f1-x*x*y*y*y;//(x^2+y^2-1)^3 -x^2 *y^3
}

int main(void){
    for(int i=0;i<Width;i++){
        for(int j=0;j<Height;j++){
            double x=j+0.5;//center of the pixel or character 
            double y=i+0.5;//same
            // if(heart(x,y,Width)<=0){
            //     printf("*");
            // }
            // else{
            //     printf(" ");
            // }
            printf("%c",'*'-(heart(x,y,Width)>0)*('*'-' '));//simply if its false it prints a star if not it print star -star + space = space , you can replace with the above if else
        }
        printf("\n");
    }
    return 0;
}//this exe needs hight resolution preferably 50+