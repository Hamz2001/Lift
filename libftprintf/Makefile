NAME= libftprintf.a
cc= cc
CFLAGS= -Wall -Wextra -Werror

FUN= divi.c	\
ft_len.c	\
ft_put.c	\
ft_printf.c	\

CON= $(FUN:.c=.o)

all:	$(NAME)

$(NAME):	$(CON)
	ar rc $(NAME) $(CON)

clean:	
	rm -f $(CON)

fclean: clean
	rm -f $(NAME)

re:	fclean all