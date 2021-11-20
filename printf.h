#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
void	ft_putstr_fd(char *s, int fd);
void    ft_putnbr_fd(int nb, int fd);
void    ft_putchar_fd(char c, int fd);
void	ft_putnbr_base(long nbr, char *base);
void    ft_unsignbr(unsigned int nb, int fd);
#endif
