/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:27:21 by luis              #+#    #+#             */
/*   Updated: 2023/01/27 17:41:07 by luis             ###   ########.fr       */
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

int	ft_putintu(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += ft_putintu(n / 10);
	}
	i += ft_putchar(n % 10 + '0');
	return (i);
}
