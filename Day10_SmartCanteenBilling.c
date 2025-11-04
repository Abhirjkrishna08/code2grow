#include <stdio.h>
int main(){
    int total_customer,items,item_code,quantity,total=0,j;
    float final_bill=0,discount,total_revenue=0;
    char name;
    printf("Enter the total number of customers\n");
    scanf("%d",&total_customer);
    for(int i=1;i<=total_customer;i++){
        float total_bill=0;
        printf("Customer %d\n",i);
      printf("Enter the name of the customer\n");
      scanf(" %s",&name);
      printf("----MENU----\n");
      printf("1. Sandwich-₹80\n" " 2.Burger-₹120\n" "3.Pizza slice-₹150\n" "4.Coffee-₹60\n" "5.Juice-₹50\n");
      printf("Enter Number of items\n");
      scanf("%d",&items);
      for(j=1;j<=items;j++){
       float Rs=0,bill=0;
      printf("Enter the item_code\n");
      scanf("%d",&item_code);
      printf("Enter the quantity\n");
      scanf("%d",&quantity);

      switch (item_code){
          case 1:
              printf("Sandwich-Rs80\n");
              Rs=80;
              break;
          case 2:
              printf("Burger-Rs120\n");
              Rs=120;
              break;
          case 3:
              printf("Pizza slice-Rs150\n");
              Rs=150;
              break;
          case 4:
              printf("Coffee-Rs60\n");
              Rs=60;
              break;
          case 5:
              printf("Juice-Rs50\n");
              Rs=50;
              break;
          default:
              printf("Invalid item code\n");
              break;
      }
      bill+=Rs*quantity;
    

      printf(" bill of item %d: Rs%.2f\n",i,bill);
      total_bill+=bill;
      printf("total_bill=%.2f\n",total_bill);


      
      }
      if(total_bill>500){
        printf("discount applied 10%%=");
        discount=(0.1)*total_bill;
        printf("%f\n",discount);
        total_bill=total_bill-discount;
       
      }
       printf("Final bill for customer %d: Rs%.2f\n",i,total_bill);
     total_revenue+=total_bill;
    }
    printf("------Canteen Summery------\n");
    printf("total customers=%d\n",total_customer);
printf("total revenue=%.2f\n",total_revenue);


    return 0;
}


     
        

