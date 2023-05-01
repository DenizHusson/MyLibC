/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** Untitled-1
*/

#include <stdbool.h>

bool my_str_isupper(char const *str)
{
    int nb;

    for ( nb = 0 ; str[nb] ; nb++) {
        if ( str[nb] < 'A' || str[nb] > 'Z' ) {
            return false;
        }
    }
    return true;
}
