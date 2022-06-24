/*
** EPITECH PROJECT, 2022
** check_move.c
** File description:
** check if u win or lose
*/

#include "../include/mysokoban.h"
#include "../include/my.h"
#include <stdlib.h>
#include <ncurses.h>

void check_if_u_win(move_t *move)
{
    if (move->w == 0 && move->map[move->x][move->y] !=
    move->map[move->xa][move->ya]) {
        display_map(move);
        endwin();
        my_putstr("You won :)");
        exit(0);
    }
}

void check_win(move_t *move)
{
    int x = 0;
    int y = 0;
    move->w = 0;

    locate_o(move);
    while (move->map[x] != NULL) {
        if (move->map[x][y] == 'O') {
            move->w++;
            move->xa = x;
            move->ya = y;
        }
        if (move->save[x][y] == '\0') {
            y = 0;
            x++;
        }
        y++;
    }
    check_if_u_win(move);
}

void check_if_u_lose(move_t *move)
{
    if ((move->save_copy[move->xaa - 1][move->yaa] == '#' &&
    move->save_copy[move->xaa][move->yaa + 1] == '#') ||
    (move->save_copy[move->xaa + 1][move->yaa] == '#' &&
    move->save_copy[move->xaa][move->yaa - 1] == '#') ||
    (move->save_copy[move->xaa - 1][move->yaa] == '#' &&
    move->save_copy[move->xaa][move->yaa - 1] == '#') ||
    (move->save_copy[move->xaa + 1][move->yaa] == '#' &&
    move->save_copy[move->xaa][move->yaa + 1] == '#')) {
        display_map(move);
        endwin();
        my_putstr("You lose :(");
        exit(1);
    }
}

void check_lose(move_t *move)
{
    int x = 0;
    int y = 0;

    while (move->map[x] != NULL) {
        if (move->map[x][y] == 'X') {
            move->xaa = x;
            move->yaa = y;
        }
        if (move->save_copy[x][y] == '\0') {
            x++;
            y = 0;
        }
        y++;
    }
    check_if_u_lose(move);
}
