/*
** EPITECH PROJECT, 2023
** change_char_path.c
** File description:
** change_char_path.c
*/

#include "solver.h"

case_t **check_down(axes_t *cursor, case_t **maze, int cost)
{
    if (cursor->wid - 1 >= 0 &&
        maze[cursor->wid - 1][cursor->len].cost_start == cost - 1) {
        maze[cursor->wid - 1][cursor->len].character = 'o';
        cursor->wid -= 1;
        cost -= 1;
    }
    return maze;
}

case_t **check_up(axes_t *cursor, case_t **maze, int cost, axes_t maze_size)
{
    if (cursor->wid + 1 < maze_size.wid &&
        maze[cursor->wid + 1][cursor->len].cost_start == cost - 1) {
        maze[cursor->wid + 1][cursor->len].character = 'o';
        cursor->wid += 1;
        cost -= 1;
    }
    return maze;
}

case_t **check_left(axes_t *cursor, case_t **maze, int cost)
{
    if (cursor->len - 1 >= 0 &&
        maze[cursor->wid][cursor->len - 1].cost_start == cost - 1) {
        maze[cursor->wid][cursor->len - 1].character = 'o';
        cursor->len -= 1;
        cost -= 1;
    }
    return maze;
}

case_t **check_right(axes_t *cursor, case_t **maze, int cost, axes_t maze_size)
{
    if (cursor->len + 1 < maze_size.len &&
        maze[cursor->wid][cursor->len + 1].cost_start == cost - 1) {
        maze[cursor->wid][cursor->len + 1].character = 'o';
        cursor->len += 1;
        cost -= 1;
    }
    return maze;
}

case_t **change_char_path(case_t **maze, axes_t maze_size)
{
    int cost = maze[maze_size.wid - 1][maze_size.len - 1].cost_start;
    axes_t cursor;
    cursor.wid = maze_size.wid - 1;
    cursor.len = maze_size.len - 1;
    while (is_it_the_start(cursor) == FAILURE) {
        maze = check_down(&cursor, maze, cost);
        maze = check_up(&cursor, maze, cost, maze_size);
        maze = check_left(&cursor, maze, cost);
        maze = check_right(&cursor, maze, cost, maze_size);
        cost -= 1;
    }
    return maze;
}
