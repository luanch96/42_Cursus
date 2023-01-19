/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luissabu <luissabu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:02:37 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/13 13:42:28 by luissabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	x;
	char			*string1;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	i = 0;
	x = 0;
	string1 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!string1)
		return (NULL);
	while (s1[i])
	{
		string1[i] = s1[i];
		i++;
	}
	while (s2[x])
	{
		string1[i] = s2[x];
		i++;
		x++;
	}	
	string1[i] = '\0';
	return (string1);
}
