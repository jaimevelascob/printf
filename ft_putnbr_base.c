/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:14:28 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/25 16:52:37 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	int			i;
	int			start;
	long		n[100];
	int			size;

	i = 0;
	size = ft_strlen(base);
	if (nbr == 0)
	{
		write (1, "0", 1);
		return (0);
	}
		if (nbr < 0) {
		ft_putchar('-');
		nbr *= -1;
	}
	while (nbr)
	{
		n[i++] = nbr % size;
		nbr /= size;
	}
	start = i;
	while (i > 0)
		ft_putchar(base[n[--i]]);
	return (start);
}
