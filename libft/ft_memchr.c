/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luissabu <luissabu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:43:39 by luisanch          #+#    #+#             */
/*   Updated: 2022/12/21 13:08:18 by luissabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				a;
	const char			*string;

	a = 0;
	string = s;
	while (a < n)
	{
		if (string[a] == (char)c)
		{
			return ((char *)(string + a));
		}
		a++;
	}
	return (NULL);
}
