/*
** EPITECH PROJECT, 2022
** resize.c
** File description:
** resize window
*/

#include "../include/my.h"
#include "../include/mysokoban.h"
#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>

void good_map(move_t *move)
{
    int x = 0;
    int y = 0;
    move->nbro = 0;
    move->nbrx = 0;

    while (move->map_copy[x] != NULL) {
        if (move->map_copy[x][y] == 'O')
            move->nbro++;
        if (move->map_copy[x][y] == 'X')
            move->nbrx++;
        if (move->map_copy[x][y] == '\0') {
            x++;
            y = 0;
        }
        y++;
    }
    if (move->nbro != move->nbrx) {
        my_putstr("invalid map");
        exit(1);
    }
}
