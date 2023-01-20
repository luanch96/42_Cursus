/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:22:01 by luisanch          #+#    #+#             */
/*   Updated: 2022/11/02 12:36:01 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_base_recursivity(int nbr, char *base, int size)
{
	unsigned int	number;
	char			a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		number = nbr * (-1);
	}
	else
		number = nbr;
	if (number >= (unsigned int)size)
		ft_base_recursivity(number / size, base, size);
	a = base[number % size];
	write(1, &a, 1);
}

int	ft_hexa_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (ft_hexa_base(base) == 1)
	{
		while (base[i] != '\0')
		{
			i++;
		}
		ft_base_recursivity(nbr, base, i);
	}
}
