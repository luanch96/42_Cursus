/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:49:38 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/27 12:03:20 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char w, va_list args)
{
	int	i;

	i = 0;
	if (w == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (w == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (w == 'p')
		i = ft_putstr("0x") + ft_puthexa(va_arg(args, size_t), w);
	else if (w == 'd' || w == 'i')
		i = ft_putintu(va_arg(args, int));
	else if (w == 'u')
		i = ft_putintu(va_arg(args, unsigned int));
	else if (w == 'x' || w == 'X')
		i = ft_puthexa(va_arg(args, unsigned int), w);
	else if (w == '%')
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(const char *x, ...)
{
	va_list	args;
	int		n;

	if (!x)
		return (0);
	va_start(args, x);
	n = 0;
	while (*x)
	{
		if (*x != '%')
			n += ft_putchar(x[0]);
		else
		{
			x++;
			n += ft_format (x[0], args);
		}
		x++;
	}
	va_end(args);
	return (n);
}	
