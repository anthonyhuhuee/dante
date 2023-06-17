/*
** EPITECH PROJECT, 2023
** check cursor corner
** File description:
** check if the cursor is in a corner of the map or not
*/

#include "generator.h"

int check_cursor_corner(structured_map_t **map, gen_cursor_t *cursor)
{
    int not_available_side = 0;
    if (map[CURSOR_Y][CURSOR_X + 1].char_map == '\0' ||
    map[CURSOR_Y][CURSOR_X + 1].can_be_wall == false)
        not_available_side += 1;
    if (CURSOR_X == 0 || map[CURSOR_Y][CURSOR_X - 1].can_be_wall == false)
        not_available_side += 1;
    if (map[CURSOR_Y + 1] == NULL ||
    map[CURSOR_Y + 1][CURSOR_X].can_be_wall == false)
        not_available_side += 1;
    if (CURSOR_Y == 0 || map[CURSOR_Y - 1][CURSOR_X].can_be_wall == false)
        not_available_side += 1;
    if (not_available_side == 4)
        return FAILURE;
    return SUCCESS;
}
