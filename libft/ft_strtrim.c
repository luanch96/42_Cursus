/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:37:26 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/16 15:07:51 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;

	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	x = ft_strlen(s1);
	while (x != 0 && ft_strchr(set, s1[x]))
	{
		x--;
	}
	return (ft_substr(s1, 0, x + 1));
}

/*mientras estemos en el hueco de la memoria s1 y ft sea 
capaz de encontrar char set en el */
/*
int main()
{
	char s 
	}*/