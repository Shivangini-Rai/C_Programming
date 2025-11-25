#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
       
        if (leftSum == totalSum - leftSum - arr[i]) {
            return i; 
        }
        leftSum += arr[i];
    }

    return -1; 
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, n);
    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}
