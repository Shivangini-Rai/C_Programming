#include <stdio.h>

#define MAX 1000

int main() {
    int n, arr[MAX], k;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    int negIndex[MAX];   
    int front = 0, rear = -1;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            negIndex[++rear] = i;
    }

    for (int i = k; i < n; i++) {

        if (front <= rear)
            printf("%d ", arr[negIndex[front]]);
        else
            printf("0 ");

        if (front <= rear && negIndex[front] <= i - k)
            front++;

        if (arr[i] < 0)
            negIndex[++rear] = i;
    }

    if (front <= rear)
        printf("%d", arr[negIndex[front]]);
    else
        printf("0");

    return 0;
}
