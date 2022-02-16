/*
** EPITECH PROJECT, 2021
** print_map.c
** File description:
** Function that prints the map
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/bsq.h"
#include "../include/mem.h"

void print_coloured_x(void)
{
    my_putstr("\033[1;32mx\033[0m");
}

void print_map_bonus(char **map, int map_lines, int map_width)
{
    char newline = '\n';

    for (int c = 0; c < map_lines; c++) {
        for (int d = 0; d < map_width; d++)
            map[c][d] == 'x' ? print_coloured_x() : my_putchar(map[c][d]);
        my_putchar('\n');
    }
}

int get_square_size(char **map, int *res)
{
    int size = 0;

    for (int c = res[1]; map[res[0]][c] == 'x'; c++)
        size++;
    return (size);
}

void print_bonus(char **map, int map_lines, int map_width, int *res)
{
    print_map_bonus(map, map_lines, map_width);
    if (res[0] != -1) {
        my_putstr("\033[1;32mSquare of size ");
        my_put_nbr(get_square_size(map, res));
        my_putstr(" found at coordinates (");
        my_put_nbr(res[0]);
        my_putstr(", ");
        my_put_nbr(res[1]);
        my_putstr(")\n\033[0m");
    } else {
        my_putstr("\033[1;31mNo square found on the map\033[0m\n");
    }
}
