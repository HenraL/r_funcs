##
## EPITECH PROJECT, 2021
## Bootstrap - Makefile
## File description:
## abc
##

SRC	=	eval_expr.c	\
		live_testing.c	\
		send.c	\
		side_logic_functions.c	\
		test01.c	\
		tester.c	\
		translate.c
#		parenth_deal.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

LIB	=	lib/my/libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	cd lib/my && make
	gcc $(SRC) -o $(NAME) $(LIB)
	make clean
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
