/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luissabu <luissabu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:08:57 by luisanch          #+#    #+#             */
/*   Updated: 2022/12/21 16:03:21 by luissabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	char	*string;

	x = 0;
	if (!s)
	{
		return (NULL);
	}
	string = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!string)
	{
		return (NULL);
	}
	while (s[x] != '\0')
	{
		string[x] = f (x, s[x]);
		x++;
	}
	string[x] = '\0';
	return (string);
}
