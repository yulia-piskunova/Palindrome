#include <stdio.h>
#include <string.h>

int check(char str[]) {

}

int main(void) {
    char str[80];
    char *word;
    int count = 0;

    printf("\n");
    printf("\nVvedite stroku:\n");

    gets(str);
    word = strtok(str, " ");
    printf("\n");

    while (word != NULL) {
        if (check(word) == 1) {
            printf("\nSlovo: %s", word);
            printf(" - Palindrome");
            count ++;
        } else {
            printf("\nSlovo: %s", word);
            printf(" - Not Palindrome");
        }
        word = strtok(NULL, " ");
    }

    printf("\n\nKolichestvo palindromov = %i", count);

    return 0;
}