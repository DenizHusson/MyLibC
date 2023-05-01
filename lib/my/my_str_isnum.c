/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_str_isnum.c
*/

#include <stdbool.h>

bool my_str_isnum(char const *str)
{
    int nb;

    for ( nb = 0 ; str[nb] ; nb++) {
        if ( str[nb] < '0' || str[nb] > '9' ) {
            return false;
        }
    }
    return true;
}
