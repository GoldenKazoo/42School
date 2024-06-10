NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c

SRCS_BONUS = ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c \
				ft_lstiter_bonus.c

INCS = ./includes

OBJS = *.o

all: ${NAME}

${NAME}:	${OBJS}
		cc ${CFLAGS} -c ${SRCS} -I ${INCS}
		ar rc ${NAME} ${OBJS}

bonus:
		cc ${CFLAGS} -c ${SRCS_BONUS} -I ${INCS}
		ar rc ${NAME} ${OBJS}

ifneq ($(shell uname), Darwin)
breaker:
			cc -nostartfiles -shared -fPIC -ldl $(CFLAGS) -o libft.so $(SRCS) $(SRCBONUS)
else
breaker:
			cc -dynamiclib $(CFLAGS) -o libft.so $(SRCS) $(SRCBONUS) -L../obj -lmalloc
endif

clean:
		-rm -f ${OBJS}

fclean: clean
		-rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
