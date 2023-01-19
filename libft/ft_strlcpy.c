/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:44:58 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/13 15:16:26 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	x;

	x = 0;
	if (dstsize > 0)
	{
		while (src[x] && x < dstsize - 1)
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = 0;
	}
	while (src[x])
	{
		x++;
	}
	return (x);
}
