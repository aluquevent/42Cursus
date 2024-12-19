NAME	= libft.a
PTH_SRC	= $(shell pwd)/srcs/
HEADERS	= $(shell pwd)/includes/
SRC_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS	= $(addprefix ${PTH_SRC}, ${SRC_FILES})
OBJS	= ${SRCS:.c=.o}
CC	= cc
RM	= rm -f
OPTIONS	= -I${HEADERS}
CFLAGS	= -Wall -Werror -Wextra ${OPTIONS}

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all
