#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;   

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;       
    int middle = num - first * pow(10, digits) - last;
    middle /= 10;

    int swapped = last * pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}
