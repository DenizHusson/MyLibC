/*
** EPITECH PROJECT, 2022
** MyRepoC
** File description:
** list.h
*/

#ifndef LIST_H_
    #define LIST_H_

    #include <stdlib.h>
    #include <stdio.h>

typedef struct list_node_s {
    int node;
    struct list_node_s *before;
    struct list_node_s *after;
}list_node;

typedef struct List_s {
    int len;
    struct list_node_s *begin;
    struct list_node_s *end;
}*list;

typedef enum {
    false = 0,
    true
}bool_e;

list empty_list(void);
bool_e is_empty_list(list lst);
int list_len(list lst);
list add_begin_list(list lst, int a);
list add_end_list(list lst, int a);
list retire_front_list(list lst);
void display_list(list lst);
list retire_back_list(list lst);

#endif /* LIST_H_ */
