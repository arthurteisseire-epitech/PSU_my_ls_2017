DINC	=	include/
INC	=	$(DINC)my.h
DTOOLS	=	tools/
DLINK	=	links/
SRC	=	my_putchar.c \
		my_put_nbr.c \
		my_put_unsigned.c \
		my_putstr.c \
		my_putnbr_base.c \
		my_putadress.c \
		my_printf.c \
		$(DLINK)p_putchar.c \
		$(DLINK)p_put_nbr.c \
		$(DLINK)p_put_unsigned.c \
		$(DLINK)p_putstr.c \
		$(DLINK)p_putstr_oct.c \
		$(DLINK)p_putoctal.c \
		$(DLINK)p_puthexa_low.c \
		$(DLINK)p_puthexa_up.c \
		$(DLINK)p_putbin.c \
		$(DLINK)p_putadress.c \
		$(DTOOLS)my_puterror.c \
		$(DTOOLS)my_strlen.c \
		$(DTOOLS)add_zeros.c \
		$(DTOOLS)is_printable.c \
		$(DTOOLS)handle_spaces.c \
		$(DTOOLS)check_double_pourcent.c \
		$(DTOOLS)delete_spaces.c \
		$(DTOOLS)put_less_and_zero.c
CFLAGS	+=	-I $(DINC)
OBJ	=	$(SRC:.c=.o)
NAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean
