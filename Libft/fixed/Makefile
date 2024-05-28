NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c

INCS = ./includes

OBJS = *.o

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
