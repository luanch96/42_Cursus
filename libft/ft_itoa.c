/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luissabu <luissabu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:05:48 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/13 14:18:16 by luissabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	lenofnum(long num)
{
	unsigned int	lenght;

	lenght = 0;
	if (num < 0)
	{
		num *= -1;
		lenght++;
	}
	if (num == 0)
	{
		return (1);
	}
	while (num > 0)
	{
		num /= 10;
		lenght++;
	}
	return (lenght);
}

char	*newstring(char *str, long num, unsigned int len)
{
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (num < 0)
		num *= -1;
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (str[0] == '0')
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	lenght;
	char			*str;

	lenght = lenofnum(n);
	str = ft_calloc(lenght + 1, sizeof(char));
	if (str)
	{
		str = newstring(str, n, lenght);
		return (str);
	}
	return (NULL);
}
