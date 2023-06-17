/*
** EPITECH PROJECT, 2023
** error_handling
** File description:
** error_handling of generator
*/

#include "generator.h"

int check_if_number(char *arg)
{
    for (int count_char = 0; arg[count_char] != '\0'; count_char += 1) {
        if (arg[count_char] < '0' || arg[count_char] > '9')
            return FAILURE;
    }
    return SUCCESS;
}

int error_handling_gen(int argc, char **arg)
{
    if (argc < 3 && argc > 4)
        return FAILURE;
    for (int count_arg = 1; count_arg != 3; count_arg += 1) {
        if (check_if_number(arg[count_arg]) == FAILURE)
            return FAILURE;
    }
    int x = my_getnbr(arg[1]);
    int y = my_getnbr(arg[2]);
    if (x <= 1 || y <= 1)
        return FAILURE;
    return SUCCESS;
}
