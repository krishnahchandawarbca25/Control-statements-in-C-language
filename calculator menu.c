#include <stdio.h>

int main() {
    int ch;
    double a, b;

    do {
        printf("1.+ 2.- 3.* 4./ 5.Exit: ");
        scanf("%d", &ch);

        if (ch >= 1 && ch <= 4) {
            scanf("%lf%lf", &a, &b);
            if (ch == 1) printf("= %.2f\n", a + b);
            else if (ch == 2) printf("= %.2f\n", a - b);
            else if (ch == 3) printf("= %.2f\n", a * b);
            else if (ch == 4) b != 0 ? printf("= %.2f\n", a / b) : printf("Err\n");
        }
    } while (ch != 5);
    return 0;
}