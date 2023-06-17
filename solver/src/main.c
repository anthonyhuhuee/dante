/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "solver.h"

int main(int argc, char **argv)
{
    if (errors_handling(argc, argv) == FAILURE)
        return FAILURE;
    return solver(argv[1]);
}
