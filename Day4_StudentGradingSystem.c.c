#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,attendance,perc;
    printf("enter the marks\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    perc=(m1+m2+m3+m4+m5)/5.0;
    printf("%f\n",perc);
    
    printf("attendence\n");
    scanf("%f",&attendance);
    if (attendance<75){
    printf("fail due to less attendance\n");
    }
    if (perc<75 && attendance<90){
    printf("fail due to percentage");
    }

    if (perc>= 90 && attendance>=75){
            printf("grade A+ Excellent\n");
    }
    
            else if(perc>=80 &&perc<=89 && attendance>=75){
            printf("grade A,verygood\n");
            }
           else  if(perc>=70 &perc<=79 && attendance>=75){
            printf("grade B,good\n");
            }
           else  if(perc>= 60 &perc<=69 && attendance>=75){
            printf("grade C,Average\n");
            }
           else  if (perc >=50 &&perc<=59 && attendance>=75){
            printf("grade D,pass\n") ;
            }
             else if (perc>=45 &&perc<=49 && attendance>=90){
             
                   perc+=5;
                   printf("D, pass");
                   
              if  (perc>=50){
                printf("grade D,Pass\n");
              }
        }
           return 0;
            }

           