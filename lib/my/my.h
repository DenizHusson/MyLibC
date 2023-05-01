/*
** EPITECH PROJECT, 2022
** lib
** File description:
** proto.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdlib.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <unistd.h>

    int my_compute_power_rec(int nb, int p);
    int my_find_prime_sup(int nb);
    int my_is_prime(int nb);
    int my_getnbr(char const *str);
    int my_is_prime(int nb);
    int my_isneg(int n);
    void my_putchar(char c);
    int my_put_nbr(int nb);
    char *my_revstr(char *str);
    int my_strlen(char const *str);
    void my_sort_int_array(int *array, int size);
    void my_swap(int *a, int *b);
    bool my_str_isalpha(char const *str);
    bool my_str_islower(char const *str);
    bool my_str_isnum(char const *str);
    bool my_str_isprintable(char const *str);
    bool my_str_isupper(char const *str);
    char *my_strcapitalize(char *str);
    int my_strcmp(char const *s1, char const *s2);
    char *my_strcpy(char *dest, char const *src);
    char *my_strlowcase(char *str);
    int my_strncmp(char const *s1,char const *s2, int n);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strupcase(char *str);
    int my_numlen(int c);
    int my_strlen(char const *str);
    char *open_file(char const * const *file);
    int my_putstr(char const *str);
    char *my_itoa(int nb);

#endif /* PROTO */
