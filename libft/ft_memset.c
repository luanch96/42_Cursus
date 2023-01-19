/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:11:52 by luisanch          #+#    #+#             */
/*   Updated: 2022/12/20 14:55:23 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *b, int c, size_t lenght)
{
	char	*string;
	size_t	x;

	x = 0;
	string = b;
	while (x < lenght)
	{
		string[x] = c;
		x++;
	}
	return (string);
}

/*
int main ()
{
	char str[50];
	
	strcpy(str,"Hola mundo");
	puts(str);
	
	ft_memset(str,'$',5);
	puts(str);
}*/
