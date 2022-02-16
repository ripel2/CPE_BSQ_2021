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

void print_map(char **map, int map_lines, int map_width)
{
    char newline = '\n';

    for (int c = 0; c < map_lines; c++) {
        write(1, map[c], map_width);
        write(1, &newline, 1);
    }
}
