/*
** EPITECH PROJECT, 2021
** clear_buffer.c
** File description:
** Function that clears a buffer
*/

#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/mem.h"
#include "../include/bsq.h"

void clear_buffer(char *buffer)
{
    for (int c = 0; c < BUFFER_SIZE; c++)
        buffer[c] = '\0';
}
