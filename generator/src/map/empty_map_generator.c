/*
** EPITECH PROJECT, 2023
** empty map generator
** File description:
** empty map generator
*/

#include "generator.h"

structured_map_t **empty_map_generator(int x, int y)
{
    structured_map_t **map = malloc(sizeof(structured_map_t *) * (y + 1));
    map[y] = NULL;
    for (int count_y = 0; count_y != y; count_y += 1) {
        map[count_y] = malloc(sizeof(structured_map_t) * (x + 1));
        for (int count_x = 0; count_x != x; count_x += 1) {
            map[count_y][count_x].char_map = '*';
            map[count_y][count_x].previous_cell_x = 0;
            map[count_y][count_x].previous_cell_y = 0;
            map[count_y][count_x].visited_cell = false;
            map[count_y][count_x].can_be_wall = true;
        }
        map[count_y][x].char_map = '\0';
    }
    return map;
}
