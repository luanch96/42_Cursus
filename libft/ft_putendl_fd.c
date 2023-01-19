/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:10:44 by luisanch          #+#    #+#             */
/*   Updated: 2022/12/20 13:51:47 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	lenght;
	unsigned int	x;

	x = 0;
	lenght = ft_strlen(s);
	while (x < lenght)
	{
		write(fd, &s[x], 1);
		x++;
	}
	write(fd, "\n", 1);
}
