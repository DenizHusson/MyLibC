/*
** EPITECH PROJECT, 2022
** MyRepoC
** File description:
** display_list.c
*/

#include "list.h"

void display_list(list lst)
{
    list_node *temp = lst->begin;
    if (is_empty_list(lst)) {
        return;
    }
    for (int i = 0; i < lst->len; i++) {
        temp = temp->after;
    }
}
