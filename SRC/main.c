/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main of program Sokoban
*/

#include "../header.h"

char *open_file(char *file)
{
    int fd = open(file, O_RDONLY);
    int size = 10000;
    char *buff = malloc(10000);

    if (fd != -1) {
        read(fd, buff, size);
    } else {
        buff = "error\n";
    }
    return (buff);
}

char *open_map(char *str)
{
    char *map;
    int i = 0;
    int j = 0;
    int size = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    i = i + 1;
    map = malloc(sizeof(char)*i);
    while (j != i) {
        map[j] = str[j];
        j = j + 1;
    }
    return (map);
}

int find_x_map(char *map)
{
    int x = 0;

    while (map[x] != '\n') {
        x = x + 1;
    }
    return(x);
}

int find_y_map(char *map, int x)
{
    int i = 0;
    int y = 0;

    if (map != "error\n") {
        while (map[i] != '\0') {
            if (map[i] == '\n')
                y = y + 1;
            i = i + 1;
        }
    }
    return (y);
}

int main(int argc, char **argv)
{
    char *file;
    char *map;
    int x;
    int y;
    int eval = 2;

    if (argc != 2) {
        eval = 84;
        my_putstr("retry with -h\n");
    }
    else if (argv[1][0] == '-' && argv[1][1] == 'h')
        disp_msg();
    else {
        file = open_file(argv[1]);
        map = open_map(file);
        x = find_x_map(map);
        y = find_y_map(map, x);
        eval = game_loop(map, x, y, eval);
    }
    return (eval);
}
