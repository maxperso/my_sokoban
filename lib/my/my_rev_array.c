/*
** EPITECH PROJECT, 2021
** my_rev_array.c
** File description:
** myrevarray
*/

#include <stdio.h>
#include <stdlib.h>

char **my_rev_array(char **array)
{
    int i = 0;
    int y = 0;
    char **tmp;

    for (i; array[i] != NULL; i++);
    tmp = malloc(sizeof(char *) * (i + 1));
    for (i; i != 0; i--) {
        tmp[y] = array[i - 1];
        y++;
    }
    tmp[y] = NULL;
    return (tmp);
}
