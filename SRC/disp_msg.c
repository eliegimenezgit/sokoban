/*
** EPITECH PROJECT, 2018
** disp_msg when -h
** File description:
** msg explain
*/

#include "../header.h"

void disp_msg(void)
{
    my_putstr("./my_sokoban -h\n\nUSAGE\n./my_sokoban map");
    my_putstr("\n\nDESCRIPTION\nmap file representing the ");
    my_putstr("warehouse map, containing ‘#’ for walls, ");
    my_putstr("‘P’ for the player, ‘X’ for boxes and ‘O’");
    my_putstr("for storage locations.\n");
}
