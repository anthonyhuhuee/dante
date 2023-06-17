/*
** EPITECH PROJECT, 2023
** put_walls_in_map
** File description:
** it put a wall at up down right left at x or y + 1
*/

#include "generator.h"

int put_wall_up(structured_map_t **map, gen_cursor_t *cursor)
{
    map[CURSOR_Y - 1][CURSOR_X].char_map = 'X';
    map[CURSOR_Y - 1][CURSOR_X].can_be_wall = false;
    map[CURSOR_Y - 1][CURSOR_X].visited_cell = true;
    cursor->total_visited += 1;
    return SUCCESS;
}

int put_wall_down(structured_map_t **map, gen_cursor_t *cursor)
{
    map[CURSOR_Y + 1][CURSOR_X].char_map = 'X';
    map[CURSOR_Y + 1][CURSOR_X].can_be_wall = false;
    map[CURSOR_Y + 1][CURSOR_X].visited_cell = true;
    cursor->total_visited += 1;
    return SUCCESS;
}

int put_wall_right(structured_map_t **map, gen_cursor_t *cursor)
{
    map[CURSOR_Y][CURSOR_X + 1].char_map = 'X';
    map[CURSOR_Y][CURSOR_X + 1].can_be_wall = false;
    map[CURSOR_Y][CURSOR_X + 1].visited_cell = true;
    cursor->total_visited += 1;
    return SUCCESS;
}

int put_wall_left(structured_map_t **map, gen_cursor_t *cursor)
{
    map[CURSOR_Y][CURSOR_X - 1].char_map = 'X';
    map[CURSOR_Y][CURSOR_X - 1].can_be_wall = false;
    map[CURSOR_Y][CURSOR_X - 1].visited_cell = true;
    cursor->total_visited += 1;
    return SUCCESS;
}
