#include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n+1];  
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] > key)
            break;
    }
    pos = i;

    for (i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = key;
    n++;   
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
