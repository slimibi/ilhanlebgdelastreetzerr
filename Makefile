##
## SE GENRE DE PROJECT, 
## pédo
## File description:
## Makefile
##

NAME		=	foutre

SRC			=	src/main.c 			\
				src/basic.c 		\
				src/salepute.c		\
				src/megapute.c		\

OBJ			=	$(SRC:.c=.o)

CC			=	gcc

INCLUDE		=	-I include

CFLAGS		= -Wall -Wextra -pedantic $(INCLUDE)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean re
