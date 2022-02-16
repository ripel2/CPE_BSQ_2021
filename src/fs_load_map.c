/*
** EPITECH PROJECT, 2021
** fs_load_map.c
** File description:
** Function that reads the map in the memory
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/bsq.h"
#include "../include/mem.h"

void exit_bad_char(void)
{
    my_putstr_err(BAD_CHARACTER_MSG);
    exit(BAD_CHARACTER_EXIT);
}

void exit_bad_width(void)
{
    my_putstr_err(BAD_WIDTH_MSG);
    exit(BAD_WIDTH_EXIT);
}

void check_characters(char *str, int strlen)
{
    int exit_pr = 0;

    for (int c = 0; c < strlen; c++)
        if (str[c] != '.' && str[c] != 'o')
            exit_bad_char();
}

char **fs_load_map(char const *filepath, int map_lines, int map_width)
{
    char **map = mem_alloc_2d_array(map_lines, map_width);
    int fd = err_open(filepath, O_RDONLY);
    char *temp;
    char ch;

    err_read(fd, &ch, 1);
    while (ch != '\n')
        err_read(fd, &ch, 1);
    for (int i = 0; i < map_lines; i++) {
        temp = err_malloc(sizeof(char) * map_width + 1);
        err_read(fd, temp, map_width);
        check_characters(temp, map_width);
        map[i] = temp;
        err_read(fd, &ch, 1);
        if (ch != '\n')
            exit_bad_width();
    }
    close(fd);
    return (map);
}
