/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:21:37 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/25 12:51:23 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(size_t n, char f)
{
	int	i;

	i = 0;
	if (f == 'x' || f == 'p')
	{
		if (n >= 16)
			i += ft_puthexa(n / 16, f);
		i += ft_putchar("0123456789abcdef"[n % 16]);
	}
	else if (f == 'X')
	{
		if (n >= 16)
		i += ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (i);
}

/*'x = minusculas en mayusculas'*/ /*p->puntero impreso en formato hexadecimal*/