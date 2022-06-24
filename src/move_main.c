/*
** EPITECH PROJECT, 2022
** move_main.c
** File description:
** move p for sokoban
*/

#include "../include/mysokoban.h"
#include <ncurses.h>
#include <stdlib.h>

void move_main(int ac, char **av, move_t *move, int i)
{
    if (i == KEY_UP)
        move_up(move);
    if (i == KEY_DOWN)
        move_down(move);
    if (i == KEY_LEFT)
        move_left(move);
    if (i == KEY_RIGHT)
        move_right(move);
    if (i == 32)
        my_sokoban(ac, av, move);
    locate_o(move);
    check_win(move);
    check_lose(move);
}
