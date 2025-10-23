#include <stdio.h>
int main() {
    float mealCost, tax, tip, totalBill, eachShare, myPay, friend2Pay, friend3Pay;
     printf("Enter meal cost");
    scanf("%f", &mealCost);
     tax = 0.05 * mealCost;       
    tip = 0.10 * mealCost;       
    totalBill = mealCost + tax + tip; 
     myPay =  (totalBill / 2);
    friend2Pay = (totalBill / 2);
    friend3Pay = 0.0;
    printf("%f\n", totalBill);
    printf("mypay %f\n", myPay);
    printf("Friend 2 %f\n", friend2Pay);
    printf("Friend 3 %f\n", friend3Pay);
       return 0;
}