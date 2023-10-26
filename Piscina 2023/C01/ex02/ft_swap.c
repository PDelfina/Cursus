/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:44:13 by dparada           #+#    #+#             */
/*   Updated: 2023/07/13 13:49:22 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	caja;

	caja = *a;
	*a = *b;
	*b = caja;
}
/*
int	main(void)
{
	int	punt1 = 23;
	int	punt2 = 42;

	printf("El valor original de A es: %d\n", punt1);
	printf("El valor original de B es: %d\n", punt2);
	ft_swap(&punt1, &punt2);
	printf("El valor de A es: %d\n", punt);
	printf("El valor de B es: %d\n", punt2);
}*/
