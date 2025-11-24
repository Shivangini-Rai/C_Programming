#include <stdio.h>

int main() {
    int arr[100], n, k, temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    k = k % n;

    for (int i = 0; i < n; i++
