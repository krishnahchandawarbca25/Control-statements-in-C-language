#include <stdio.h>
void main() 
{
    float bill, discount = 0;

    printf("Enter your total bill amount: ₹");
    scanf("%f", &bill);
     

    if (bill > 1000) 
    {
        discount = bill * 0.10;

        printf("You got a 10%% discount of ₹%.2f\nFinal amount to pay: ₹%.2f\n", discount, bill - discount);

    } else 
   
    {
        printf("No discount applied.\nAmount to pay: ₹%.2f\n", bill);
    }

    return 0;
}