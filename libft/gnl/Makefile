NAME		= get_next_line
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -rf

OBJ			= $(SRC:.c=.o)

SRC =	get_next_line_utils.c \
		get_next_line.c \

all:	$(NAME)

%.o : %.c
	${CC} -c -o $@ $^ -I./libft ${CFLAGS}

$(NAME):	libft $(OBJ)
			gcc -o ${NAME} ${OBJ} -L./libft -lft

libft:
			${MAKE} -C libft
			cp libft/libft.a ./${NAME}

clean:
			$(RM) $(OBJ)
			$(MAKE) -C libft clean

fclean:		clean
			$(RM)$(NAME)
			$(MAKE) -C libft fclean

re:			fclean all

.PHONY:		all libft clean fclean re
