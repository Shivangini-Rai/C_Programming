#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0;  

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0) {
        digit = temp % 10;

        if (digit % 2 != 0) {     
            product *= digit;
            hasOdd = 1;
        }

        temp /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits of %d = %d\n", num, product);
    else
        printf("No odd digits found in %d\n", num);

    return 0;
}
