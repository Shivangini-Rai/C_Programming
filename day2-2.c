#include <stdio.h>

#define PI 3.14159

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    
    return 0;
}
