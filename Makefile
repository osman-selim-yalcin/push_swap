SRCS = functions.c functions1.c functions2.c index.c main.c check.c make_arr.c atob.c forlook.c btoa.c

OBJS = $(SRCS:.c=.o)

EXT = printf/libftprintf.a libft/libft.a

CC = gcc

FLAGS =  -Wall -Wextra -Werror

RM = rm -rf

NAME = push_swap

all :$(EXT) $(NAME)

$(EXT):
	make -C printf
	make -C libft

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(EXT) $(FLAGS) -o $(NAME)

fclean : clean
	$(RM) *.a
	$(RM) printf/*.a
	$(RM) linft/*.a
	$(RM) $(NAME)

clean :
	$(RM) *.o
	$(RM) printf/*.o
	$(RM) libft/*.o


re : fclean all

.PHONY : all bonus fclean clean re