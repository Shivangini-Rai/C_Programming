#include <stdio.h>

int main() {
    double side1, side2, side3;

    printf("Enter three side lengths: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);
    
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
      
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral triangle\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Isosceles triangle\n");
        } else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("Invalid triangle\n");
    }
    
    return 0;
}
