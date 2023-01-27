/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:25:32 by luis              #+#    #+#             */
/*   Updated: 2023/01/27 17:40:47 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char w)
{
	int	i;

	i = 0;
	if (w == 'x' || w == 'p')
	{
		if (n >= 16)
			i += ft_puthexa(n / 16, w);
		i += ft_putchar("0123456789abcdef"[n % 16]);
	}
	else if (w == 'X')
		if (n >= 16)
			i += ft_putchar("0123456789abcdef"[n % 16]);
	return (i);
}
