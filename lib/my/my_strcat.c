/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** libs
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = my_strlen(dest);

    while (src[i] != '\0') {
        dest[i + j] = src[i];
        i = i + 1;
    }
    dest[i + j] = '\0';
    return (dest);
}
