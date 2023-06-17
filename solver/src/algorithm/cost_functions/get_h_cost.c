/*
** EPITECH PROJECT, 2023
** get_h_cost.c
** File description:
** get_h_cost.c
*/

#include "solver.h"

int get_h_cost(axes_t position, axes_t maze_size)
{
    int result = 0;
    result += maze_size.len - position.len - 1;
    result += maze_size.wid - position.wid - 1;
    return result;
}
