/*
** EPITECH PROJECT, 2022
** my_sokoban.c
** File description:
** my sokoban
*/

#include "../include/my.h"
#include "../include/mysokoban.h"
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>

void soko(int ac, char **av, move_t *move)
{
    int i = 0;

    while (1) {
        clear();
        sokoban(ac, av, move, i);
        refresh();
    }
}

void sokoban(int ac, char **av, move_t *move, int i)
{
    check_win(move);
    display_map(move);
    i = getch();
    if (i == -1)
        exit(84);
    else
        move_main(ac, av, move, i);
}

int my_sokoban(int ac, char **av, move_t *move)
{
    int i = 0;
    char **tab = my_str_to_word_array(open_maps(av[1], move), '\n');
    move->map = tab;
    char **tab_copy = my_str_to_word_array(open_maps(av[1], move), '\n');
    move->map_copy = tab_copy;
    char **save = my_str_to_word_array(open_maps(av[1], move), '\n');
    move->save = save;
    char **save_copy = my_str_to_word_array(open_maps(av[1], move), '\n');
    move->save_copy = save_copy;

    good_map(move);
    player(move);
    initscr();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    curs_set(FALSE);
    soko(ac, av, move);
    endwin();
    return (0);
}

int main(int ac, char **av)
{
    move_t move;

    error(ac, av);
    my_sokoban(ac, av, &move);
    return (0);
}
