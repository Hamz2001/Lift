NAME= libftprintf.a
cc= cc
CFLAGS= -Wall -Wextra -Werror

FUN= ft_printf.c	\
handling2.c	\
ft_putchar.c	\
ft_putnbr.c	\
ft_putstr.c	\
ft_strlen.c	\
ft_putnbr_unsigned.c	\
ft_putnbr_base.c	\
ft_hexadecimal.c	\

CON= $(FUN:.c=.o)

all:	$(NAME)

$(NAME):	$(CON)
	ar r $(NAME) $(CON)

clean:	
	rm -f $(CON)

fclean:
	rm -f $(NAME)

re:	
	fclean all