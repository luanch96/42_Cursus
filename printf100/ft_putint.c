/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:56:22 by luisanch          #+#    #+#             */
/*   Updated: 2023/02/02 16:56:24 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int n)
{
	unsigned int	number;
	int				i;

	i = 0;
	if (n < 0)
	{
		i = ft_putchar('-');
		number = n * -1;
	}
	else
	{
		number = n;
	}
	if (number >= 10)
	{
		i += ft_putint(number / 10);
	}
	i += ft_putchar(number % 10 + '0');
	return (i);
}
