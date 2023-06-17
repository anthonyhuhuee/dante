/*
** EPITECH PROJECT, 2023
** find_best_pos.c
** File description:
** find_best_pos.c
*/

#include "solver.h"

axes_t find_best_position(axes_t *cases, case_t **maze)
{
    axes_t cursor = cases[0];
    int temp_f_cost = 0;
    int temp_h_cost = 0;
    int temp_g_cost = 0;
    for (int count = 0; cases[count].len != -1; count += 1) {
        temp_f_cost = maze[cases[count].wid][cases[count].len].total_cost;
        temp_h_cost = maze[cases[count].wid][cases[count].len].cost_goal;
        temp_g_cost = maze[cases[count].wid][cases[count].len].cost_start;
        if (temp_f_cost < maze[cursor.wid][cursor.len].total_cost ||
            (temp_h_cost < maze[cursor.wid][cursor.len].cost_goal &&
            temp_g_cost > maze[cursor.wid][cursor.len].cost_start)) {
            cursor.wid = cases[count].wid;
            cursor.len = cases[count].len;
        }
    }
    return cursor;
}
