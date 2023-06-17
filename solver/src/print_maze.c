/*
** EPITECH PROJECT, 2023
** print_maze.c
** File description:
** print_maze.c
*/

#include "solver.h"

char **struct_to_string_array(case_t **maze, axes_t maze_size)
{
    char **result = malloc(sizeof(char *) * (maze_size.wid + 1));
    for (int count = 0; count < maze_size.wid; count += 1) {
        result[count] = malloc(sizeof(char) * (maze_size.len + 1));
        for (int count_2 = 0; count_2 < maze_size.len; count_2 += 1) {
            result[count][count_2] = maze[count][count_2].character;
        }
        result[count][maze_size.len] = '\0';
    }
    result[maze_size.wid] = NULL;
    return result;
}

void print_maze(case_t **maze, axes_t maze_size)
{
    maze = change_char_path(maze, maze_size);
    char **new_maze = struct_to_string_array(maze, maze_size);
    new_maze[maze_size.wid - 1][maze_size.len - 1] = 'o';
    for (int count = 0; count < maze_size.wid; count += 1) {
            write(1, new_maze[count], my_strlen(new_maze[count]));
        if (count != maze_size.wid - 1)
            write(1, "\n", 1);
    }
}
