/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisanch <luisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:55:47 by luisanch          #+#    #+#             */
/*   Updated: 2023/02/02 16:55:49 by luisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putint(int n);
int	ft_printunsigned(unsigned int n);
int	ft_puthexa(size_t n, char w);

#endif
