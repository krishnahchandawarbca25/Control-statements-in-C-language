#include <stdio.h>

int main() 
{

    char signal;

    printf("Enter traffic light color (R for Red, Y for Yellow, G for Green): ");

    scanf(" %c", &signal);  // Space before %c to handle newline

    if (signal == 'R' || signal == 'r')

        printf("Red Light - Stop!\n");

    else if (signal == 'Y' || signal == 'y')

        printf("Yellow Light - Get Ready!\n");

    else if (signal == 'G' || signal == 'g')

        printf("Green Light - Go!\n");

    else

        printf("Invalid signal color. Please enter R, Y, or G.\n");
        

    return 0;
}