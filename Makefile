##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

DSRC	=	$(realpath src)/
DLIB	=	$(realpath lib/my)/
LIB	=	my
LIBS	=	-L$(DLIB) -l$(LIB)
SRC     =	$(DSRC)main.c \
		$(DSRC)info_file.c \
		$(DSRC)list_dir.c \
		$(DSRC)get_time.c \
		$(DSRC)get_user.c \
		$(DSRC)get_hard_link.c \
		$(DSRC)get_size.c \
		$(DSRC)get_name.c
INC	=	$(realpath include)
INC_LIB	=	$(DLIB)include
CFLAGS	=	-Wall -W -Wextra -I$(INC) -I$(INC_LIB) -g
OBJ	=	$(SRC:.c=.o)
NAME	=	my_ls

all: $(NAME)

$(NAME):	$(OBJ)
	make -C $(DLIB)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LIBS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)
	make clean -C $(DLIB)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(DLIB)

re: fclean all
	make clean
