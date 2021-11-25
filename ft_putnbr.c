/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:27:38 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/20 16:39:07 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	char	*new;
	long	num;
	int	i;

	num = ft_strlen(new = ft_itoa(nb));
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		i = 0;
		while (nb)
		{
			new[i] = (nb % 10) + '0';
			nb /= 10;
			i++;
		}
		while(i > 0)
			ft_putchar(new[--i]);
	}
	return (num);
}
