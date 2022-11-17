CC = cc
CFLAGS = -Wall -Wextra -Werror
DEPS = ft_printf.h
FILES = ft_printf.c specifier_interpreter.c specifier_handling.c
LIBFT_SRC = libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c libft/ft_itoa.c libft/ft_lstadd_back.c libft/ft_lstadd_front.c libft/ft_lstclear.c libft/ft_lstdelone.c libft/ft_lstiter.c libft/ft_lstlast.c libft/ft_lstmap.c libft/ft_lstnew.c libft/ft_lstsize.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_striteri.c libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_strtrim.c libft/ft_substr.c libft/ft_tolower.c libft/ft_toupper.c
SRCFILES = ft_substr.c
OBJS = ${FILES:.c=.o}
LIBFTOBJS = ${LIBFT_SRC.c=.o}
RM = rm -f
NAME = libftprintf.a
TESTFILES = ft_printf_tester.c

.c.o:
	${CC} ${CFLAGS} -c $< -o $@ libft/libft.a

${NAME}:	${OBJS}
	ar -rcs libftprintf.a ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean: clean tclean
	${RM} ${NAME}

re:	fclean all

tclean:
	${RM} ${TESTFILES:.c=.o}
	${RM} a.out

test:
	${CC} ${CFLAGS} ${FILES} ${LIBFT_SRC} ${TESTFILES} && ./a.out

.PHONY: all clean fclean re
