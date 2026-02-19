#include <stdio.h>
#include <string.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {
    int choice = 0;
    float balance = 0.0f;


    printf("--welcome to the bank");

    do
    {
        printf("\nselect an option:\n");
        printf("1. check balance.\n");
        printf("2. deposit money.\n");
        printf("3. withdraw money.\n");
        printf("4. exit.\n");
        printf("enter yout choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            printf("thank you for using the bank\n");
            break;
        default:
            printf("\nInvalid Choice!\n");
            break;
        }
    } while (choice != 4);
    

    return 0;
}

void checkBalance(float balance) {
    printf("\nYour current balance is: $%.2f\n", balance);

 }
float deposit() {
    float amount = 0.0f;

    printf("\nenter amount to deposit: $");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("invalid amount\n");
        return 0.0f;
    } else {
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }
    
   
        
}
float withdraw(float balance) {
    float amount = 0.0f;
    printf("\nenter amount to withdraw: $");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
        return 0.0f;
    } else if (amount > balance)
    {
        printf("Insufficient funds! your balance $%.2f\n", balance);
        return 0.0f;
    } else {
        printf("successfully witdrew $%.2f\n", amount);
        return amount;
    }
    
    
    return 0.0f;
}
