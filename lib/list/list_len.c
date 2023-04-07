/*
** EPITECH PROJECT, 2022
** MyRepoC
** File description:
** list_len.c
*/

#include "list.h"

int list_len(list lst)
{
    if (is_empty_list(lst)) {
        return 0;
    }
    return lst->len;
}
