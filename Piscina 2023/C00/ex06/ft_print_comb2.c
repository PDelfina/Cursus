/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:17:51 by dparada           #+#    #+#             */
/*   Updated: 2023/07/10 18:08:21 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = a + 1;
	while (a <= 98 && b <= 99)
	{
		ft_putchar (a / 10 + '0');
		ft_putchar (a % 10 + '0');
		ft_putchar (' ');
		ft_putchar (b / 10 + '0');
		ft_putchar (b % 10 + '0');
		if (!(a == 98 && b == 99))
			write(1, ", ", 2);
		b++;
		if (b > 99)
		{
			a++;
			b = a + 1;
		}
	}
}
