#include <stdio.h>

#define MAX 1000

int main() {
    int n, arr[MAX], k;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
       
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    if (k > 0 && k <= n)
        printf("%d", arr[k - 1]);
    else
        printf("-1");

    return 0;
}
