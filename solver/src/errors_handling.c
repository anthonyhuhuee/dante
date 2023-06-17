/*
** EPITECH PROJECT, 2023
** errors_handling.c
** File description:
** errors_handling.c
*/

#include "solver.h"

int content_errors_handling(char *content)
{
    for (int count = 0; content[count] != '\0'; count += 1) {
        switch (content[count]) {
            case '\n':
            case 'X':
            case '*':
                break;
            default:
                return FAILURE;
        }
    }
    return SUCCESS;
}

int errors_handling(int argc, char **argv)
{
    struct stat s;
    if (argc != 2 || argv == NULL || argv[1] == NULL || stat(argv[1], &s) == -1)
        return FAILURE;
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        close(fd);
        return FAILURE;
    }
    char *content = malloc(sizeof(char) * s.st_size + 1);
    if (read(fd, content, s.st_size) <= 0) {
        free(content);
        close(fd);
        return FAILURE;
    }
    content[s.st_size] = '\0';
    close(fd);
    int status = content_errors_handling(content);
    free(content);
    return status;
}
