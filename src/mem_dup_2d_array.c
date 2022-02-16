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

char **mem_dup_2d_array(char **arr, int nb_rows, int nb_cols)
{
    char **new_arr = mem_alloc_2d_array(nb_rows, nb_cols);

    for (int c = 0; c < nb_rows; c++) {
        new_arr[c] = err_malloc(sizeof(char) * nb_cols + 1);
        for (int d = 0; d < nb_cols; d++)
            new_arr[c][d] = arr[c][d];
    }
    return (new_arr);
}
