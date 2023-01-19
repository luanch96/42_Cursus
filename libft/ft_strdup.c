/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:32:56 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/16 15:07:20 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string1)
{
	int		x;
	int		lenght;
	char	*string2;

	lenght = ft_strlen(string1);
	string2 = (char *)malloc(sizeof(*string2) * (lenght + 1));
	if (!string2)
		return (NULL);
	x = 0;
	while (x < lenght)
	{
		string2[x] = string1[x];
		x++;
	}
	(string2[x] = '\0');
	return (string2);
}

/*while (s1[lenght])
		lenght++; */
/*The  strdup() function returns a pointer to a new string 
which is a duplicate
 of the string s.  Memory
for the new string is obtained with malloc(3), and can be freed with free(3).*/