/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_putnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:30:32 by luisanch          #+#    #+#             */
/*   Updated: 2022/10/20 17:33:06 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(int num)
{
	int		aux1;
	int		aux2;
	char	a;
	char	b;

	aux1 = num / 10;
	a = aux1 + '0';
	write(1, &a, 1);
	aux2 = num % 10;
	b = aux2 + '0';
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x);
			write(1, " ", 1);
			ft_putchar(y);
			if (!(x == 98))
				write (1, ",", 1);
			if (! (x == 98))
				write (1, " ", 1);
			++y;
		}
		++x;
	}
}
