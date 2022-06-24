/*
** EPITECH PROJECT, 2022
** movements.c
** File description:
** movements
*/

#include "../include/mysokoban.h"
#include <ncurses.h>

void move_up(move_t *move)
{
    if (move->map[move->x - 1][move->y] == ' ' ||
    move->map[move->x - 1][move->y] == 'O') {
        move->map[move->x][move->y] = ' ';
        move->x -= 1;
        move->map[move->x][move->y] = 'P';
    }
    if (move->map[move->x - 1][move->y] == 'X'
    && move->map[move->x - 2][move->y] != '#' &&
    move->map[move->x - 2][move->y] != 'X') {
        move->map[move->x][move->y] = ' ';
        move->x -= 1;
        move->map[move->x][move->y] = 'P';
        move->map[move->x - 1][move->y] = 'X';
    }
}

void move_down(move_t *move)
{
    if (move->map[move->x + 1][move->y] == ' ' ||
    move->map[move->x + 1][move->y] == 'O') {
        move->map[move->x][move->y] = ' ';
        move->x += 1;
        move->map[move->x][move->y] = 'P';
    }
    if (move->map[move->x + 1][move->y] == 'X'
    && move->map[move->x + 2][move->y] != '#' &&
    move->map[move->x + 2][move->y] != 'X') {
        move->map[move->x][move->y] = ' ';
        move->x += 1;
        move->map[move->x][move->y] = 'P';
        move->map[move->x + 1][move->y] = 'X';
    }
}

void move_left(move_t *move)
{
    if (move->map[move->x][move->y - 1] == ' ' ||
    move->map[move->x][move->y - 1] == 'O') {
        move->map[move->x][move->y] = ' ';
        move->y -= 1;
        move->map[move->x][move->y] = 'P';
    }
    if (move->map[move->x][move->y - 1] == 'X'
    && move->map[move->x][move->y - 2] != '#' &&
    move->map[move->x][move->y - 2] != 'X') {
        move->map[move->x][move->y] = ' ';
        move->y -= 1;
        move->map[move->x][move->y] = 'P';
        move->map[move->x][move->y - 1] = 'X';
    }
}

void move_right(move_t *move)
{
    if (move->map[move->x][move->y + 1] == ' ' ||
    move->map[move->x][move->y + 1] == 'O') {
        move->map[move->x][move->y] = ' ';
        move->y += 1;
        move->map[move->x][move->y] = 'P';
    }
    if (move->map[move->x][move->y + 1] == 'X'
    && move->map[move->x][move->y + 2] != '#' &&
    move->map[move->x][move->y + 2] != 'X') {
        move->map[move->x][move->y] = ' ';
        move->y += 1;
        move->map[move->x][move->y] = 'P';
        move->map[move->x][move->y + 1] = 'X';
    }
}
