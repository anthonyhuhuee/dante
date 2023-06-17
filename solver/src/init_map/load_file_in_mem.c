/*
** EPITECH PROJECT, 2022
** load_file_in_mem
** File description:
** load_file_in_mem
*/

#include "solver.h"

char *load_file_in_mem(char const *filepath)
{
    struct stat s;
    stat(filepath, &s);
    char *content = malloc(sizeof(char) * (s.st_size + 1));
    int fd = open(filepath, O_RDONLY);
    if (read(fd, content, s.st_size) <= 0) {
        free(content);
        close(fd);
        return NULL;
    }
    content[s.st_size] = '\0';
    close(fd);
    return content;
}
