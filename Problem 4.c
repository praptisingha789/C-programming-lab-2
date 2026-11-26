#include <stdio.h>

int checkBalance(float balance, float amount)
{
    if(balance >= amount)
        return 1;
    else
        return 0;
}

int validateWithdrawal(float amount)
{
    if(amount > 0 && (int)amount % 500 == 0)
        return 1;
    else
        return 0;
}

float withdrawMoney(float balance, float amount)
{
    return balance - amount;
}

void displayTransaction(char status[], float amount,
                        float balance)
{
    printf("\nTransaction Status : %s\n", status);
    printf("Amount Withdrawn   : Tk %.0f\n", amount);
    printf("Remaining Balance  : Tk %.0f\n", balance);
}

int main()
{
    float balance, amount, remaining;
    char status[30];

    printf("Enter account balance: ");
    scanf("%f", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    remaining = balance;

    if(validateWithdrawal(amount))
    {
        if(checkBalance(balance, amount))
        {
            remaining = withdrawMoney(balance, amount);
            sprintf(status, "Successful");
        }
        else
        {
            sprintf(status, "Insufficient Balance");
        }
    }
    else
    {
        sprintf(status, "Invalid Withdrawal");
    }

    displayTransaction(status, amount, remaining);

    return 0;
}
