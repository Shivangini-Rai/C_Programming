#include <stdio.h>

int main() {
    for (int i = 0; i < 7; i++) {
        int spaces = (i < 3) ? 3 - i : i - 3;
        int stars = 7 - 2 * spaces;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
