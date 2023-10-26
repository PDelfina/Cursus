/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:10:31 by dparada           #+#    #+#             */
/*   Updated: 2023/07/13 13:57:09 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	i;
	int	ulti;

	cont = 0;
	i = size - 1;
	while (cont < i)
	{
		ulti = tab[cont];
		tab[cont] = tab[i];
		tab[i] = ulti;
		cont++;
		i--;
	}
}
/*
int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	int	num = 0;
	int	numa = sizeof(array) / sizeof(array[0]);

	while (num < numa)
	{
		printf("%d", array[num]);
		num++;
	}
	ft_rev_int_tab(array, numa);
	num = 0;
	printf("\n");
	while (num < numa)
	{
		printf("%d", array[num]);
		num++;
	}
}*/
