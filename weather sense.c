#include <stdio.h>

int main() 
{
    int temperature;

    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temperature);

    if (temperature >= 35)
        printf("It's hot! Wear light clothes \n");


    else if (temperature >= 25)
        printf("Warm weather. t-shirt and shorts will be comfortable.\n");


    else if (temperature >= 15)
        printf("Mild weather. light jacket should be fine.\n");


    else if (temperature >= 5)
        printf("Cold weather. Wear a sweater or coat.\n");


    else
        printf("Freezing! wear thermal and a heavy coat.\n");
        

    return 0;
}