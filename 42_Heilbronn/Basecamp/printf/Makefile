CC = gcc
CFALGS = -Wall -Wextra -Werror
DEPS = ft_printf.h
FILES = ft_printf.c specifier_interpreter.c
SRCFILES = ft_substr.c
OBJS = ${FILES:.c=.o}
RM = rm -f
NAME = ft_printf.a
TESTFILES = ft_printf_tester.c

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
	ar -rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

test:
	${CC} ${FLAGS} -c ${TESTFILES}

.PHONY: all clean fclean re
