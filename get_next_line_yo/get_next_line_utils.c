/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:17:39 by luisanch          #+#    #+#             */
/*   Updated: 2023/03/14 12:49:17 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (*s != (char)c)
	{
		if (!*s)
		{
			return (0);
		}
		s++;
	}
	return (s);
}

char	*ft_strjoin(char *str1, char *str2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!str1 || !str2)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(str1) + ft_strlen(str2)) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (str1)
		while (str1[i] != '\0')
		{
			str[i] = str1[i];
			i++;
		}	
		while (str2[j] != '\0')
			str[i++] = str2[j++];
		str[ft_strlen(str1) + ft_strlen(str2)] = '\0';
		free(str1);
	return (str);
}

char	*ft_strdup(char *string1)
{
	size_t		x;
	size_t		lenght;
	char		*string2;

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
