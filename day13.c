#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    float result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 == 0)
                printf("Error! Division by zero is not allowed.\n");
            else {
                result = (float)num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;

        case '%':
            if (num2 == 0)
                printf("Error! Modulus by zero is not allowed.\n");
            else
                printf("Result = %d\n", num1 % num2);
            break;

        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

