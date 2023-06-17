/*
** EPITECH PROJECT, 2023
** init cursor
** File description:
** initalise generator cursor
*/

#include "generator.h"

void init_cursor(gen_cursor_t *cursor, structured_map_t **map)
{
    cursor->pos_x = 0;
    cursor->pos_y = 0;
    map[CURSOR_Y][CURSOR_X].visited_cell = true;
    map[CURSOR_Y][CURSOR_X].can_be_wall = false;
    map[CURSOR_Y][CURSOR_X].char_map = '*';
    cursor->total_visited = 1;
}
