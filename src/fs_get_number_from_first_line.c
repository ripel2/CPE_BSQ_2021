/*
** EPITECH PROJECT, 2021
** fs_get_number_from_first_line.c
** File description:
** Function that reads the first line of a file and return its
** containing number
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/bsq.h"

int is_digit(char const ch)
{
    for (int c = 0; c < 10; c++)
        if (ch == '0' + c)
            return (1);
    return (0);
}

int fs_get_number_from_first_line(char const *filepath)
{
    int fd = err_open(filepath, O_RDONLY);
    char buffer[BUFFER_SIZE];
    int result = -1;
    int rd;

    clear_buffer(buffer);
    rd = err_read(fd, buffer, BUFFER_SIZE);
    if (is_digit(buffer[0]))
        result = my_getnbr(buffer);
    close(fd);
    return (result);
}
