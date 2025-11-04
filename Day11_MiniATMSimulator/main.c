
#include <stdio.h>

int main() {
    int balance = 10000, choice, amount, transactions = 0;
    
     int min_balance = 500;
     int max_transactions = 5;

    printf("Mini ATM Simulator\n");
    printf("Initial Balance: %d\n", balance);

    while (transactions<max_transactions) {
printf("Menu:\n");
printf("1. Check Balance\n");
printf("2. Deposit\n");
printf("3. Withdraw\n");
printf("4. Exit\n");
printf("Enter your choice:\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Your Current Balance: %d\n", balance);
        transactions++;

        }
        
        else if (choice == 2) {
            printf("Enter amount to deposit:\n");
            scanf("%d", &amount);
            if (amount > 0) {

                balance += amount;
                printf("Amount Deposited Successfully!\n");
                transactions++;
            } 
            
            else {
                printf("Invalid deposit amount.\n");
            }
            } 
        
        else if (choice == 3) {
            printf("Enter amount to withdraw:\n");
            scanf("%d", &amount);
            if (amount>0 && balance-amount>=min_balance) {
                balance -= amount;
                printf("Withdrawal Successful\n");
                printf("Remaining Balance: %d\n", balance);
                transactions++;
            } 
            
            else {
                printf("Invalid withdrawal or insufficient balance (min balance: %d required)\n", min_balance);
            }
            } 
        
        else if (choice == 4) {
            printf("Thank you for banking with us\n");
            break;
        }
        
        else {
            printf("Invalid choice. Please try again\n");
        }
        }

    printf("Transaction Summary\n");
    printf("Total Transactions: %d\n", transactions);
    printf("Final Balance: %d\n", balance);
    printf("Session Ended\n");
    return 0;
}
