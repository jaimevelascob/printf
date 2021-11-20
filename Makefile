LIB = ar rcs
rm = rm -f
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_printf.c
OBJ = $(SRC:.c=.o)
INCLUDE = printf.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all

