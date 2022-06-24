/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** libs
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int start = 0;
    int end = my_strlen(str) - 1;
    char temp;

    while (start <= end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return (str);
}
