/*
** EPITECH PROJECT, 2023
** init_maze.c
** File description:
** init_maze.c
*/

#include "solver.h"

case_t init_start_pos(axes_t maze_size)
{
    case_t result;
    result.character = '*';
    result.position.len = 0;
    result.position.wid = 0;
    result.cost_start = 0;
    result.cost_goal = maze_size.wid + maze_size.len - 2;
    result.total_cost = result.cost_goal;
    return result;
}

case_t **init_maze(axes_t maze_size, char *content)
{
    case_t **result = malloc(sizeof(case_t *) * maze_size.wid);
    int content_len = 0;
    for (int count = 0; count < maze_size.wid; count += 1) {
        result[count] = malloc(sizeof(case_t) * maze_size.len);
        for (int count_2 = 0; count_2 < maze_size.len; count_2 += 1) {
            result[count][count_2].character = content[content_len];
            result[count][count_2].position.wid = count;
            result[count][count_2].position.len = count_2;
            result[count][count_2].cost_start = maze_size.wid * maze_size.len;
            result[count][count_2].cost_goal = maze_size.wid * maze_size.len;
            result[count][count_2].total_cost = maze_size.wid * maze_size.len;
            content_len += 1;
        }
        content_len += 1;
    }
    result[0][0] = init_start_pos(maze_size);
    free(content);
    return result;
}
