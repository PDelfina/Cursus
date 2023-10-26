/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:30:27 by dparada           #+#    #+#             */
/*   Updated: 2023/07/27 14:32:49 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	j;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		j = nb;
		while (1 < power)
		{
			nb *= j;
			power--;
		}
		return (nb);
	}
}
/*
int main(void)
{
	printf("%d", ft_iterative_power(1, 1));
	return (0);
}*/
