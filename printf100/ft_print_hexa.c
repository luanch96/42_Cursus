/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:55:23 by luisanch          #+#    #+#             */
/*   Updated: 2023/02/02 16:55:28 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(size_t n, char w)
{
	int	i;

	i = 0;
	if (w == 'X')
	{
		if (n >= 16)
			i += ft_puthexa(n / 16, w);
		i += ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	else if (w == 'x' || w == 'p')
	{
		if (n >= 16)
			i += ft_puthexa(n / 16, w);
		i += ft_putchar("0123456789abcdef"[n % 16]);
	}
	return (i);
}
