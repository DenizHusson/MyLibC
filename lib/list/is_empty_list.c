/*
** EPITECH PROJECT, 2022
** MyRepoC
** File description:
** is_empty_list.c
*/

#include "list.h"

bool_e is_empty_list(list lst)
{
    if (lst == NULL) {
        return true;
    }
    return false;
}
