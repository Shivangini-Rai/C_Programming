#include <stdio.h>

#define MAX 1000

int main() {
    int n, arr[MAX];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = n * (n + 1) / 2;

    int arraySum = 0;
    for (int i = 0; i < n; i++)
        arraySum += arr[i];

    int missing = totalSum - arraySum;

    printf("%d", missing);

    return 0;
}
