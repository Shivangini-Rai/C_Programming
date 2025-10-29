#include <stdio.h>

int main() {
    double length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    
    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);
    double area = length * breadth;
    double perimeter = 2 * (length + breadth);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    
    return 0;
}
