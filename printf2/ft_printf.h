/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:48:29 by luis              #+#    #+#             */
/*   Updated: 2023/01/27 17:39:45 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<unistd.h>
# include	<stdio.h>
# include	<stdarg.h>
# include	<stdlib.h>
# include	<stdarg.h>
# include	<stddef.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *x);
int	ft_putint(int n);
int	ft_putintu(unsigned int n);
int	ft_puthexa(unsigned long n, char w);
int	ft_choose_format(va_list arg, char format);

#endif
