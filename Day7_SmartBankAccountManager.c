#include<stdio.h>
 int main(){
     int choice,pin;
     float balance=10000.0,amount,bonus,service_charge=5.0;
     printf("enter your pin:\n");
     scanf("%d", &pin);
     if(pin>9999){
        printf("invalid pin");
        return 0;
     }

     do{
         printf("choose an option:\n");
         printf("1.check balance\n");
         printf("2.deposit money\n");
         printf("3.withdraw money\n");
         printf("4.exit\n");
         scanf(" %d", &choice);
          
          if(choice==1){
            printf("your  balance is %f\n", balance);
          }
           if(choice==2){
            printf("enter the amount to deposit\n");
            scanf("%f",&amount);
            if(amount>0){
                bonus=0;
                if(amount>25000){
                    bonus=amount*0.01;
                    printf("bonus of %f is added \n", bonus);
                }
                balance=balance+amount+bonus;
                balance=balance-service_charge;
                printf("service charge %.0f is applies\n", service_charge);
                printf("your balance  is %f\n", balance);
            }
        }
            if(choice==3){
                printf("enter the amount to withdraw:\n");
                scanf("%f", &amount);
                if(amount<0 || amount>balance){
                     printf("invalid amount or insufficient balance \n");
                     printf("please try again later");
                }
                
                if(amount>0 && amount<=balance){
                    balance=balance-amount;
                    balance=balance-service_charge;
                    printf("service charge %.0f is applied\n", service_charge);
                    printf("your current balance is %f\n", balance);
                }
                
                    
                    
                }
               if(choice==4){
                printf("thank you for banking with us\n"); 
                return 0;
                
            }
         } 
         while(pin>1000 && pin<9999);

 return 0;

    }       
                
             
      