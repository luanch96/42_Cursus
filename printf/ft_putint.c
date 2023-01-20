/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:38:01 by luis              #+#    #+#             */
/*   Updated: 2023/01/20 23:54:55 by luis             ###   ########.fr       */
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
