/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:27:38 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/20 19:33:24 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
void	ft_unsignbr(unsigned int nb, int fd)
{
	
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = nb * -1;
		}
		if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fd);
		}
		ft_putchar_fd((nb % 10) + '0', fd);
}
