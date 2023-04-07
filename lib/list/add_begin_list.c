/*
** EPITECH PROJECT, 2022
** MyRepoC
** File description:
** add_begin_list.c
*/

#include "list.h"

list add_begin_list(list lst, int a)
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
        lst->begin->before = ele;
        ele->after = lst->begin;
        lst->begin = ele;
    }
    lst->len += 1;
    return lst;
}
