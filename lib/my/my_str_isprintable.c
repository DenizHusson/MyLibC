/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_str_isprintable.c
*/

#include <stdbool.h>

bool my_str_isprintable(char const *str)
{
    int nb;

    for ( nb = 0 ; str[nb] ; nb++) {
        if ( str[nb] < 32 || str[nb] == 127) {
            return false;
        }
    }
    return true;
}
