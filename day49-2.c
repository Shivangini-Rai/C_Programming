#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    char surname[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int lastSpace = -1;

    for (int i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    for (int i = 0; i <= lastSpace; i++) {
        if (i == 0 && name[i] != ' ')
            printf("%c.", toupper(name[i]));
        else if (name[i] == ' ' && name[i + 1] != '\0' && i + 1 < len)
            printf("%c.", toupper(name[i + 1]));
    }

    if (lastSpace != -1)
        printf(" %s", &name[lastSpace + 1]);

    printf("\n");

    return 0;
}
