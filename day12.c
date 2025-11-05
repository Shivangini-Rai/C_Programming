#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time.\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%.2f\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = ₹%.2f\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine = ₹%.2f\n", fine);
    }
    else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}
