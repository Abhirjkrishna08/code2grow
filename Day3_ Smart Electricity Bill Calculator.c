#include<stdio.h>
 int main(){
    float units,total,fmc=50.00;
    printf("enter the number of units consumed:\n");
    scanf("%f",&units);
     if(units>=0 && units<=100){
        total=units*3.00;
        printf("%f\n",total);
     }
     else if(units>100 && units<=200){
        total=units*4.50;
        printf("%f\n",total);
     }
     else if(units>200 && units<=300){
        total=units*6.00;
        printf("%f\n",total);
     }
     else if(units>300){
        total=units*8.00;
        printf("%f \n",total);

     }
      total=total+fmc;
      printf("total bill after fmc= %f\n",total);
      return 0;
 }
     