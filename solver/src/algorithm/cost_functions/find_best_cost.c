/*
** EPITECH PROJECT, 2023
** find_best_cost.c
** File description:
** find_best_cost.c
*/

#include "solver.h"

int testing_cost(int temp_f, int best_f, int temp_h, int best_h)
{
    if (temp_f < best_f && temp_h < best_h) {
        return SUCCESS;
    }
    return FAILURE;
}

axes_t init_result(void)
{
    axes_t result;
    result.len = 0;
    result.wid = 0;
    return result;
}

axes_t find_best_cost(case_t **maze, axes_t maze_size)
{
    int best_f = INT_MAX, best_h = INT_MAX;
    int temp_f = 0, temp_h = 0;
    axes_t result = init_result();
    for (int count = 0; count < maze_size.wid; count += 1) {
        for (int count_2 = 0; count_2 < maze_size.len; count_2 += 1) {
            temp_h = get_h_cost(maze[count][count_2].position, maze_size);
            temp_f = maze[count][count_2].cost_start + temp_h;
            switch (testing_cost(temp_f, best_f, temp_h, best_h)) {
                case SUCCESS:
                    best_f = temp_f;
                    best_h = temp_h;
                    result.len = maze[count][count_2].position.len;
                    result.wid = maze[count][count_2].position.wid;
                    break;
                default:
                    break;
            }
        }
    }
    return result;
}
