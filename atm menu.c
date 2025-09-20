#include <stdio.h>

int main() {
    int choice;
    double bal = 1000;

    do {
        printf("1.Check 2.Deposit 3.Withdraw 4.Exit: ");
        scanf("%d", &choice);

        if (choice == 1) printf("Bal: %.2f\n", bal);
        else if (choice == 2) { double amt; scanf("%lf", &amt); bal += amt; }
        else if (choice == 3) { double amt; scanf("%lf", &amt); if (amt <= bal) bal -= amt; else printf("No funds\n"); }

    } while (choice != 4);
    return 0;
}