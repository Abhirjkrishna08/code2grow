#include <stdio.h>
int main(){
   
  int datausage,student_status,corporate_status,base_Cost,Extra_Data,daily_data,extra_cost;
   float total_cost,final_bill,discount;
   char plan;
   printf("data\n");
   scanf("%d",&datausage);
   printf("student_status: '1' for yes / '0'for no \n");
   scanf("%d",&student_status);
   printf("corporate_status: '1'for yes /'0' for no\n");
   scanf("%d",&corporate_status);
if (datausage<30){ 
    printf("base_cost=299\n");
    printf("plan=silver\n");
}
else if (datausage>=30 && datausage<=60){
        
   base_Cost=499;
        Extra_Data=datausage-60;
        final_bill=base_Cost-(base_Cost*0.15);
        printf("base_cost is %d\n",base_Cost);
        printf("plan=gold\n");
        printf("Extra_Data is %d\n",Extra_Data);
        printf("final_bill is %f\n",final_bill);
}
else if (datausage>=60 && datausage<=100){
    base_Cost=799;
    Extra_Data=datausage-60;
    extra_cost=Extra_Data*30;
    total_cost=extra_cost+base_Cost;
    
    final_bill=total_cost-(total_cost*10/100);
    printf("base_cost is %d\n",base_Cost);
    printf("plan=platinum\n");
    printf("Extra_Data is %d\n",Extra_Data);
    printf("total_cost is %f\n",total_cost);
    printf("final_bill is %f\n",final_bill);

}
  if (datausage>100){
  printf("Excessive Usage, Plan Not Allowed");
  }
        return 0;





































}

