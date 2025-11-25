#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            
            return mid;
        } else if (arr[mid] < x) {
          
            low = mid + 1;
        } else {
           
            result = mid;
            high = mid - 1; 
        }
    }

    return result;
}

int main() {
    int n, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int ceilIndex = findCeil(arr, n, x);
    printf("Index of ceil of %d: %d\n", x, ceilIndex);

    return 0;
}
