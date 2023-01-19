/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luissabu <luissabu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:04:06 by luissabu          #+#    #+#             */
/*   Updated: 2022/12/21 13:11:37 by luissabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t						x;
	unsigned const char			*string1;
	unsigned const char			*string2;

	x = 0;
	string1 = s1;
	string2 = s2;
	while (x < n)
	{
		if (string1[x] != string2[x])
			return (string1[x] - string2[x]);
		x++;
	}
	return (0);
}

/* The memcmp() function compares byte string s1 
against byte string s2.  Both strings are assumed
     to be n bytes long.*/