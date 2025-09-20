#include <stdio.h>

int main() 
{
    int totalSeats = 40;

    for (int seat = 1; seat <= totalSeats; seat++) 
    {
        printf("Seat %d: Available\n", seat);
    }

    return 0;
}