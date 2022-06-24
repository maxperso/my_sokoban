/*
** EPITECH PROJECT, 2022
** sokoban.h
** File description:
** sokoban
*/

#ifndef mysokoban_h_
    #define mysokoban_h_

typedef struct move {
    int a;
    int w;
    int x;
    int y;
    int xx;
    int yy;
    char *str;
    char **map;
    char **map_copy;
    char **save;
    char **save_copy;
    int ya;
    int xa;
    int xaa;
    int yaa;
    int h;
    int j;
    int si;
    int nbro;
    int nbrx;
}move_t;

    void help(void);
    void error(int ac, char **av);
    void display_map(move_t *move);
    void sokoban(int ac, char **av, move_t *move, int i);
    int main(int ac, char **av);
    int my_sokoban(int ac, char **av, move_t *move);

    void player(move_t *move);
    void find_player(move_t *move, int i, int a);
    void locate_o(move_t *move);

    void size_maps(move_t *move, char *buffer, int i);
    void size_map(move_t *move, char *buffer);
    char *open_maps(char *path, move_t *move);

    void move_main(int ac, char **av, move_t *move, int i);
    void move_up(move_t *move);
    void move_down(move_t *move);
    void move_left(move_t *move);
    void move_right(move_t *move);

    void check_win(move_t *move);
    void check_lose(move_t *move);
    void check_if_u_win(move_t *move);
    void check_if_u_lose(move_t *move);

    void window_is_good(move_t *move);
    void check_window(move_t *move);
    void check_xy(move_t *move);
    void good_map(move_t *move);

#endif
