/*
** EPITECH PROJECT, 2023
** is_case_in_list.c
** File description:
** is_case_in_list.c
*/

#include "solver.h"

int is_case_in_check_cases(axes_t *case_checked, axes_t cursor)
{
    int count = 0;
    while (case_checked[count].len != -1 || case_checked[count].wid != -1) {
        if (case_checked[count].wid == cursor.wid &&
            case_checked[count].len == cursor.len)
            return SUCCESS;
        count += 1;
    }
    return FAILURE;
}
