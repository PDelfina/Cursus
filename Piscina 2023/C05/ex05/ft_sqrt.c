/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:22:47 by dparada           #+#    #+#             */
/*   Updated: 2023/07/27 14:29:15 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	else
	{
		while ((i * i) < nb)
			i++;
		if ((i * i) == nb)
			return (i);
		else
			return (0);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(2147483647));
	return (0);
}*/
