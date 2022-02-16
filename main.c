/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** Main entry point for the BSQ project
*/

#include "include/my.h"
#include "include/fs.h"
#include "include/mem.h"
#include "include/bsq.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void exit_no_lines(void)
{
    exit(84);
}

int exec_bsq(char *filename)
{
    char **map;
    int map_lines;
    int map_width;

    close(err_open(filename, O_RDONLY));
    map_lines = fs_get_number_from_first_line(filename);
    if (map_lines == -1)
        exit_no_lines();
    map_width = fs_get_map_width(filename);
    map = fs_load_map(filename, map_lines, map_width);
    bsq(map, map_lines, map_width);
    fs_free_map(map, map_lines, map_width);
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2 &&
    !(my_strlen(av[1]) == 2 && av[1][0] == '-' && av[1][1] == 'h')) {
        return (exec_bsq(av[1]));
    } else
        my_putstr("USAGE: ./bsq <filename>\n");
    return (0);
}
