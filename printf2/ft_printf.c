/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:19:05 by luis              #+#    #+#             */
/*   Updated: 2023/01/25 13:19:59 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char w, va_list arg)
{
	int	i;

	i = 0;
	if (w == 'c')
		i = ft_putchar(va_arg(arg, int));
	else if (w == 's')
		i = ft_putstr(va_arg(arg, char *));
	else if (w == 'p')
		i = ft_putstr("0x") + ft_puthexa(va_arg(arg, size_t), w);
	else if (w == 'd' || w == 'i')
		i = ft_putintu(va_arg(arg, int));
	else if (w == 'u')
		i = ft_putintu(va_arg(arg, unsigned int));
	else if (w == 'x' || w == 'X')
		i = ft_puthexa(va_arg(arg, unsigned int), w);
	else if (w == '%')
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(const char *x, ...)
{
	va_list	arg;
	int		n;

	if (!x)
		return (0);
	va_start(arg, x);
	n = 0;
	while (*x)
	{
		if (*x != '%')
			n += ft_putchar(x[0]);
		else
		{
			x++;
			n += ft_format (x[0], arg);
		}
		x++;
	}
	va_end(arg);
	return (n);
}	
