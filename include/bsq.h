/*
** EPITECH PROJECT, 2021
** bsq.h
** File description:
** Header that contains the prototypes of all the
** functions used for the BSQ project (aside already declared ones)
*/

#include <stdlib.h>

#ifndef BSQ_H_
    #define BSQ_H_

    #define MALLOC_EXIT 84
    #define MALLOC_ERR_MSG "Failed to malloc\n"
    #define READ_EXIT 84
    #define READ_ERR_MSG "Failed to read\n"
    #define OPEN_EXIT 84
    #define BAD_CHARACTER_EXIT 84
    #define BAD_CHARACTER_MSG "Bad character in map\n"
    #define BAD_WIDTH_EXIT 84
    #define BAD_WIDTH_MSG "Bad map width\n"

void clear_buffer(char *buffer);
void print_map(char **map, int map_lines, int map_width);
int is_square_of_size(char **map, int row, int col, int square_size);

void *err_malloc(size_t size);
ssize_t err_read(int fd, void *buf, size_t count);
int err_open(const char *pathname, int flags);

void bsq(char **map, int map_lines, int map_width);

#endif
