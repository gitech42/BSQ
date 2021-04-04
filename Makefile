##
## EPITECH PROJECT, 2020
## makefile
## File description:
## 
##


SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq



all:
	        gcc -g -c $(SRC)
		ar rc libmy.a $(OBJ)
		gcc -o $(NAME) $(OBJ)



clean:
		rm -f $(OBJ)
		rm -f $(NAME)



fclean: 	clean
		rm -f libmy.a



re:		fclean
