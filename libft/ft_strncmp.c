/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luissabu <luissabu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:27:53 by luisanch          #+#    #+#             */
/*   Updated: 2022/12/21 16:12:36 by luissabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[x] && s1[x] == s2[x] && x < (n -1))
	{
		x++;
	}
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
