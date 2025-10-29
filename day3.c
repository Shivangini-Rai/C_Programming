#include <stdio.h>

int main() {
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    
    return 0;
}
