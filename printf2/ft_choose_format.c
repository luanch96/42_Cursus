/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choose_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:11:27 by luis              #+#    #+#             */
/*   Updated: 2023/01/27 17:40:40 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choose_format(va_list arg, char format)
{
	int	i;

	i = 0;
	if (format == 'c')
		i = ft_putchar(va_arg(arg, int));
	else if (format == 's')
		i = ft_putstr(va_arg(arg, char *));
	else if (format == 'p')
		i = ft_putstr("0x") + ft_puthexa(va_arg(arg, size_t), format);
	else if (format == 'd' || format == 'i')
		i = ft_putint(va_arg(arg, int));
	else if (format == 'u')
		i = ft_putintu(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		i = ft_puthexa(va_arg(arg, unsigned int), format);
	else if (format == '%')
		i = ft_putchar('%');
	return (i);
}
