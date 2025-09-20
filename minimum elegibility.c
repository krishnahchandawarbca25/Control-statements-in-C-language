#include <stdio.h>

int main() 
{
    float balance = 5000.0, withdraw;

    printf("Enter amount to withdraw: ₹");

    scanf("%f", &withdraw);

    if (withdraw <= balance) 
    {
        balance -= withdraw;

        printf("Withdrawal successful!\nRemaining balance: ₹%.2f\n", balance);

    } else 
    {
        printf("Insufficient Balance.\n");
    }
    return 0;
}