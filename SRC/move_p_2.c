/*
** EPITECH PROJECT, 2018
** move_P2.c
** File description:
** for 
*/

void move_right_p_2(char *map, int P, int tap)
{
    if (tap == 67 && map[P + 1] == 'O' && map[P] == 'B') {
        map[P] = 'O';
        map[P + 1] = 'B';
    }
}

void move_left_p_2(char *map, int P, int tap)
{
    if (tap == 68 && map[P - 1] == 'O' && map[P] == 'B') {
        map[P] = 'O';
        map[P - 1] = 'B';
    }
}

void move_up_p_2(char *map, int P, int x, int tap)
{
    if (tap == 65 && map[P - x - 1] == 'O' && map[P] == 'B') {
        map[P] = 'O';
        map[P - x - 1] = 'B';
    }
}

void move_down_p_2(char *map, int P, int x, int tap)
{
    if (tap == 66 && map[P + x + 1] == 'O' && map[P] == 'B') {
        map[P] = 'O';
        map[P + x + 1] = 'B';
    }
}

void move_p_2(char *map, int P, int x, int tap)
{
    move_right_p_2(map, P, tap);
    move_left_p_2(map, P, tap);
    move_up_p_2(map, P, x, tap);
    move_down_p_2(map, P, x, tap);
}
