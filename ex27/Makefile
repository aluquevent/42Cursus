NAME = ft_display_file
PATH_SRCS = srcs
PATH_OBJS = objs

FILES = main.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_display_file.c

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = $(FILES:%.c=$(PATH_SRCS)/%.c)
OBJS = $(FILES:%.c=$(PATH_OBJS)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiling $@"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(PATH_OBJS)/%.o: $(PATH_SRCS)/%.c
	@echo "Compiling $@"
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(PATH_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
