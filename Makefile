##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

CC =	clang

SRC	=	bizz.c \

NAME	=	fazzbizz

all:
	$(CC) -o $(NAME) $(SRC)

clean:
	rm -f *~ *.o

fclean:	clean
	rm -f $(NAME)

re:	$(NAME) fclean

tests_run:
	@echo "Running tests..."
	@./fazzbizz
