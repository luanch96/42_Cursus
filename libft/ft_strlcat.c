/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:30:18 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/16 12:22:50 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			src_len;
	size_t			dst_len;
	unsigned int	x;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (!size)
		return (src_len);
	if (size < dst_len)
	{
		return (src_len + size);
	}
	x = 0;
	while (src[x] && x < size - dst_len)
	{
		dst[x + dst_len] = src[x];
		x++;
	}
	if (x == size - dst_len && size > dst_len)
	{
		x--;
	}
	dst[x + dst_len] = '\0';
	return (dst_len + src_len);
}

/*al final > dst[x + dst_len]*/
/*soi me he pasado le quito 1*/