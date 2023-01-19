/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luissabu <luissabu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:15:33 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/12 14:43:13 by luissabu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	char	*memory;
	size_t	x;

	x = 0;
	memory = malloc(count * size);
	if (memory == NULL)
	{
		return (0);
	}
	while (x < count * size)
	{
		memory[x] = 0;
		x++;
	}
	return (memory);
}
