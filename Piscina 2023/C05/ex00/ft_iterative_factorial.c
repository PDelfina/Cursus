/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:52:01 by dparada           #+#    #+#             */
/*   Updated: 2023/07/27 14:31:18 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		i = nb -1;
		while (i > 0)
		{
			nb *= i;
			i--;
		}
		return (nb);
	}
}
/*
int main(void)
{
    int num;

    num = ft_iterative_factorial(5);
    printf("%d", num);
    return (0);
}*/
