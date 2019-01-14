/*
** EPITECH PROJECT, 2018
** win
** File description:
** if the map is all 0
*/

int test1_X(char *map, int i, int x, int eval)
{
    if (map[i + 1] == '#' && map[i + x + 1] == '#')
        eval = 1;
    if (map[i + 1] == '#' && map[i - x - 1] == '#')
        eval = 1;
    return (eval);
}

int test2_X(char *map, int i, int x, int eval)
{
    if (map[i - 1] == '#' && map[i + x + 1] == '#')
        eval = 1;
    if (map[i - 1] == '#' && map[i - x - 1] == '#')
        eval = 1;
    return (eval);
}

int lose(char *map, int x, int eval)
{
    int i = 0;

    while (map[i] != '\0') {
        if (map[i] == 'X') {
            eval = test1_X(map, i, x, eval);
            eval = test2_X(map, i, x, eval);
        }
        i = i + 1;
    }
    return (eval);
}

int win(char *map, int eval)
{
    int i = 0;

    eval = 0;
    while (map[i] != '\0') {
        if (map[i] == 'O' || map[i] == 'B')
            eval = 2;
        i = i + 1;
    }
    return (eval);
}
