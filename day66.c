#include <stdio.h>

#define MAX 1000

int main() {
    int n, nums[MAX], target;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    scanf("%d", &target);

    int i, j;
    int found = 0;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("-1 -1");

    return 0;
}
