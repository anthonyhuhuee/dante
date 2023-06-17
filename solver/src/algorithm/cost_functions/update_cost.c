/*
** EPITECH PROJECT, 2023
** update_cost.c
** File description:
** update_cost.c
*/

#include "solver.h"

case_t **update_cost(case_t **maze, axes_t *cases, int cost, axes_t size)
{
    int max_cost = size.wid * size.len;
    int new_g_cost = cost + 1;
    int new_h_cost = 0;
    int new_f_cost = 0;
    for (int count = 0; count < 4; count += 1) {
        if (cases[count].wid != -1 && cases[count].len != -1 &&
            maze[cases[count].wid][cases[count].len].cost_start == max_cost) {
            maze[cases[count].wid][cases[count].len].cost_start = new_g_cost;
            new_h_cost = get_h_cost(cases[count], size);
            maze[cases[count].wid][cases[count].len].cost_goal = new_h_cost;
            new_f_cost = new_h_cost + new_g_cost;
            maze[cases[count].wid][cases[count].len].total_cost = new_f_cost;
        }
    }
    return maze;
}
