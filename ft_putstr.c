/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:47:36 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/19 11:42:32 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			write(1, &s[i++], 1);
	}
	return (i);
}
