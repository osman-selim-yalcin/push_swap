NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -rf
AR			= ar rcs

SRC	= $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

clean:
			@$(RM) *.o

fclean:	clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
