#include <stdio.h>

#define MAX 1000

int main() {
    int n, arr[MAX], k;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    
    scanf("%d", &k);

    int dq[MAX];  
    int front = 0, rear = -1;

    
    for (int i = 0; i < k; i++) {
        while (front <= rear && arr[dq[rear]] <= arr[i])
            rear--;        
        dq[++rear] = i;
    }

    for (int i = k; i < n; i++) {
        
        printf("%d ", arr[dq[front]]);

        while (front <= rear && dq[front] <= i - k)
            front++;

      
        while (front <= rear && arr[dq[rear]] <= arr[i])
            rear--;

        dq[++rear] = i;
    }

    printf("%d", arr[dq[front]]);

    return 0;
}
