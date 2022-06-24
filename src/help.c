/*
** EPITECH PROJECT, 2022
** help.c
** File description:
** help -h
*/

#include "../include/my.h"
#include <stdlib.h>

void help(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map  file representing the warehouse map, ");
    my_putstr("containing '#' for walls, \n");
    my_putstr("          'P' for the player, 'X' for boxes and ");
    my_putstr("'O' for storage locations.\n");
}

void error(int ac, char **av)
{
    if (ac != 2) {
        help();
        exit(84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        help();
        exit(84);
    }
}
