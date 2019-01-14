/*
** EPITECH PROJECT, 2018
** push_M.c
** File description:
** if M > B et M > X
*/

void push_o_right(char *map, int P, int tap)
{
    if (tap == 67 && map[P + 1] == '0' && map[P] == 'P') {
        if (map[P + 2] == ' ') {
            map[P] = ' ';
            map[P + 1] = 'B';
            map[P + 2] = 'X';
        }
        if (map[P + 2] == 'O') {
            map[P] = ' ';
            map[P + 1] = 'B';
            map[P + 2] = '0';
        }
    }
}

void push_o_left(char *map, int P, int tap)
{
    if (tap == 68 && map[P - 1] == '0' && map[P] == 'P') {
        if (map[P - 2] == ' ') {
            map[P] = ' ';
            map[P - 1] = 'B';
            map[P - 2] = 'X';
        }
        if (map[P - 2] == 'O') {
            map[P] = ' ';
            map[P - 1] = 'B';
            map[P - 2] = '0';
        }
    }    
}

void push_o_up(char *map, int P, int x, int tap)
{
    if (tap == 65 && map[P - x - 1] == '0' && map[P] == 'P') {
        if (map[P - 2*x - 2] == ' ') {
            map[P] = ' ';
            map[P - x - 1] = 'B';
            map[P - 2*x - 2] = 'X';
        }
        if (map[P - 2*x - 2] == 'O') {
            map[P] = ' ';
            map[P - x - 1] = 'B';
            map[P - 2*x - 2] = '0';
        }
    }
}

void push_o_down(char *map, int P, int x, int tap)
{
    if (tap == 66 && map[P + x + 1] == '0' && map[P] == 'P') {
        if (map[P + 2*x + 2] == ' ') {
            map[P] = ' ';
            map[P + x + 1] = 'B';
            map[P + 2*x + 2] = 'X';
        }
        if (map[P + 2*x + 2] == 'O') {
            map[P] = ' ';
            map[P + x + 1] = 'B';
            map[P + 2*x + 2] = '0';
        }
    }
}

void push_o_1(char *map, int P, int x, int tap)
{
    push_o_right(map, P, tap);
    push_o_left(map, P, tap);
    push_o_up(map, P, x, tap);
    push_o_down(map, P, x, tap);
}
