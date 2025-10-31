#include <stdio.h>
int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time)
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
