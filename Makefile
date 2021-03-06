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
DISP	=	$(DSRC)disp/
FORMAT	=	$(DSRC)format/
ACTION	=	$(DSRC)action/
TOOLS	=	$(DSRC)tools/
SRC	=	$(DSRC)main.c \
		$(DSRC)list_files.c \
		$(DSRC)get_option.c \
		$(DISP)get_time.c \
		$(DISP)get_user.c \
		$(DISP)get_group.c \
		$(DISP)get_hard_link.c \
		$(DISP)get_size.c \
		$(DISP)get_name.c \
		$(DISP)get_rights.c \
		$(DISP)get_filetype.c \
		$(FORMAT)g_format.c \
		$(FORMAT)l_format.c \
		$(FORMAT)default_format.c \
		$(FORMAT)one_format.c \
		$(ACTION)recursive.c \
		$(ACTION)default_action.c \
		$(ACTION)list_dir.c \
		$(TOOLS)count_files.c \
		$(TOOLS)concat.c
INC	=	$(realpath include)
INC_LIB	=	$(DLIB)include
CFLAGS	=	-Wall -W -Wextra -I$(INC) -I$(INC_LIB) -ggdb3
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
