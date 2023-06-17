/*
** EPITECH PROJECT, 2023
** is_caseToCheck_empty.c
** File description:
** is_caseToCheck_empty.c
*/

#include "solver.h"

int is_case_to_check_empty(axes_t *case_to_check)
{
    if (case_to_check[0].len == -1)
        return SUCCESS;
    return FAILURE;
}
