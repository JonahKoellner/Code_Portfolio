CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEPS = libft.h
FILES = ft_isalpha.c ft_memcmp.c ft_strlcat.c ft_strrchr.c ft_atoi.c ft_isascii.c ft_memcpy.c ft_strlcpy.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlen.c ft_toupper.c ft_calloc.c ft_isprint.c ft_memset.c ft_strncmp.c ft_isalnum.c ft_memchr.c ft_strchr.c ft_strnstr.c
OBJS = ${FILES:.c=.o}
RM	= rm -f
NAME = libft

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${CC} -O -o ${NAME} ${OBJS}

all:	${NAME}
	ar -rcs
clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}
re:		fclean all
.PHONY:	all clean fclean re
