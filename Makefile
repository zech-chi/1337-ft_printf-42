SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_convert.c ft_print_d_i.c ft_print_address_hex.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

$(NAME): $(OBJS)
	ar -rcs $(NAME) $^

%.o: %.c ft_printf.h
	cc -Wall -Wextra -Werror -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
