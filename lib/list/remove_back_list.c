/*
** EPITECH PROJECT, 2022
** MyRepoC
** File description:
** remove_back_list.c
*/

#include "list.h"

list retire_back_list(list lst)
{
    if (is_empty_list(lst)) {
        return empty_list();
    }
    if (lst->begin == lst->end) {
        free(lst);
        lst = NULL;
        return empty_list();
    }
    list_node *temp = lst->end;
    lst->end = lst->end->before;
    lst->end->after = NULL;
    temp->after = NULL;
    temp->before = NULL;
    free(temp);
    temp = NULL;
    lst->len -= 1;
    return lst;
}
