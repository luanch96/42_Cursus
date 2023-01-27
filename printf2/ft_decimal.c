/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:38:01 by luis              #+#    #+#             */
/*   Updated: 2023/01/25 13:14:24 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int n)
{
	unsigned int		num;
	int					i;

	i = 0;
	if (n < 0)
	{
		i = ft_putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num >= 10)
	{
		i += ft_putint(num / 10);
	}
	i += ft_putchar(num % 10 + '0');
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

/*Imprime numero decimal en base a 10(tambien un entero)*/
