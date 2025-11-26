#include <stdio.h>
#define MAX 100000

int main() {
    int n, arr[MAX];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int visited[MAX] = {0};

    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            printf("%d", arr[i]); 
            return 0;
        }
        visited[arr[i]] = 1;
    }

    printf("-1");
    return 0;
}
