/*
** EPITECH PROJECT, 2021
** bsq.c
** File description:
** Function to search for the BSQ and print the map
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/mem.h"
#include "../include/bsq.h"
#include "bonus.h"

int get_lowest_int(int n1, int n2)
{
    return (n1 > n2 ? n2 : n1);
}

int check_row_sq(char **map, int row, int map_width, int size)
{
    int next_obs_c = 0;

    for (int c = 0; c < map_width; c++) {
        next_obs_c = is_square_of_size(map, row, c, size);
        if (next_obs_c == -1)
            return (c);
        c += next_obs_c;
    }
    return (-1);
}

int *get_square(char **map, int map_lines, int map_width, int size)
{
    int col = -1;
    int *res = malloc(sizeof(int) * 2);

    res[0] = -1;
    res[1] = -1;
    for (int r = 0; r < map_lines - size + 1; r++) {
        col = check_row_sq(map, r, map_width - size + 1, size);
        if (col != -1) {
            res[0] = r;
            res[1] = col;
            return (res);
        }
    }
    return (res);
}

void add_square(char **map, int row, int col, int size)
{
    for (int r = row; r < row + size; r++) {
        for (int c = col; c < col + size; c++) {
            map[r][c] = 'x';
        }
    }
}

void bsq(char **map, int map_lines, int map_width)
{
    int start = 1;
    int end = get_lowest_int(map_lines, map_width);
    int *res = malloc(sizeof(int) * 2);

    res[0] = -1;
    res[1] = -1;
    while (end > start + 1) {
        res = get_square(map, map_lines, map_width, (start + end) / 2);
        if (res[0] != -1)
            start = (start + end) / 2;
        else
            end = (start + end) / 2;
    }
    res = get_square(map, map_lines, map_width, end);
    if (res[0] == -1) {
        end = start;
        res = get_square(map, map_lines, map_width, end);
    }
    (res[0] != -1) ? add_square(map, res[0], res[1], end) : 0;
    print_bonus(map, map_lines, map_width, res);
}
