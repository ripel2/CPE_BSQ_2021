/*
** EPITECH PROJECT, 2021
** mem_alloc_2d_array.c
** File description:
** Allocates a zone in the memory to store a 2d array of a given size
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/fs.h"
#include "../include/mem.h"
#include "../include/bsq.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **rows = err_malloc(sizeof(char *) * nb_rows);

    return (rows);
}
