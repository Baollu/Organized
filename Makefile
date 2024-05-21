##
## EPITECH PROJECT, 2023
## test
## File description:
## test
##

SRC	=	push_list.c		\
		display_function.c 	\
		main.c			\
		delete_in_list.c	\
		bubble_sort.c		\
		compare_swap.c		\

CFLAGS	=	-Wall -Wextra

FLAGS	=	-L ./libshell -lshell -L ./lib/my -lmy -I include

NAME	=	organized

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(SRC) $(FLAGS)

clean:
	make clean -C lib/my
	rm -f $(OBJ) $(NAME)

fclean: clean

re: fclean all

.PHOMY: all clean fclean re
