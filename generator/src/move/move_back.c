/*
** EPITECH PROJECT, 2023
** move back
** File description:
** move the cursor back cause it's in a corner
*/

#include "generator.h"

int move_back(structured_map_t **map, gen_cursor_t *cursor)
{
    if (map[CURSOR_Y][CURSOR_X].visited_cell == false) {
        map[CURSOR_Y][CURSOR_X].visited_cell = true;
        map[CURSOR_Y][CURSOR_X].can_be_wall = false;
        cursor->total_visited += 1;
    }
    int new_x = map[CURSOR_Y][CURSOR_X].previous_cell_x;
    int new_y = map[CURSOR_Y][CURSOR_X].previous_cell_y;
    CURSOR_X = new_x;
    CURSOR_Y = new_y;
    return SUCCESS;
}
