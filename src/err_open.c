/*
** EPITECH PROJECT, 2021
** err_open.c
** File description:
** Open function that exits if failed
*/

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/mem.h"
#include "../include/bsq.h"

int err_open(const char *pathname, int flags)
{
    int fd = open(pathname, flags);

    if (fd > 2)
        return (fd);
    my_putstr_err("Failed to open");
    my_putstr_err(" ");
    my_putstr_err(pathname);
    my_putstr_err("\n");
    exit(OPEN_EXIT);
}
