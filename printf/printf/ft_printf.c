/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:49:38 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/19 17:27:04 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *x, ...)
{
	va_list arg; /*es una lista de argumentos*/
	int n;

	if (!x)
		return (0);
	va_start(arg, x);
	n = 0;
	while (*x)
	{
		if (*x != '%')
			n += ft_putchar(*x);
		else
		{
			x++;
			n += ft_chooseformat (*x, arg);
		}
		x++;
	}
	va_end(arg);
	return (n);
}	

/*printf => print formatted*/
/* imprime un  mensaje por pantalla utilizando una cadena de formato */