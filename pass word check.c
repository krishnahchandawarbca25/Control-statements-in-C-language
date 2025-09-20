#include <stdio.h>
#include <string.h>

int main() 
{
    char pass[20];
    int tries = 0;

    do 
    {
        printf("Password: ");
        scanf("%s", pass);
        tries++;
    } while (strcmp(pass, "Harish123") != 0 && tries < 3);

    printf(strcmp(pass, "Harish123") == 0 ? "Welcome\n" : "Blocked\n");
    return 0;
}