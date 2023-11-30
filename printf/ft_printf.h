/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:01:36 by dparada           #+#    #+#             */
/*   Updated: 2023/11/30 12:30:29 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_check(char const *str, va_list parametros, int total);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_hexa(int nb, char word);
int		ft_converthe(int nb, char *base);
int		ft_digit(long n);
int		ft_strlen(char const *s);
char	*ft_convert(long n, char *ptr, size_t i);
char	*ft_itoa(int n);
#endif
