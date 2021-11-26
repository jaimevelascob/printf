/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvelasco <jvelasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:26:20 by jvelasco          #+#    #+#             */
/*   Updated: 2021/11/26 12:58:29 by jvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *, ...);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr_division(va_list arg);
int	ft_putnbr_base(unsigned long long nbr, char *base);
int	ft_unsignbr(unsigned int nb);
#endif
