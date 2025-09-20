
#include <stdio.h>
int choice;

printf("Choose your dish:\n1. Pizza\n2. Burger\n3. Pasta\n");

scanf("%d", &choice);


switch (choice) 
{

    case 1: printf("You ordered Pizza.\n"); break;
    case 2: printf("You ordered Burger.\n"); break;
    case 3: printf("You ordered Pasta.\n"); break;
    default: printf("Invalid choice.\n");
    
}