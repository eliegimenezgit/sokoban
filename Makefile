##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## file of compilation
##

SRC = ./SRC/main.c               \
      ./SRC/disp_msg.c           \
      ./SRC/game_loop.c          \
      ./SRC/move_p_1.c           \
      ./SRC/move_p_2.c           \
      ./SRC/push_x_1.c           \
      ./SRC/push_x_2.c           \
      ./SRC/push_o_1.c           \
      ./SRC/push_o_2.c           \
      ./SRC/push_o_3.c           \
      ./SRC/win_lose.c           \
      ./SRC/sizewin.c            \
      ./my_put/my_getnbr.c       \
      ./my_put/my_putchar.c      \
      ./my_put/my_put_nbr.c      \
      ./my_put/my_putstr.c       \
      ./my_put/my_strlen.c     


OBJ = $(SRC:.c=.o)

NAME = my_sokoban

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(SRC) -I. -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
