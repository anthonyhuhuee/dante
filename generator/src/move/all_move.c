/*
** EPITECH PROJECT, 2023
** all move
** File description:
** all move of cursor in map
*/

#include "generator.h"

int all_move(structured_map_t **map, gen_cursor_t *cursor, int move_int,
bool perfect_maze)
{
    switch (move_int) {
    case UP:
        if (up_move(map, cursor, perfect_maze) == FAILURE)
            return FAILURE;
        break;
    case RIGHT:
        if (right_move(map, cursor, perfect_maze) == FAILURE)
            return FAILURE;
        break;
    case DOWN:
        if (down_move(map, cursor, perfect_maze) == FAILURE)
            return FAILURE;
        break;
    case LEFT:
        if (left_move(map, cursor, perfect_maze) == FAILURE)
            return FAILURE;
        break;
    }
    return SUCCESS;
}

int up_move(structured_map_t **map, gen_cursor_t *cursor, bool perfect_maze)
{
    if (CURSOR_Y == 0 || map[CURSOR_Y - 1][CURSOR_X].can_be_wall == false)
        return FAILURE;
    CURSOR_Y -= 1;
    basic_movment(map, cursor, perfect_maze);
    map[CURSOR_Y][CURSOR_X].previous_cell_x = CURSOR_X;
    map[CURSOR_Y][CURSOR_X].previous_cell_y = CURSOR_Y + 1;
    return SUCCESS;
}

int down_move(structured_map_t **map, gen_cursor_t *cursor, bool perfect_maze)
{
    if (map[CURSOR_Y + 1] == NULL ||
    map[CURSOR_Y + 1][CURSOR_X].can_be_wall == false)
        return FAILURE;
    CURSOR_Y += 1;
    basic_movment(map, cursor, perfect_maze);
    map[CURSOR_Y][CURSOR_X].previous_cell_x = CURSOR_X;
    map[CURSOR_Y][CURSOR_X].previous_cell_y = CURSOR_Y - 1;
    return SUCCESS;
}

int right_move(structured_map_t **map, gen_cursor_t *cursor, bool perfect_maze)
{
    if (map[CURSOR_Y][CURSOR_X + 1].char_map == '\0' ||
    map[CURSOR_Y][CURSOR_X + 1].can_be_wall == false)
        return FAILURE;
    CURSOR_X += 1;
    basic_movment(map, cursor, perfect_maze);
    map[CURSOR_Y][CURSOR_X].previous_cell_x = CURSOR_X - 1;
    map[CURSOR_Y][CURSOR_X].previous_cell_y = CURSOR_Y;
    return SUCCESS;
}

int left_move(structured_map_t **map, gen_cursor_t *cursor, bool perfect_maze)
{
    if (CURSOR_X == 0 || map[CURSOR_Y][CURSOR_X - 1].can_be_wall == false)
        return FAILURE;
    CURSOR_X -= 1;
    basic_movment(map, cursor, perfect_maze);
    map[CURSOR_Y][CURSOR_X].previous_cell_x = CURSOR_X + 1;
    map[CURSOR_Y][CURSOR_X].previous_cell_y = CURSOR_Y;
    return SUCCESS;
}
