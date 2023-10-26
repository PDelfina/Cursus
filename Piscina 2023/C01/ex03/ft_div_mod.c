/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:32:46 by dparada           #+#    #+#             */
/*   Updated: 2023/07/13 17:41:28 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	c;
	int	d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}

/*
int	main(void)
{
	int	num1;
	int	num2;

	ft_div_mod (5, 2, &num1, &num2);
	printf("div es: %d\n", num1);
	printf("mod es: %d\n", num2);
}
*/
