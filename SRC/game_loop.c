/*
** EPITECH PROJECT, 2018
** game_loop.c
** File description:
** start of game
*/

#include "../header.h"

int pos_player(char *map)
{
    int i = 0;
    
    while(map[i] != 'P' && map[i] != 'B') {
        i = i + 1;
    }
    return (i);
}

int eval_loop(char *map, int x, int tap)
{
    int P = pos_player(map);
    int eval = 2;

    move_p_1(map, P, x, tap);
    move_p_2(map, P, x, tap);
    push_x_1(map, P, x, tap);
    push_x_2(map, P, x, tap);
    push_o_1(map, P, x, tap);
    push_o_2(map, P, x, tap);
    push_o_3(map, P, x, tap);
    eval = win(map, eval);
    eval = lose(map, x, eval);
    return (eval);
}

void final_disp(int eval)
{
    clear();
    endwin();
    if (eval == 0)
        my_putstr("GAME WIN !!!\n");
    else if (eval == 1)
        my_putstr("GAME OVER...\n");
    else
        my_putstr("GAME LEFT.\n");
}

void init(void)
{
    initscr();
    noecho();
    mvprintw(LINES/2, (COLS/2 - 5) , "MY_SOKOBAN");
}

int game_loop(char *map, int x, int y, int eval)
{
    WINDOW *boite;
    int test = 0;
    int tap = 0;

    if (map != "error\n") {
        init();
        while(test == 0) {
            boite = subwin(stdscr, y+1, x+1, ((LINES-y)/2), ((COLS-x)/2));
            tap = getch();
            clear();
            eval = eval_loop(map, x, tap);
            mvwprintw(boite, 0, 0, map);
            sizewin(x, y);
            wrefresh(boite);
            if(tap == 'q' || eval == 0 || eval == 1) {
                clear();
                final_disp(eval);
                return(eval);
            }
        }
    }
}
