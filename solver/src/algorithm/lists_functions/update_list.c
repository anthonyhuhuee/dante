/*
** EPITECH PROJECT, 2023
** update_list.c
** File description:
** update_list.c
*/

#include "solver.h"

axes_t *update_list(axes_t *cases, axes_t *case_checked, axes_t *case_check)
{
    for (int count = 0; count < 4; count += 1) {
        if ((cases[count].wid != -1 || cases[count].len != -1) &&
            is_case_in_check_cases(case_checked, cases[count]) != SUCCESS &&
            is_case_in_check_cases(case_check, cases[count]) != SUCCESS) {
                case_check = add_to_list(case_check, cases[count]);
        }
    }
    free(cases);
    return case_check;
}
