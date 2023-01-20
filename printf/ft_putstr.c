/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:05:49 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/21 00:12:31 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_putstr(char *x)
{
	int	cont;

	cont = 0;
	while (x[cont])
	{
		write(1, &x[cont], 1);
		cont++;
	}
	return (cont);
}

/*te retorna un string*/