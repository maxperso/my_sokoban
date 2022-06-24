/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** char
*/

#include <stdlib.h>
#include <stddef.h>

int my_count_word(char *str, char separate)
{
    int cpt = 0;
    int i = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] == '\0' || str[i] == separate)
            cpt++;
    }
    return (cpt + 1);
}

int my_count_char(char *character, char separate, int i)
{
    int cpt = 0;

    while (character[i] != '\0' || character[i] != '\n') {
        if (character[i] == '\0' || character[i] == separate) {
            return (cpt);
        }
        cpt++;
        i++;
    }
    return (cpt);
}

char **my_str_to_word_array(char *str, char separator)
{
    int i = 0;
    int n = 0;
    int cpt = 0;
    int size_word = 0;
    int word_separator = my_count_word(str, separator);
    char **tab = malloc(sizeof(char *) * (word_separator + 1));

    for (cpt; cpt < word_separator; cpt++) {
        size_word = my_count_char(str, separator, i);
        tab[cpt] = malloc(sizeof(char) * (size_word + 1));
        for (n = 0; n < size_word; n++) {
            tab[cpt][n] = str[i];
            i++;
        }
        tab[cpt][n] = '\0';
        i++;
    }
    tab[cpt] = NULL;
    return (tab);
}
