/*
** EPITECH PROJECT, 2023
** check_map_infos
** File description:
** for up down right left, check if program can put a wall there
*/

#include "generator.h"

int check_up_map_infos(structured_map_t **map, gen_cursor_t *cursor)
{
    if (CURSOR_Y > 1) {
        if (map[CURSOR_Y - 2][CURSOR_X].visited_cell == true &&
        map[CURSOR_Y - 1][CURSOR_X].visited_cell == false) {
            return SUCCESS;
        }
    }
    return FAILURE;
}

int check_down_map_infos(structured_map_t **map, gen_cursor_t *cursor)
{
    if (map[CURSOR_Y + 1] != NULL && map[CURSOR_Y + 2] != NULL) {
        if (map[CURSOR_Y + 2][CURSOR_X].visited_cell == true &&
        map[CURSOR_Y + 1][CURSOR_X].visited_cell == false) {
            return SUCCESS;
        }
    }
    return FAILURE;
}

int check_right_map_infos(structured_map_t **map, gen_cursor_t *cursor)
{
    if (map[CURSOR_Y][CURSOR_X + 1].char_map != '\0' &&
    map[CURSOR_Y][CURSOR_X + 2].char_map != '\0') {
        if (map[CURSOR_Y][CURSOR_X + 2].visited_cell == true &&
        map[CURSOR_Y][CURSOR_X + 1].visited_cell == false) {
            return SUCCESS;
        }
    }
    return FAILURE;
}

int check_left_map_infos(structured_map_t **map, gen_cursor_t *cursor)
{
    if (CURSOR_X > 1) {
        if (map[CURSOR_Y][CURSOR_X - 2].visited_cell == true &&
        map[CURSOR_Y][CURSOR_X - 1].visited_cell == false) {
            return SUCCESS;
        }
    }
    return FAILURE;
}
