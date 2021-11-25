/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:26:17 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/25 15:55:34 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_return(char str, int *ncount, va_list arg)
{
	if (str == 'c')
	{
		ft_putchar((va_arg(arg, int)));
		*ncount += 1;
	}
	if(str == 's')
		*ncount += ft_putstr((va_arg(arg, char*)));
	if (str == 'd' || str == 'i')
	{
		char *str = ft_itoa(va_arg(arg, int));
		*ncount += ft_strlen(str);
		ft_putstr_fd(str, 1);
		free(str);
	}
	if (str == 'u')
		*ncount += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789");	
	if (str == 'x')
		*ncount	+= ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
	if (str == 'X')
		*ncount += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF");
	if (str == 'p')
	{
		ft_putstr("0x");
		*ncount += ft_putnbr_base(va_arg(arg, unsigned long), "0123456789abcdef") + 2;
	}
	return (*ncount);
}
int ft_printf(const char *str, ...)
{
	va_list	arg;
	char	*newstr;
	int	i;
	int	count;

	newstr = (char *)str;
	count = 0;
	i = -1;
	va_start(arg, str);
	while(newstr[++i])
	{
		if(newstr[i] != '%')
		{
			ft_putchar(str[i]);
			count++;
		}
		else
		{
			if (str[++i] != '%'){

				ft_print_return(newstr[i], &count, arg);
			}
			else
				write(1, "%", 1);
		}
	}
	va_end(arg);
//	printf("%d", count);
	return (count);
}

