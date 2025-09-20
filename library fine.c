#include <stdio.h>

int main() 
{
    int books, d1, m1, y1, d2, m2, y2, fine;

    printf("Enter number of books returned: ");
    scanf("%d", &books);

    for (int i = 0; i < books; i++) 
    {
        printf("\nBook %d:\n", i + 1);

        printf("Enter return date (DD MM YYYY): ");

        scanf("%d %d %d", &d1, &m1, &y1);

        printf("Enter due date (DD MM YYYY): ");

        scanf("%d %d %d", &d2, &m2, &y2);

        if (y1 > y2)

            fine = 10000;

        else if (y1 == y2 && m1 > m2)

            fine = 500 * (m1 - m2);

        else if (y1 == y2 && m1 == m2 && d1 > d2)

            fine = 15 * (d1 - d2);
        else
        
            fine = 0;

        printf("Fine: ₹%d\n", fine);
    }

    return 0;
}