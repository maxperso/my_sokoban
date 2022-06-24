/*
** EPITECH PROJECT, 2022
** player.c
** File description:
** function for find player
*/

#include "../include/mysokoban.h"
#include <stdlib.h>

void locate_o(move_t *move)
{
    int x = 0;
    int y = 0;

    while (move->map[x] != NULL) {
        if (move->map_copy[x][y] == 'O' && move->map[x][y] == ' ') {
            move->map[x][y] = 'O';
        }
        if (move->map_copy[x][y] == '\0') {
            x += 1;
            y = 0;
        }
        y += 1;
    }
}

void find_player(move_t *move, int i, int a)
{
    if (move->map_copy[i][a] == 'P') {
        move->y = a;
        move->x = i;
    }
}

void player(move_t *move)
{
    int a = 0;
    int i = 0;

    while (i != move->a) {
        while (move->map_copy[i][a] != '\0') {
            find_player(move, i, a);
            a++;
        }
        i++;
        a = 0;
    }
    move->xx = move->x;
    move->yy = move->y;
}
