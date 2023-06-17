/*
** EPITECH PROJECT, 2023
** get_possible_cases.c
** File description:
** get_possible_cases.c
*/

#include "solver.h"

axes_t right_case_value(axes_t cursor, axes_t maze_size, case_t **maze)
{
    axes_t result;
    if (cursor.len + 1 < maze_size.len &&
        maze[cursor.wid][cursor.len + 1].character != 'X') {
        result.wid = cursor.wid;
        result.len = cursor.len + 1;
    } else {
        result.len = -1;
        result.wid = -1;
    }
    return result;
}

axes_t down_case_value(axes_t cursor, axes_t maze_size, case_t **maze)
{
    axes_t result;
    if (cursor.wid + 1 < maze_size.wid &&
        maze[cursor.wid + 1][cursor.len].character != 'X') {
        result.wid = cursor.wid + 1;
        result.len = cursor.len;
    } else {
        result.wid = -1;
        result.len = -1;
    }
    return result;
}

axes_t left_case_value(axes_t cursor, case_t **maze)
{
    axes_t result;
    if (cursor.len - 1 >= 0 &&
        maze[cursor.wid][cursor.len - 1].character != 'X') {
        result.wid = cursor.wid;
        result.len = cursor.len - 1;
    } else {
        result.len = -1;
        result.wid = -1;
    }
    return result;
}

axes_t up_case_value(axes_t cursor, case_t **maze)
{
    axes_t result;
    if (cursor.wid - 1 >= 0 &&
        maze[cursor.wid - 1][cursor.len].character != 'X') {
        result.len = cursor.len;
        result.wid = cursor.wid - 1;
    } else {
        result.len = -1;
        result.wid = -1;
    }
    return result;
}

axes_t *get_possible_cases(case_t **maze, axes_t cursor, axes_t maze_size)
{
    axes_t *result = malloc(sizeof(axes_t) * 4);
    result[0] = right_case_value(cursor, maze_size, maze);
    result[1] = down_case_value(cursor, maze_size, maze);
    result[2] = left_case_value(cursor, maze);
    result[3] = up_case_value(cursor, maze);
    return result;
}
