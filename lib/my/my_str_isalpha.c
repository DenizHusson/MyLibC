/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_str_isalpha.c
*/

#include <stdbool.h>

bool my_str_isalpha(char const *str)
{
    int nb;

    for ( nb = 0 ; str[nb] ; nb++) {
        if (str[nb] < 'A' || str[nb] > 'Z' && str[nb] < 'a' || str[nb] > 'z') {
            return false;
        }
    }
    return true;
}
