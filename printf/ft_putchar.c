/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:38:46 by dparada           #+#    #+#             */
/*   Updated: 2023/11/27 16:29:06 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);/*
	printf("char");*/
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	printf("string");
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
	int		i;

	/*printf("holu");*/
	i = 1;
	if (ln < 0)
	{
		i++;
		ln *= -1;
	}
	while (ln > 9)
	{
		ln = (ln / 10);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	i;
	int	in;
	char	*s;
	long	ln;

	ln = (long)n;
	i = ft_digit(ln);
	in = i--;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	else if (n > 9)
	{
		s[in--] = ft_putnbr(n / 10);
		ft_putchar(s[i]);
	}
	ft_putchar(n % 10 + '0');
	return (i);
}
