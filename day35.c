#include <stdio.h>

int main() {
    int arr[100], n;
2
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least two elements are required.\n");
        return 0;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], second = -999999;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > second) {
            second = arr[i];
        }
    }

    if (second == -999999) {
        printf("All elements are equal. No second largest element.\n");
    } else {
        printf("Second largest element: %d\n", second);
    }

    return 0;
}
