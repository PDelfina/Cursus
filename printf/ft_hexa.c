/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:01:06 by dparada           #+#    #+#             */
/*   Updated: 2023/11/28 16:27:12 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexamayus(int nb)
{
	char	*upper;
	int		i;	

	i = 0;
	upper = "0123456789ABCDEF";
	if (nb < 17)
		return (ft_putchar(upper[nb]));
	else if (nb > 15)
	{
		i += ft_hexamayus(nb / 16);
		ft_putchar((upper[nb % 16]) + '0');
	}
	return (i);
}
