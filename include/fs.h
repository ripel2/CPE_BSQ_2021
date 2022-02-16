/*
** EPITECH PROJECT, 2021
** fs.h
** File description:
** Header that contains the prototypes of all the
** functions used to manipulate files
*/

#ifndef FS_H_
    #define FS_H_

    #define BUFFER_SIZE 16384

int fs_get_number_from_first_line(char const *filepath);
int fs_get_map_width(char const *filepath);
char **fs_load_map(char const *filepath, int map_lines, int map_width);
void fs_free_map(char **map, int map_lines, int map_width);

#endif
