/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:14:28 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/20 17:52:37 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_base(long nbr, char *base)
{
	int	i;
	int	start;
	long	n[100];

	i = 0;
	if (nbr == 0)
		write (1,"0", 1);
	while (nbr)
	{
		n[i++] = nbr % 16;
		nbr /= 16;
	}
	start = i;
	while (i > 0)
		ft_putchar(base[n[--i]]);
	return (start);
}
