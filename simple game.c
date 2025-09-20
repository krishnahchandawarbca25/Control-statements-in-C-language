#include <stdio.h>

int main() 
{
    int target, guess;

    srand(time(0));
    target = rand() % 100 + 1;

    do {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);

        if (guess < target)
            printf("Too low!\n");
        else if (guess > target)
            printf("Too high!\n");
        else
            printf("Correct! You guessed it.\n");

    } while (guess != target);

    return 0;
}