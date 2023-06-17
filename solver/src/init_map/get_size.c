/*
** EPITECH PROJECT, 2022
** get_size.c
** File description:
** get_size.c
*/

#include "solver.h"

int get_width(char *content)
{
    int result = 0;
    int count = 0;

    while (content[count] != '\0') {
        if (content[count] == '\n')
            result += 1;
        count += 1;
    }
    return result + 1;
}

int get_length(char *content)
{
    int result = 0;

    while (content[result] != '\n') {
        result += 1;
    }
    return result;
}

axes_t get_maze_size(char *content)
{
    axes_t result;
    result.wid = get_width(content);
    result.len = get_length(content);
    if (content[0] == 'X') {
        write(1, "no solution found\n", 18);
        free(content);
        exit(0);
    }
    free(content);
    return result;
}
