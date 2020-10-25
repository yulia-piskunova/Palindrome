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
    char str[80]; // инициализация переменных
    char *word;
    int count = 0;

    printf("\nEnter a string:\n"); // вывод текста

    gets(str); //ввод строки
    word = strtok(str, " "); // разбиваю на слова
    printf("\n");

    while (word != NULL) {
        if (check(word) == 1) { // проверка на палиндром
            printf("\nWord: %s", word); // вывод текста и слова
            printf(" - Palindrome"); // вывод текста
            count ++; // увеличение на 1
        } else {
            printf("\nWord: %s", word); //вывод текста и слова
            printf(" - Not Palindrome"); // вывод текста
        }
        word = strtok(NULL, " ");
    }

    printf("\n\nHow many palidromes = %i", count); // вывод текста и кол-во палиндромов

    return 0;
}