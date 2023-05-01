/*
** EPITECH PROJECT, 2022
** currentDelivery
** File description:
** my_str_to_array.c
*/

#include "my.h"

static int skip_space(int nb, char const *str)
{
    int index = nb;

    for (; str[index] == ' ' || str[index] == '\n' ||
    str[index] == '\t'; index++) {
    }
    return index;
}

static int nb_word(char const *str)
{
    int nb_word = 0;
    int i = 0;

    for (; i <= my_strlen(str); i++){
        if (i == 0) {
            i = skip_space(i, str);
        }
        if (str[i] == ' ' || str[i] == '\0' ||
        str[i] == '\t' || str[i] == '\n') {
            nb_word++;
            i = skip_space(i, str);
        }
    }
    return nb_word;
}

static int nb_mots(char const *str, int i)
{
    int j = 0;

    for (; str[i] != ' ' && str[i] != '\0' &&
    str[i] != '\n' && str[i] != '\t'; j++) {
        i++;
    }
    return j;
}

static char **loop(char **array, char const *str, int nb_words, int nb_char)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for (i = 0; i < nb_words; i++) {
        k = skip_space(k, str);
        array[i] = malloc(sizeof(char) * (nb_mots(str, k) + 1));
        if (array[i] == NULL) {
            return NULL;
        }
        nb_char = nb_mots(str, k);
        for (j = 0; j < nb_char; j++) {
            array[i][j] = str[k];
            k++;
        }
        array[i][j] = '\0';
        k++;
    }
    array[i] = NULL;
    return array;
}

char **str_to_array(char const *str)
{
    char **array;
    int nb_words = nb_word(str);

    array = malloc(sizeof(char *) * (nb_words + 1));
    if (array == NULL) {
        return NULL;
    }
    array = loop(array, str, nb_words, 0);
    return array;
}
