##
## EPITECH PROJECT, 2022
## lib
## File description:
## Makefile
##

SRC		=		list_len.c\
				empty_list.c\
				is_empty_list.c\
				display_list.c\
				remove_front_list.c\
				remove_back_list.c\
				add_begin_list.c\
				add_end_list.c

OBJ 	=		$(SRC:.c=.o)

NAME	=		list

LIB 	= 		$(NAME).a

INCLUDE	= 		$(NAME).h

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) rc $(LIB) $(OBJ)
			cp $(LIB) ..
			cp $(INCLUDE) ../../includes

fclean:		clean

clean:
			$(RM) $(OBJ)
			$(RM) $(LIB)
			$(RM) ../$(LIB)
			$(RM) ../../includes/$(INCLUDE)

re:			fclean
			$(MAKE) all

.PHONY:		all fclean clean re
