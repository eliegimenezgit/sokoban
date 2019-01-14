/*
** EPITECH PROJECT, 2018
** sizewin.c
** File description:
** disp msg of resize
*/

#include "../header.h"

void sizewin(int x, int y)
{
    if (LINES < y+3 || COLS < x+3) {
        clear();
        printw("window too small...");
    }
}
