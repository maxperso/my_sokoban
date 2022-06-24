/*
** EPITECH PROJECT, 2022
** my_count_word.c
** File description:
** count word for a separator
*/

int my_count_word(char *str, char separate)
{
    int cpt = 0;
    int i = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] == '\0' || str[i] == separate)
            cpt++;
    }
    return (cpt);
}
