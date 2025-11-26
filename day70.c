#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    if (len > 0 && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for (int i = 1; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    printf("%s\n", str);

    return 0;
}
