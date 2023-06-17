/*
** EPITECH PROJECT, 2023
** print map
** File description:
** print map
*/

#include "generator.h"

void print_map(structured_map_t **map, int x, int y)
{
    char **last_map = malloc(sizeof(char *) * y);
    for (int count = 0; count != y; count += 1) {
        last_map[count] = malloc(sizeof(char) * x);
    }

    for (int count_y = 0; map[count_y] != NULL; count_y += 1) {
        for (int count_x = 0; map[count_y][count_x].char_map != '\0';
        count_x += 1) {
            last_map[count_y][count_x] = map[count_y][count_x].char_map;
        }
        write(1, last_map[count_y], x);
        if (map[count_y + 1] != NULL)
            write(1,"\n", 1);
    }

    for (int count = 0; count != y; count += 1) {
        free(last_map[count]);
    }
    free(last_map);
}
