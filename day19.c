#include <stdio.h>

int main() {
    int a, b, temp_a, temp_b, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp_a = a;
    temp_b = b;

    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }

    gcd = temp_a;
    lcm = (a * b) / gcd;

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
