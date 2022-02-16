/*
** EPITECH PROJECT, 2021
** fs_get_first_line_width.c
** File description:
** Function that reads the first line of a file and return its
** containing number
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/bsq.h"

int fs_get_map_width(char const *filepath)
{
    int fd = err_open(filepath, O_RDONLY);
    char buffer[100000];
    int c = 0;
    int width = 0;

    for (int i = 0; i < 100000; i++)
        buffer[i] = '\0';
    read(fd, buffer, 100000);
    for (; buffer[c] != '\n' && buffer[c] != '\0'; c++);
    if (buffer[c] == '\n') {
        c++;
        while (buffer[c] != '\n' && buffer[c] != '\0') {
            c++;
            width++;
        }
    }
    close(fd);
    for (int i = 0; i < 100000; i++)
        buffer[i] = '\0';
    return (width);
}
