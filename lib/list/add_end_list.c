/*
** EPITECH PROJECT, 2022
** MyRepoC
** File description:
** add_end_list.c
*/

#include "list.h"

list add_end_list(list lst, int a)
{
    list_node *ele;
    ele = malloc(sizeof(*ele));
    ele->node = a;
    ele->after = NULL;
    ele->before = NULL;
    if (is_empty_list(lst)) {
        lst = malloc(sizeof(*lst));
        lst->len = 0;
        lst->begin = ele;
        lst->end = ele;
    } else {
        lst->end->after = ele;
        ele->before = lst->end;
        lst->end = ele;
    }
    lst->len += 1;
    return lst;
}
