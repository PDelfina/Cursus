/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:38:46 by dparada           #+#    #+#             */
/*   Updated: 2023/11/28 16:23:17 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (s[i])
		i++;
	write(1, s, i);
	return (i);
}

int	ft_digit(long ln)
{
	int	i;

	i = 1;
	if (ln < 0)
	{
		i++;
		ln *= -1;
	}
	while (ln > 9)
	{
		i++;
		ln /= 10;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int		i;
	long	ln;

	ln = (long)n;
	i = ft_digit(ln);
	if (ln < 0)
	{
		ft_putchar('-');
		ft_putnbr(-ln);
	}
	else if (ln > 9)
		ft_putnbr(ln / 10);
	ft_putchar((ln % 10) + '0');
	return (i);
}
