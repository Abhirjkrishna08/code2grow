#include <stdio.h>

int main() {
    int n,highest_bill = 0;
    float total_revenue = 0, avg_feedback = 0;

    printf("Enter number of customers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int items;
        float bill = 0;
        printf("\nCustomer %d\n", i);
        printf("Enter number of items: ");
        scanf("%d", &items);
        for (int j = 1; j <=items; j++) {
            float price;
            int quantity;
            printf("Enter price of item %d: ", j);
            scanf("%f", &price);
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            bill += price * quantity;
        }
        float gst = bill * 0.05;
        bill += gst;
        printf("Customer %d Bill: %.2f\n", i, bill);
        total_revenue += bill;
        if (bill > highest_bill)
          highest_bill = bill;
        int feedback;
        do {
            printf("Enter feedback (1-5):");
            scanf("%d", &feedback);
            if (feedback<1 || feedback>5) {
            printf("Invalid feedback! Please enter a rating between 1 and 5\n");
            }
        } 
        while (feedback<1 || feedback>5);
        avg_feedback += feedback;
    }
    printf(" Restaurant Bill Summary \n");
    printf("Total Revenue Today: %.2f\n", total_revenue);
    printf("Average Feedback Rating: %.2f\n", (float)avg_feedback / n);
    printf("Highest Bill Amount: %d.00\n", highest_bill);
 
    return 0;
}
    