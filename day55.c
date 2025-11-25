#include <stdio.h>

int findCandidate(int nums[], int n) {
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == candidate)
            count++;
        else
            count--;

        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }

    return candidate;
}

int isMajority(int nums[], int n, int candidate) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }
    if (count > n / 2)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int candidate = findCandidate(nums, n);

    if (isMajority(nums, n, candidate))
        printf("Majority element: %d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
