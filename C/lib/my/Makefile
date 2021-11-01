##
## EPITECH PROJECT, 2021
## Task01 - makefile
## File description:
## abc
##

SRC	=	pv_my_compute_power_rec.c	\
		pv_my_compute_square_root.c	\
		pv_my_find_prime_sup.c	\
		pv_my_getnbr.c	\
		pv_my_isneg.c	\
		pv_my_is_prime.c	\
		pv_my_putchar.c	\
		pv_my_put_nbr.c	\
		pv_my_putstr.c	\
		pv_my_revstr.c	\
		pv_my_showmem.c	\
		pv_my_showstr.c	\
		pv_my_sort_int_array.c	\
		pv_my_strcapitalize.c	\
		pv_my_strcat.c	\
		pv_my_strcmp.c	\
		pv_my_strcpy.c	\
		pv_my_str_isalpha.c	\
		pv_my_str_islower.c	\
		pv_my_str_isnum.c	\
		pv_my_str_isprintable.c	\
		pv_my_str_isupper.c	\
		pv_my_strlen.c	\
		pv_my_strlowcase.c \
		pv_my_strncat.c	\
		pv_my_strncmp.c	\
		pv_my_strncpy.c	\
		pv_my_strstr.c	\
		pv_my_strupcase.c	\
		pv_my_swap.c
OBJ	=	$(SRC:.c=.o)

NAME	=	libmypv.a
all:	$(NAME)
$(NAME):	$(OBJ)
	gcc -c  $(SRC)
	ar rc $(NAME) $(OBJ)
	rm $(OBJ)
	echo "Finished"
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
