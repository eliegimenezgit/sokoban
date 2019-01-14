/*
** EPITECH PROJECT, 2018
** push_X.c
** File description:
** push X to ' ' ou 'O'
*/

void push_right(char *map, int P, int tap)
{
    if (tap == 67 && map[P + 1] == 'X' && map[P] == 'P') {
        if (map[P + 2] == ' ') {
            map[P] = ' ';
            map[P + 1] = 'P';
            map[P + 2] = 'X';
        }
        if (map[P + 2] == 'O') {
            map[P] = ' ';
            map[P + 1] = 'P';
            map[P + 2] = '0';
        }
    }
}

void push_left(char *map, int P, int tap)
{
    if (tap == 68 && map[P - 1] == 'X' && map[P] == 'P') {
        if (map[P - 2] == ' ') {
            map[P] = ' ';
            map[P - 1] = 'P';
            map[P - 2] = 'X';
        }
        if (map[P - 2] == 'O') {
            map[P] = ' ';
            map[P - 1] = 'P';
            map[P - 2] = '0';
        }
    }
}

void push_up(char *map, int P, int x, int tap)
{
    if (tap == 65 && map[P - x - 1] == 'X' && map[P] == 'P') {
        if (map[P - 2*x - 2] == ' ') {
            map[P] = ' ';
            map[P - x - 1] = 'P';
            map[P - 2*x - 2] = 'X';
        }
        if (map[P - 2*x - 2] == 'O') {
            map[P] = ' ';
            map[P - x - 1] = 'P';
            map[P - 2*x - 2] = '0';
        }
    }
}

void push_down(char *map, int P, int x, int tap)
{
    if (tap == 66 && map[P + x + 1] == 'X' && map[P] == 'P') {
        if (map[P + 2*x + 2] == ' ') {
            map[P] = ' ';
            map[P + x + 1] = 'P';
            map[P + 2*x + 2] = 'X';
        }
        if (map[P + 2*x + 2] == 'O') {
            map[P] = ' ';
            map[P + x + 1] = 'P';
            map[P + 2*x + 2] = '0';
        }
    }    
}

void push_x_1(char *map, int P, int x, int tap)
{
    push_right(map, P, tap);
    push_left(map, P, tap);
    push_up(map, P, x, tap);
    push_down(map, P, x, tap);
}
