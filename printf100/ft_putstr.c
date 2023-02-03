/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:56:29 by luisanch          #+#    #+#             */
/*   Updated: 2023/02/02 16:56:32 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[cont])
	{
		write(1, &str[cont], 1);
		cont++;
	}
	return (cont);
}
