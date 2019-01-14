/*
** EPITECH PROJECT, 2018
** push_X2.c
** File description:
** push X if P is on O
*/

void push_right_2(char *map, int P, int tap)
{
    if (tap == 67 && map[P + 1] == 'X' && map[P] == 'B') {
        if (map[P + 2] == ' ') {
            map[P] = 'O';
            map[P + 1] = 'P';
            map[P + 2] = 'X';
        }
        if (map[P + 2] == 'O') {
            map[P] = 'O';
            map[P + 1] = 'P';
            map[P + 2] = '0';
        }
    }
}

void push_left_2(char *map, int P, int tap)
{
    if (tap == 68 && map[P - 1] == 'X' && map[P] == 'B') {
        if (map[P - 2] == ' ') {
            map[P] = 'O';
            map[P - 1] = 'P';
            map[P - 2] = 'X';
        }
        if (map[P - 2] == 'O') {
            map[P] = 'O';
            map[P - 1] = 'P';
            map[P - 2] = '0';
        }
    }
}

void push_up_2(char *map, int P, int x, int tap)
{
    if (tap == 65 && map[P - x - 1] == 'X' && map[P] == 'B') {
        if (map[P - 2*x - 2] == ' ') {
            map[P] = 'O';
            map[P - x - 1] = 'P';
            map[P - 2*x - 2] = 'X';
        }
        if (map[P - 2*x - 2] == 'O') {
            map[P] = 'O';
            map[P - x - 1] = 'P';
            map[P - 2*x - 2] = '0';
        }
    }
}

void push_down_2(char *map, int P, int x, int tap)
{
    if (tap == 66 && map[P + x + 1] == 'X' && map[P] == 'B') {
        if (map[P + 2*x + 2] == ' ') {
            map[P] = 'O';
            map[P + x + 1] = 'P';
            map[P + 2*x + 2] = 'X';
        }
        if (map[P + 2*x + 2] == 'O') {
            map[P] = 'O';
            map[P + x + 1] = 'P';
            map[P + 2*x + 2] = '0';
        }
    }    
}

void push_x_2(char *map, int P, int x, int tap)
{
    push_right_2(map, P, tap);
    push_left_2(map, P, tap);
    push_up_2(map, P, x, tap);
    push_down_2(map, P, x, tap);
}
