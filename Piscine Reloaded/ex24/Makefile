NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/ft_putchar.c\
	./srcs/ft_putstr.c\
	./srcs/ft_strcmp.c\
	./srcs/ft_strlen.c\
	./srcs/ft_swap.c

INCS = ./includes

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}:	${OBJS}
		gcc ${CFLAGS} ${INCS} ${SRC}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

clean:
		-rm -f ${OBJS}

fclean: clean
		-rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
