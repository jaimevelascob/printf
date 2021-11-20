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
		ft_putchar_fd(*(va_arg(arg, char*)), 1);
	if(str == 's')
		ft_putstr_fd((va_arg(arg, char*)), 1);
	if (str == 'd' || str == 'i')
		ft_putnbr_fd(va_arg(arg, int), 1);
	if (str == 'u')
		ft_unsignbr(va_arg(arg, unsigned int), 1);
	if (str == 'x')
		ft_putnbr_base(va_arg(arg, long), "0123456789abcdef");
	if (str == 'X')
		ft_putnbr_base(va_arg(arg, long), "0123456789ABCDEF");
	return (*ncount);
}
int ft_printf(const char *str, ...)
{
	va_list arg;
	char *newstr;
	int	i;
	int	count;

	newstr = (char *)str;
	count = 0;
	i = 0;
	va_start(arg, str);
	while(newstr[i])
	{
		if(newstr[i] != '%')
		{
			ft_putchar_fd(str[i],1);
			count++;
		}
		else
		{
			i++;
			if (str[i] != '%')
				ft_print_return(newstr[i], &count, arg);
		else
				write(1, "%", 1);
		}
		i++;
	}
	va_end(arg);
	return (count);
}

