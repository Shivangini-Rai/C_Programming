#include <stdio.h>

int main() {
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    if (num2 != 0) {
        double quotient = num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Quotient: Division by zero is not allowed.\n");
    }
    
    return 0;
}
