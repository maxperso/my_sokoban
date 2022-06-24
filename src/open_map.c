/*
** EPITECH PROJECT, 2022
** open_map.c
** File description:
** open maps with buffer
*/

#include "../include/mysokoban.h"
#include "../include/my.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ncurses.h>

void display_map(move_t *move)
{
    for (int i = 0; move->map[i] != NULL; i++)
        printw("%s\n", move->map[i]);
}

void size_maps(move_t *move, char *buffer, int i)
{
    int y = 0;
    int z = 0;

    move->map[i] = NULL;
    for (int r = 0; buffer[r] != '\0'; r += 1) {
        if (buffer[r] == '\n' || buffer[r] == '\0') {
            move->map[y][z] = '\0';
            z = 0;
            y++;
            r++;
        }
        move->map[y][z] = buffer[r];
        z += 1;
    }
    move->a = i;
}

void size_map(move_t *move, char *buffer)
{
    int i = 0;
    int z = 0;
    int y = 0;

    while (buffer[i] != '\n') {
        i += 1;
    }
    while (buffer[z] != '\0') {
        if (buffer[z] == '\n')
            y++;
        z++;
    }
    z = 0;
    y++;
    move->map = malloc(sizeof(char *) * (y + 1));
    while (z != (y + 1)) {
        move->map[z] = malloc(sizeof(char) * 250);
        z++;
    }
    size_maps(move, buffer, y);
}

char *open_maps(char *path, move_t *move)
{
    int size = 0;
    int file_descriptor = open(path, O_RDONLY);
    char *buffer = NULL;
    struct stat s;

    if (file_descriptor == -1) {
        help();
        exit(84);
    }
    stat(path, &s);
    size = s.st_size;
    buffer = malloc(sizeof(char) * (size + 2));
    read(file_descriptor, buffer, size);
    buffer[s.st_size] = '\0';
    size_map(move, buffer);
    return (buffer);
}
