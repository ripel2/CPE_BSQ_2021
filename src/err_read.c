/*
** EPITECH PROJECT, 2021
** err_read.c
** File description:
** Read function that exits if failed
*/

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/mem.h"
#include "../include/bsq.h"

ssize_t err_read(int fd, void *buf, size_t count)
{
    ssize_t read_res = read(fd, buf, count);

    if (read_res >= 0)
        return (read_res);
    my_putstr_err(READ_ERR_MSG);
    exit(READ_EXIT);
}
