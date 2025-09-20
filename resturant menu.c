#include <stdio.h>

int main() 
{    int menu;

    printf("Welcome to the hotel\n");

    printf("Here is your Menu:\n");

    printf("1. South Indian Thali\n");

    printf("2. North Indian Thali\n");

    printf("3. Chinese Combo\n");

    printf("4. Continental Platter\n");

    printf("Enter your choice (1-4): ");

    scanf("%d", &menu);

    if (menu == 1)

        printf("You chose South Indian Thali. Enjoy dosa, sambar, and rice!\n");

    else if (menu == 2)

        printf("You chose North Indian Thali. Enjoy roti, paneer, and dal!\n");

    else if (menu == 3)

        printf("You chose Chinese Combo. Enjoy noodles and Manchurian!\n");

    else if (menu == 4)

        printf("You chose Continental Platter. Enjoy pasta and grilled veggies!\n");

    else

        printf("Invalid choice. Please select a valid menu item.\n");

    return 0;
}