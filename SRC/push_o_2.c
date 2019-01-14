/*
** EPITECH PROJECT, 2018
** move O to O
** File description:
** push M2.c
*/

void push_right_o_2(char *map, int P, int tap)
{
    if (tap == 67 && map[P + 1] == 'O' && map[P] == 'B') {
        if (map[P + 2] == ' ') {
            map[P] = 'O';
            map[P + 1] = 'B';
            map[P + 2] = 'X';
        }
        if (map[P + 2] == 'O') {
            map[P] = 'O';
            map[P + 1] = 'B';
            map[P + 2] = '0';
        }
    }
}

void push_left_o_2(char *map, int P, int tap)
{
    if (tap == 68 && map[P - 1] == 'O' && map[P] == 'B') {
        if (map[P - 2] == ' ') {
            map[P] = 'O';
            map[P - 1] = 'B';
            map[P - 2] = 'X';
        }
        if (map[P - 2] == 'O') {
            map[P] = 'O';
            map[P - 1] = 'B';
            map[P - 2] = '0';
        }
    }
}

void push_up_o_2(char *map, int P, int x, int tap)
{
    if (tap == 65 && map[P - x - 1] == 'O' && map[P] == 'B') {
        if (map[P - 2*x - 2] == ' ') {
            map[P] = 'O';
            map[P - x - 1] = 'B';
            map[P - 2*x - 2] = 'X';
        }
        if (map[P - 2*x - 2] == 'O') {
            map[P] = 'O';
            map[P - x - 1] = 'B';
            map[P - 2*x - 2] = '0';
        }
    }
}

void push_down_o_2(char *map, int P, int x, int tap)
{
    if (tap == 66 && map[P + x + 1] == 'O' && map[P] == 'B') {
        if (map[P + 2*x + 2] == ' ') {
            map[P] = 'O';
            map[P + x + 1] = 'B';
            map[P + 2*x + 2] = 'X';
        }
        if (map[P + 2*x + 2] == 'O') {
            map[P] = 'O';
            map[P + x + 1] = 'B';
            map[P + 2*x + 2] = '0';
        }
    }
}

void push_o_2(char *map, int P, int x, int tap)
{
    push_right_o_2(map, P, tap);
    push_left_o_2(map, P, tap);
    push_up_o_2(map, P, x, tap);
    push_down_o_2(map, P, x, tap);
}
