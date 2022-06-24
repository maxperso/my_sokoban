/*
** EPITECH PROJECT, 2021
** my_strolwcase.c
** File description:
** libs
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    return str;
}
