/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luissabu <luissabu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:11:55 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/04 18:49:44 by luissabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*st;

	st = (char *)s;
	while (*st != (const char)c)
	{
		if (!*st)
		{
			return (0);
		}
		st++;
	}
	return (st);
}
