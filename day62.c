#include <stdio.h>
#define MAX 1000

int main() {
    int n, arr[MAX];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSoFar = arr[0];   
    int currentSum = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        if (currentSum > maxSoFar)
            maxSoFar = currentSum;
    }

    printf("%d", maxSoFar);

    return 0;
}
