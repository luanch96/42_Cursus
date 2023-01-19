/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luissabu <luissabu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:50:16 by luisanch          #+#    #+#             */
/*   Updated: 2022/12/21 16:24:08 by luissabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	x;

	x = ft_strlen(s) + 1;
	while (x--)
	{
		if (s[x] == (char)c)
		{
			return ((char *)&s[x]);
		}
	}
	return (NULL);
}
