#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[100], word[100];
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, j = 0;
    while (1) {
        
        j = 0;
        while (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            word[j++] = sentence[i++];
        }
        word[j] = '\0';

        if (j > maxLen) {
            maxLen = j;
            strcpy(longest, word);
        }

        if (sentence[i] == '\0' || sentence[i] == '\n')
            break;
        i++;  
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
