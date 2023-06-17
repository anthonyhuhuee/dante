/*
** EPITECH PROJECT, 2023
** remove_from_list.c
** File description:
** remove_from_list.c
*/

#include "solver.h"

int check_if_position(axes_t position_1, axes_t position_2)
{
    if (position_1.wid == position_2.wid && position_1.len == position_2.len)
        return SUCCESS;
    return FAILURE;
}

axes_t *remove_from_list(axes_t *list, axes_t position)
{
    int pos = 0;
    while (check_if_position(list[pos], position) == FAILURE) {
        pos += 1;
    }
    while (list[pos + 1].len != -1) {
        list[pos].len = list[pos + 1].len;
        list[pos].wid = list[pos + 1].wid;
        pos += 1;
    }
    list[pos].len = -1;
    list[pos].wid = -1;
    return list;
}
