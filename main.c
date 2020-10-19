#include <stdio.h>
#include <string.h>

int check(char str[]) {
    int i, length;

    length = strlen(str);

    for (i = 0; i < length; i ++)
        if (str[i] != str[(length - 1) - i]) return 0;
    return 1;
}

int main(void) {
    char str[80];
    char *word;
    int count = 0;

    printf("\n");
    printf("\nEnter a string:\n");

    gets(str);
    word = strtok(str, " ");
    printf("\n");

    while (word != NULL) {
        if (check(word) == 1) {
            printf("\nWord: %s", word);
            printf(" - Palindrome");
            count ++;
        } else {
            printf("\nWord: %s", word);
            printf(" - Not Palindrome");
        }
        word = strtok(NULL, " ");
    }

    printf("\n\nHow many palidromes = %i", count);

    return 0;
}