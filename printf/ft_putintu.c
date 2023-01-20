/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putintu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:27:54 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/21 00:08:03 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
/*imprime un numero decimal (base 10), sin signo*/