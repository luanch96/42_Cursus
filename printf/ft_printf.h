/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:44:35 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/19 16:01:02 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h> 
# include <unistd.h>

int	ft_printf(const char *x, ...);
int	ft_putchar(char c);
int	ft_putstr(char *x);

#endif
