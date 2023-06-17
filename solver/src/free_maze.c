/*
** EPITECH PROJECT, 2023
** free_maze.c
** File description:
** free_maze.c
*/

#include "solver.h"

void free_maze(case_t **maze, axes_t maze_size, axes_t *list_1, axes_t *list_2)
{
    for (int count = 0; count < maze_size.wid; count += 1) {
        free(maze[count]);
    }
    free(maze);
    free(list_1);
    free(list_2);
}
