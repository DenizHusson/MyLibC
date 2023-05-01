/*
** EPITECH PROJECT, 2023
** MyRepoC
** File description:
** open_file.c
*/

#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/stat.h>

static bool is_alloc(int fd, char const *str)
{
    if (fd == -1) {
        return false;
    }
    if (str == NULL) {
        return false;
    }
    return true;
}

static bool is_file_readable(struct stat sb)
{
    if ((S_IRUSR & sb.st_mode) == 0) {
        return false;
    }
    if ((S_IFMT & sb.st_mode) != S_IFREG) {
        return false;
    }
    return true;
}

char *open_file(char const * const *file)
{
    int fd = open(file[1], O_RDONLY);
    struct stat sb;
    char *str;
    int i = stat(file[1], &sb);

    str = malloc(sizeof(char) * (sb.st_size + 1));
    if (!is_alloc(fd, str) || i == -1 ||
    sb.st_size == 0 || !is_file_readable(sb)) {
        close(fd);
        free(str);
        return NULL;
    }
    read(fd, str, sb.st_size);
    str[sb.st_size] = '\0';
    close(fd);
    return str;
}
