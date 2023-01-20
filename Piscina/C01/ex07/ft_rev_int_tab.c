/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:22:19 by luisanch          #+#    #+#             */
/*   Updated: 2022/10/24 15:52:50 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	store;
	int	start;

	start = 0;
	while (start <= size -1)
	{
		store = tab[start];
		tab[start] = tab[size -1];
		tab[size -1] = store;
		size--;
		start++;
	}
}
