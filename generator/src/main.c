/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "generator.h"

int main(int argc, char **argv)
{
    if (error_handling_gen(argc, argv) == FAILURE)
        return FAILURE;
    return choice_of_gen(argc, argv);
}
