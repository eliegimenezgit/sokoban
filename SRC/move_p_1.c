/*
** EPITECH PROJECT, 2018
** move.c
** File description:
** move P if is possible
*/

void move_right(char *map, int P, int tap)
{
    if (tap == 67 && map[P + 1] == ' ' && map[P] == 'P') {
        map[P] = ' ';
        map[P + 1] = 'P';
    }
    if (tap == 67 && map[P + 1] == 'O' && map[P] == 'P') {
        map[P] = ' ';
        map[P + 1] = 'B';
    }
    if (tap == 67 && map[P + 1] == ' ' && map[P] == 'B') {
        map[P] = 'O';
        map[P + 1] = 'P';
    }
}

void move_left(char *map, int P, int tap)
{
    if (tap == 68 && map[P - 1] == ' ' && map[P] == 'P') {
        map[P] = ' ';
        map[P - 1] = 'P';
    }
    if (tap == 68 && map[P - 1] == 'O' && map[P] == 'P') {
        map[P] = ' ';
        map[P - 1] = 'B';
    }
    if (tap == 68 && map[P - 1] == ' ' && map[P] == 'B') {
        map[P] = 'O';
        map[P - 1] = 'P';
    }
}

void move_up(char *map, int P, int x, int tap)
{
    if (tap == 65 && map[P - x - 1] == ' ' && map[P] == 'P') {
        map[P] = ' ';
        map[P - x - 1] = 'P';
    }
    if (tap == 65 && map[P - x - 1] == 'O' && map[P] == 'P') {
        map[P] = ' ';
        map[P - x - 1] = 'B';
    }
    if (tap == 65 && map[P - x - 1] == ' ' && map[P] == 'B') {
        map[P] = 'O';
        map[P - x - 1] = 'P';
    }
}

void move_down(char *map, int P, int x, int tap)
{
    if (tap == 66 && map[P + x + 1] == ' ' && map[P] == 'P') {
        map[P] = ' ';
        map[P + x + 1] = 'P';
    }
    if (tap == 66 && map[P + x + 1] == 'O' && map[P] == 'P') {
        map[P] = ' ';
        map[P + x + 1] = 'B';
    }
    if (tap == 66 && map[P + x + 1] == ' ' && map[P] == 'B') {
        map[P] = 'O';
        map[P + x + 1] = 'P';
    }
}

void move_p_1(char *map, int P, int x, int tap)
{
    move_right(map, P, tap);
    move_left(map, P, tap);
    move_up(map, P, x, tap);
    move_down(map, P, x, tap);
}
