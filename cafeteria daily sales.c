#include <stdio.h>

int main() 
{
    float sales[30];  // Array to store daily sales

    // Input sales
    
    for (int day = 0; day < 30; day++) 

    {
        printf("Enter sales for Day %d: ₹", day + 1);
        scanf("%f", &sales[day]);
    }

    // Display sales
    printf("\n--- Cafeteria Sales Report ---\n");

    for (int day = 0; day < 30; day++) 

    {
        printf("Day %d: ₹%.2f\n", day + 1, sales[day]);
    }

    return 0;
}