/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:26:17 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/20 19:34:21 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_return(char str, int *ncount, va_list arg)
{
	if (str == 'c')
	{
		ft_putchar(*(va_arg(arg, char*)));
		ncount++;
	}
	if(str == 's')
		*ncount += ft_putstr((va_arg(arg, char*)));
	if (str == 'd' || str == 'i')
		*ncount += ft_putnbr(va_arg(arg, int));
	if (str == 'u')
		*ncount += ft_unsignbr(va_arg(arg, unsigned int));	
	if (str == 'x')
		*ncount	+= ft_putnbr_base(va_arg(arg, long), "0123456789abcdef");
	if (str == 'X')
		*ncount += ft_putnbr_base(va_arg(arg, long), "0123456789ABCDEF");
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
	printf(" %d ", count);
	return (count);
}

