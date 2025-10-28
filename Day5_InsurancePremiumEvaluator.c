#include <stdio.h>
int main(){
    int age,health,premium;
    char gender;
    printf("age\n");
    scanf("%d",&age);
    printf("gender");
    scanf(" %c",&gender);
   printf("health :'1' for healthy,'0' for unhealthy");
   scanf("%d",&health);
   if(health==1){
      printf("healthy");

   }
else if (health==0){
   printf("unhealthy");
}

 if (health==1){
    if(age<25){

    premium=5000;
}
    else if ( age>=25 && age<=40){
    premium=7000;
 }
 else if (age>=41 && age<=60){
    premium=10000;
 }
 else if(age>60){
    premium=15000;
 }

 }  
else if (health==0){
    if(age<25){

    premium=0;
}
    else if ( age>=25 && age<=40){
    premium= 9500;
 }
 else if (age>=41 && age<=60){
    premium=13000;
 }
 else if(age>60){
    printf("Not Eligible for Insurance");  
    premium=0;
}

}

printf("premium is %d\n",premium);
if (gender=='f'){
   premium-=premium*10/100;
    printf("premium is %d\n",premium);
}
return 0;
}