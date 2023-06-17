/*
** EPITECH PROJECT, 2023
** is_it_the_goal.c
** File description:
** is_it_the_goal.c
*/

#include "solver.h"

int is_it_the_goal(axes_t cursor, axes_t maze_size, case_t **maze)
{
    if (cursor.len == maze_size.len - 1 && cursor.wid == maze_size.wid - 1) {
        print_maze(maze, maze_size);
        return SUCCESS;
    }
    return FAILURE;
}
