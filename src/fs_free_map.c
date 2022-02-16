/*
** EPITECH PROJECT, 2021
** fs_free_map.c
** File description:
** Function to free the map
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/mem.h"
#include "../include/bsq.h"

void fs_free_map(char **map, int map_lines, int map_width)
{
    for (int c = 0; c < map_lines; c++)
        free(map[c]);
    free(map);
}
