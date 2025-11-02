#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    
   
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    
    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }
    
    discriminant = b * b - 4 * a * c;
    
    
    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        
        root1 = -b / (2 * a);
        printf("One real root: %.2f\n", root1);
    } else {
       
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Two complex roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
    
    return 0;
}
