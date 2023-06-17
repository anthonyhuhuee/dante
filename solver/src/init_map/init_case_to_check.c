/*
** EPITECH PROJECT, 2023
** init_case_to_check.c
** File description:
** init_case_to_check.c
*/

#include "solver.h"

axes_t *init_case_checked(axes_t maze_size)
{
    axes_t *result = malloc(sizeof(axes_t) * (maze_size.len * maze_size.wid));

    for (int count = 0; count < maze_size.wid * maze_size.len; count += 1) {
        result[count].len = -1;
        result[count].wid = -1;
    }
    return result;
}

axes_t *init_case_to_check(axes_t maze_size)
{
    axes_t *result = malloc(sizeof(axes_t) * (maze_size.len * maze_size.wid));

    for (int count = 0; count < maze_size.wid * maze_size.len; count += 1) {
        result[count].len = -1;
        result[count].wid = -1;
    }
    result[0].len = 0;
    result[0].wid = 0;
    return result;
}
