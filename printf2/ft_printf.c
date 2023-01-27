/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:56:36 by luis              #+#    #+#             */
/*   Updated: 2023/01/27 17:41:00 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	va_list	arg;
	int		n;

	if (!format)
		return (0);
	va_start(arg, format);
	n = 0;
	while (*format)
	{
		if (*format != '%')
			n = n + ft_putchar(*format);
		if (*format == '%')
		{
			format++;
			n = n + ft_choose_format(arg, *format);
		}
		format++;
	}
	va_end(arg);
	return (n);
}
	