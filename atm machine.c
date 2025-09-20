
#include <stdio.h>
int option;

printf("ATM Options:\n1. Withdraw\n2. Deposit\n3. Check Balance\n");

scanf("%d", &option);

switch (option) 
{
    case 1: printf("Processing withdrawal...\n"); break;

    case 2: printf("Processing deposit...\n"); break;

    case 3: printf("Checking balance...\n"); break;
    
    default: printf("Invalid option.\n");
}