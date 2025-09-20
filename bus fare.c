#include <stdio.h>
#include <string.h>

int main() 
{
    char destination[50];

    char ticketType[10];

    int fare;

    printf("Enter destination: ");
    scanf("%s", destination);

    printf("One-way or return? ");
    scanf("%s", ticketType);

    if (strcmp(ticketType, "one-way") == 0)
        fare = 350;
        
    else
        fare = 600;

    printf("Ticket to %s (%s) costs ₹%d.\n", destination, ticketType, fare);

    return 0;
}