/*
** EPITECH PROJECT, 2022
** my_count_letter.c
** File description:
** Count letter and character without spaces
*/

#include "../../include/my.h"

int my_count_letter(char *str)
{
    int letter;

    letter = my_strlen(str) - my_count_word(str, ' ');
    return (letter);
}
