/*
** EPITECH PROJECT, 2023
** free map
** File description:
** it make free of the map
*/

#include "generator.h"

int free_all(structured_map_t **map, gen_cursor_t *cursor)
{
    for (int count = 0; map[count] != NULL; count += 1) {
        free(map[count]);
    }
    free(map);
    free(cursor);
    return SUCCESS;
}
