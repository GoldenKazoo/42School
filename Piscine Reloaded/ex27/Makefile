NAME = ft_display_file

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_display_file.c

all: ${NAME}

${NAME}:
		cc ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		-rm -f *.o

fclean: clean
		-rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
