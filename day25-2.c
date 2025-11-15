#include <stdio.h>

int main() {
    int i, j, spaces;

    for (i = 5; i >= 1; i--) {

        for (spaces = 5; spaces > i; spaces--) {
            printf(" ");
        }
    
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
