/*
** EPITECH PROJECT, 2018
** header.h
** File description:
** header file
*/

#ifndef MY_HEADER_
#define MY_HEADER_

#include <curses.h>
#include <ncurses.h>

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_getnbr(char const *str);
void my_putchar(char const c);
void my_put_nbr(int nbr);
void my_putstr(char *str);
int my_strlen(char const *str);

int main(int argc, char **argv);

void disp_msg(void);

int game_loop(char *map, int x, int y, int eval);
void sizewin(int x, int y);

void move_p_1(char *map, int P, int x, int tap);
void move_p_2(char *map, int P, int x, int tap);
void push_x_1(char *map, int P, int x, int tap);
void push_x_2(char *map, int P, int x, int tap);
void push_o_1(char *map, int P, int x, int tap);
void push_o_2(char *map, int P, int x, int tap);
void push_o_3(char *map, int P, int x, int tap);

int win(char *map, int eval);
int lose(char *map, int x, int eval);

#endif /*MY_HEADER_*/
