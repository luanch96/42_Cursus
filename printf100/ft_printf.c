/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:55:37 by luisanch          #+#    #+#             */
/*   Updated: 2023/02/02 16:55:40 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choose_format(char format, va_list arguments)
{
	int	i;

	i = 0;
	if (format == 'c')
		i = ft_putchar(va_arg(arguments, int));
	else if (format == 's')
		i = ft_putstr(va_arg(arguments, char *));
	else if (format == 'p')
		i = ft_putstr("0x") + ft_puthexa(va_arg(arguments, size_t), format);
	else if (format == 'd' || format == 'i')
		i = ft_putint(va_arg(arguments, int));
	else if (format == 'u')
		i = ft_printunsigned(va_arg(arguments, unsigned int));
	else if (format == 'X')
		i = ft_puthexa(va_arg(arguments, unsigned int), format);
	else if (format == 'x' )
		i = ft_puthexa(va_arg(arguments, unsigned int), format);
	else if (format == '%')
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(char const *format, ...)
{
	va_list	arguments;
	int		n;

	if (!format)
		return (0);
	va_start(arguments, format);
	n = 0;
	while (*format)
	{
		if (*format != '%')
			n += ft_putchar(*format);
		else
		{
			format++;
			n += ft_choose_format(*format, arguments);
		}
		format++;
	}
	va_end(arguments);
	return (n);
}
