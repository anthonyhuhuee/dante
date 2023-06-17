/*
** EPITECH PROJECT, 2023
** getnbr
** File description:
** getnbr
*/

#include "lib.h"

int my_getnbr(char const *str)
{
    int result = 0;
    int sign = 1;
    int count = 0;
    if (str == NULL) {
        return 84;
    }
    if (str[0] == '-') {
        sign = -1;
        count += 1;
    }
    for (count; str[count] != '\0'; count += 1) {
        if (str[count] < '0' || str[count] > '9') {
            return 84;
        }
        result = result * 10 + (str[count] - '0');
    }
    return sign * result;
}
