/*
** EPITECH PROJECT, 2023
** add_to_list.c
** File description:
** add_to_list.c
*/

#include "solver.h"

axes_t *add_to_list(axes_t *list, axes_t position)
{
    int pos = 0;
    while (list[pos].wid != -1) {
        pos += 1;
    }
    list[pos].wid = position.wid;
    list[pos].len = position.len;
    return list;
}
