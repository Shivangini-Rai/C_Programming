#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    int start = 0, end = 0;
    int len = strlen(sentence);

    while (end <= len) {
        if (sentence[end] == ' ' || sentence[end] == '\0') {
            reverseWord(sentence, start, end - 1);
            start = end + 1;
        }
        end++;
    }

    printf("Sentence after reversing each word:\n%s\n", sentence);

    return 0;
}
