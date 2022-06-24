/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** strdup
*/

#include "../../include/my.h"
#include <stdio.h>
#include <stdlib.h>

char *my_strdup(const char *str)
{
    char *new_str;
    new_str = NULL;
    new_str = malloc(sizeof(char) * (my_strlen(str) + 1));

    my_strcpy(new_str, str);
    return (new_str);
}
