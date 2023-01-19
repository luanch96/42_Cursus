/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:11:44 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/13 15:06:19 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*destiny;
	const char	*source;
	size_t		x;

	destiny = dst;
	source = src;
	if (!dst && !src)
		return (0);
	x = 0;
	while (x < n)
	{
		destiny[x] = source[x];
		x++;
	}
	return (dst);
}
