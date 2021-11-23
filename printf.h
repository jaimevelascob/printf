#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
int	ft_putstr(char *s);
int	ft_putnbr(int nb);
void	ft_putchar(char c);
int	ft_putnbr_base(long nbr, char *base);
int    ft_unsignbr(unsigned int nb);
#endif
