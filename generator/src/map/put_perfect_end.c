/*
** EPITECH PROJECT, 2023
** put perfect end
** File description:
** put a wall at the end to do a perfect maze
*/

#include "generator.h"

void put_perfect_end(structured_map_t **map, int x, int y)
{
    int rand_wall_end = 0;
    rand_wall_end = rand() % 2;
    if (rand_wall_end == 0) {
        map[END_MAP_Y][LAST_CHAR_LEFT].char_map = 'X';
        map[END_MAP_Y][LAST_CHAR_LEFT].can_be_wall = false;
        map[END_MAP_Y][LAST_CHAR_LEFT].visited_cell = true;
    } else {
        map[LAST_CHAR_UP][END_MAP_X].char_map = 'X';
        map[LAST_CHAR_UP][END_MAP_X].can_be_wall = false;
        map[LAST_CHAR_UP][END_MAP_X].visited_cell = true;
    }
}
