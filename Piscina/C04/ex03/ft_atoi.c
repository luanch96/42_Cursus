/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:00:42 by luisanch          #+#    #+#             */
/*   Updated: 2022/11/02 12:29:48 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	(char *str, int *ptr_x)
{
	int	count;
	int	x;

	x = 0;
	count = 1;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	while ((str[x] == 43 || str[x] == 45))
	{
		if (str[x] == 45)
			count = count * (-1);
		x++;
	}
	*ptr_x = x;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	x;

	result = 0;
	sign = ft_space(str, &x);
	while (str[x] && str[x] >= 48 && str[x] <= 57)
	{
		result = result * 10;
		result = result + (str[x] - 48);
		x++;
	}
	result = result * sign;
	return (result);
}
