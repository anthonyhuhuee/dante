/*
** EPITECH PROJECT, 2023
** is_it_the_end.c
** File description:
** is_it_the_end.c
*/

#include "solver.h"

int is_it_the_start(axes_t cursor)
{
    if (cursor.wid == 0 && cursor.len == 0)
        return SUCCESS;
    return FAILURE;
}
