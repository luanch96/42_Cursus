/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:20:42 by luis              #+#    #+#             */
/*   Updated: 2023/01/25 13:20:45 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h> 
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int	ft_printf(const char *x, ...);
int	ft_putchar(char c);
int	ft_putstr(char *x);
int	ft_puthexa(size_t n, char f);
int	ft_format(char w, va_list arg);
int	ft_putintu(unsigned int n);
int	ft_putint(int n);

#endif