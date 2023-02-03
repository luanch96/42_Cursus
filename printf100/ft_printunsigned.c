/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:56:00 by luisanch          #+#    #+#             */
/*   Updated: 2023/02/02 16:56:03 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += ft_printunsigned(n / 10);
	}
	i += ft_putchar(n % 10 + '0');
	return (i);
}
