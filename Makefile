LIB = ar rcs
rm = rm -f
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c ft_putstr.c ft_unsignbr.c main.c
OBJ = $(SRC:.c=.o)
INCLUDE = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	cd ./source/libft/ && make
	cp ./source/libft/libft.a $(NAME)
	$(LIB) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CCFLAGS) -c $< -o ${<:.c=.o} -I includes/
clean:
	$(RM) $(OBJ)
	${MAKE} clean -C ./source/libft
fclean: clean
	$(RM) $(NAME)
	$(RM) ./source/libft/libft.a
re: fclean all
.PHONY	:	all clean fclean re
