/*
** EPITECH PROJECT, 2023
** function
** File description:
** function
*/

#include "solver.h"

int solver(char const *filepath)
{
    axes_t maze_size = get_maze_size(load_file_in_mem(filepath));
    case_t **maze = init_maze(maze_size, load_file_in_mem(filepath));
    axes_t *case_to_check = init_case_to_check(maze_size);
    axes_t *case_checked = init_case_checked(maze_size);
    while (is_case_to_check_empty(case_to_check) == FAILURE) {
        axes_t cursor = find_best_position(case_to_check, maze);
        int cost_from_start = maze[cursor.wid][cursor.len].cost_start;
        case_to_check = remove_from_list(case_to_check, cursor);
        case_checked = add_to_list(case_checked, cursor);
        if (is_it_the_goal(cursor, maze_size, maze) == SUCCESS) {
            free_maze(maze, maze_size, case_checked, case_to_check);
            return SUCCESS;
        }
        axes_t *cases = get_possible_cases(maze, cursor, maze_size);
        maze = update_cost(maze, cases, cost_from_start, maze_size);
        case_to_check = update_list(cases, case_checked, case_to_check);
    }
    write(1, "no solution found\n", 18);
    free_maze(maze, maze_size, case_checked, case_to_check);
    return FAILURE;
}
