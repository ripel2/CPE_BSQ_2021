/*
** EPITECH PROJECT, 2021
** is_square_of_size.c
** File description:
** Check if a given point in the map is a square. Returns the col of
** the last obstacle if one is found, and returns -1 if no obstacles is found
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/mem.h"
#include "../include/bsq.h"

int check_row(char **map, int r, int col, int square_size)
{
    for (int c = col; c < (col + square_size); c++)
        if (map[r][c] != '.')
            return (c - col);
    return (-1);
}

int is_square_of_size(char **map, int row, int col, int square_size)
{
    int obs_col;

    for (int r = row; r < (row + square_size); r++) {
        obs_col = check_row(map, r, col, square_size);
        if (obs_col != -1)
            return (obs_col);
    }
    return (-1);
}
