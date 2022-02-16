/*
** EPITECH PROJECT, 2021
** err_malloc.c
** File description:
** Malloc function that exits if failed
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/mem.h"
#include "../include/bsq.h"

void *err_malloc(size_t size)
{
    void *ptr = malloc(size);

    if (ptr != NULL)
        return (ptr);
    my_putstr_err(MALLOC_ERR_MSG);
    exit(MALLOC_EXIT);
}
