/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:24:01 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/16 12:44:08 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *large, const char *small, size_t len)
{
	size_t	i;

	if (!*small)
	{
		return ((char *)large);
	}
	while (*large && len--)
	{
		i = 0;
		while (large[i] == small[i])
		{
			if (!small[++i])
			{
				return ((char *)large);
			}
			if (i > len)
			{
				return (0);
			}
		}
		large++;
	}
	return (0);
}
