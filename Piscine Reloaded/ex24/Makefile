NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/ft_putchar.c\
	./srcs/ft_putstr.c\
	./srcs/ft_strcmp.c\
	./srcs/ft_strlen.c\
	./srcs/ft_swap.c

INCS = ./includes

OBJS = ./srcs/ft_putchar.o\
	./srcs/ft_putstr.o\
	./srcs/ft_strcmp.o\
	./srcs/ft_strlen.o\
	./srcs/ft_swap.o

all: ${NAME}

${NAME}:	${OBJS}
		cc ${CFLAGS} -c ${SRCS} -I ${INCS}
		ar rc ${NAME} ${OBJS}

clean:
		-rm -f ${OBJS}

fclean: clean
		-rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
