/*
** EPITECH PROJECT, 2022
** MyRepoC
** File description:
** remove_front_list.c
*/

#include "list.h"

list remove_front_list(list lst)
{
    if (is_empty_list(lst)) {
        return empty_list();
    }
    if (lst->begin == lst->end) {
        free(lst);
        lst = NULL;
        return empty_list();
    }
    list_node *temp = lst->begin;
    lst->begin = lst->begin->after;
    lst->begin->before = NULL;
    temp->after = NULL;
    temp->before = NULL;
    free(temp);
    temp = NULL;
    lst->len -= 1;
    return lst;
}
