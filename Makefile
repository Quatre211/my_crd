
##
## ETNA PROJECT, 04/11/2021 by sangou_b
## Makefile
## File description:
##      Makefile
##

CC		=		gcc -g3

RM		=		rm -rf

SRC		=		create_list.c		\
				list_instruction.c		\
				main.c		\
				libmy/my_count_line_tab.c		\
				libmy/my_getnbr.c		\
				libmy/my_putchar.c		\
				libmy/my_putnbr.c		\
				libmy/my_putstr.c		\
				libmy/my_strcpy.c		\
				libmy/my_strdup.c		\
				libmy/my_strlen.c		\
				libmy/my_str_to_tab.c

OBJ		=		$(SRC:.c=.o)

NAME		=		my_crd

all: $(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(CFLAGS) $(OBJ)
		mv $(NAME) Release/MyCrd

clean:
	$(RM) $(OBJ)

fclean: clean
		$(RM) Release/$(NAME)

re:	fclean all
