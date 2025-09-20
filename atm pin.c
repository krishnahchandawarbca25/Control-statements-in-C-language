#include <stdio.h>
#include <string.h>

int main() 
{
    char correctPIN[] = "1234";

    char enteredPIN[10];

    int attempts = 0;


    while (attempts < 3) 
    {
        printf("Enter your PIN: ");

        scanf("%s", enteredPIN);

        if (strcmp(enteredPIN, correctPIN) == 0) 
        {

            printf("Access granted.\n");
            break;

        } 
        else 
        {
            printf("Incorrect PIN.\n");
            attempts++;
        }
    }

    if (attempts == 3) 
    {
        printf("Card blocked due to multiple incorrect attempts.\n");
    }

    return 0;
}