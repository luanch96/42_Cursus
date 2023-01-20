/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:40:49 by luisanch          #+#    #+#             */
/*   Updated: 2022/10/24 16:12:32 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	becompared;
	int	store;
	int	move;

	becompared = 0;
	while (becompared < size)
	{
		move = 0;
		while (move < size)
		{
			if (tab [move] > tab [becompared])
			{
				store = tab[move];
				tab[move] = tab[becompared];
				tab[becompared] = store;
			}
			move++;
		}
		becompared++;
	}
}
