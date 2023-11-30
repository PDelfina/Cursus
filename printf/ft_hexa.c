/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:01:06 by dparada           #+#    #+#             */
/*   Updated: 2023/11/29 16:42:47 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_converthe(int nb, char *base)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		if (nb < 17)
			ft_putchar(base[nb]);
		else if (nb > 16)
		{
			i += ft_converthe(nb / 16, base);
			i += ft_converthe(nb % 16, base);
		}
	}
	return (i);
}

int	ft_hexa(int nb, char word)
{
	char	*low;
	char	*upper;
	int		total;

	total = 0;
	upper = "0123456789ABCDEF";
	low = "0123456789abcdef";
	if (word == 'x')
		total += ft_converthe(nb, low);
	else if (word == 'X')
		total += ft_converthe(nb, upper);
	return (total);
}
