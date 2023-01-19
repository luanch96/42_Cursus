/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:28:28 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/16 15:50:50 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t lenght)
{
	char	*dest;	

	if (start > ft_strlen(s))
	{
		dest = (char *)malloc(sizeof(char) * 1);
		if (!dest)
		{
			return (NULL);
		}
		*dest = '\0';
		return (dest);
	}
	if (lenght > ft_strlen(s) - start)
	{
		lenght = ft_strlen(s) - start;
	}
	dest = (char *)malloc(sizeof(char) * lenght + 1);
	if (!dest)
	{
		return (0);
	}
	ft_strlcpy(dest, &s[start], lenght + 1);
	return (dest);
}

/*reserva con Malloc.
y
 dev
uelve una substring de*/

/* > la substring empieza desde el indice start.
-copias en x, todo lo de todo lo que haya en s
 desde la posicion de start hasta len +1 
> tiene una longitud maxima de 'len'*/

/*int main()
{c
	printf("%s",ft_substr("hola" , 2,1));
	return (0);
}*/
