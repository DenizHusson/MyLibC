/*
** EPITECH PROJECT, 2022
** MyLibC
** File description:
** my_itoa.c
*/

#include "my.h"

char *my_itoa(int nb)
{
    char *str;
    int i;
    int num = my_numlen(nb);

    str = malloc(sizeof(char) * (my_numlen(nb) + 1));
    if (str == NULL) {
        return NULL;
    }
    for (i = 0; nb > 9; i++) {
        str[i] = nb % 10 + '0';
        nb /= 10;
    }
    str[i] = nb + '0';
    str[num] = '\0';
    my_revstr(str);
    return str;
}
