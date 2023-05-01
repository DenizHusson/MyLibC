# MyLibC

As an Epitech student, I had to make my own library, to recreate many very useful libC functions.


All of these functions are working with no Valgrind error.

## Caution

If you are an Epitech Student you can totally take inspiration from my functions but take care to do not get -42.

## All Libs

### my

Functions of libC

### list

Functions to make double chained list

## Function Book

### my

**my_putchar** - *display a character* - ```void my_putchar(char a)```

**my_putstr** - *display a string* - ```int my_putstr(char const *str)```

**my_strlen** - *return lenght of a string* - ```int my_strlen(char const *str)```

**my_put_nbr** - *display an int* - ```int my_put_nbr(int nb)```

**my_numlen** - *return lenght of an int* - ```int my_numlen(int c)```

**my_getnbr** - *return a number from a string* - ```int my_getnbr(char const *str)```

**my_strcmp** - *compare 2 strings and return 0 if they are identical* - ```int my_strcmp(char const *s1, char const *s2)```

**my_strcpy** - *copy a string* - ```char *my_strcpy(char *dest, char const *src)```

**my_str_to_array** - *separate each word in a string and return an array* - ```char **str_to_array(char const *str)```

**my_revstr** - *reverse a string* - ```char *my_revstr(char *str)```

**my_swap** - *swap two int* - ```void my_swap(int *a, int *b)```

**my_sort_int_array** - *sort a list of int* - ```void my_sort_int_array(int *array, int size)```

**open_file** - *open a file and verify if it is openable* - ```char *open_file(char const * const *file)```

**my_itoa** - *transform an int to a string* - ```char *my_itoa(int nb)```

**my_strupcase** - *change lowercase of a string by uppercase* - ```char *my_strupcase(char *str)```

**my_strlowercase** - *change uppercase of a string by lowercase* - ```char *my_strlowcase(char *str)```

**my_str_isalpha** - *verify if the string contain only alpha characters* - ```bool my_str_isalpha(char const *str)```

**my_str_islower** - *verify if the string contain only low alpha characters* - ```bool my_str_islower(char const *str)```

**my_str_isupper** - *verify if the string contain only up alpha characters* - ```bool my_str_isupper(char const *str)```

**my_str_isnum** - *verify if the string contain only num characters* - ```bool my_str_isnum(char const *str)```


### list

**empty_list** - *create an empty list* - ```list empty_list(void)```

**is_empty_list** - *return true if it is an empty list, false if not* - ```bool_e is_empty_list(list lst)```

**list_len** - *return chained list lenght* - ```int list_len(list lst)```

**dislay_list** - *display all value in a chained list* - ```void display_list(list lst)```

**add_begin_list** - *add a node at the begin of the list* - ```list add_begin_list(list lst, int a)```

**add_end_list** - *add a node at the end of the list* - ```list add_end_list(list lst, int a)```

**remove_front_list** - *remove a node at the begin of the list* - ```list remove_front_list(list lst)```

**remove_back_list** - *remove a node at the end of the list* - ```list retire_back_list(list lst)```
