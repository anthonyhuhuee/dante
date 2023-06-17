/*
** EPITECH PROJECT, 2023
** basic_movment.c
** File description:
** it does basic movement
*/

#include "generator.h"

void basic_movment(structured_map_t **map, gen_cursor_t *cursor,
bool perfect_maze)
{
    map[CURSOR_Y][CURSOR_X].visited_cell = true;
    if (perfect_maze == true)
        map[CURSOR_Y][CURSOR_X].char_map = '*';
    cursor->total_visited += 1;
    map[CURSOR_Y][CURSOR_X].can_be_wall = false;
}
