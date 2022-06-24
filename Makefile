##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC    =		src/my_sokoban.c    \
				src/open_map.c		\
				src/move_main.c		\
				src/movements.c		\
				src/player.c		\
				src/help.c			\
				src/check_game.c	\
				src/resize.c		\

OBJ    =		$(SRC:.c=.o)

LIB    =		-L ./lib

NAME    = 		my_sokoban

MY    =			my.h

INCLUDE    =	-I./include

CFLAGS = 		-g3

all:     $(NAME)

$(NAME):    $(OBJ)
				make -C lib/my
				gcc -o $(NAME) $(OBJ) -g3 $(INCLUDE) $(LIB) -lmy -g -lncurses
				@echo -e "\033[05m\033[44mcompilation done => ${NAME}\033[00m"

clean:
				rm -f $(OBJ)
				rm -f *~

fclean:			clean
				rm -f $(NAME)
				make fclean -C lib/my
				@echo -e "\033[05m\033[44mcleaning done => ${NAME}\033[00m"

re:				fclean all
