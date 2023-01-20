/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:44:35 by luisanch          #+#    #+#             */
/*   Updated: 2023/01/20 17:49:02 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h> 
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *x, ...);
int	ft_putchar(char c);
int	ft_putstr(char *x);
int	ft_puthexa(size_t n, char f);
int ft_chooseformat(char w, va_list arg);

#endif
