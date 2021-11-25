#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include "./includes/libft.h"

int	ft_printf(const char *, ...);
int	ft_putstr(char *s);
void	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putnbr_base(unsigned long long nbr, char *base);
int    	ft_unsignbr(unsigned int nb);
#endif
