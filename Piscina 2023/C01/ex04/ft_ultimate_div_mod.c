/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:20:48 by dparada           #+#    #+#             */
/*   Updated: 2023/07/12 15:37:34 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	caja;
	int	caja2;

	caja = *a / *b;
	caja2 = *a % *b;
	*a = caja;
	*b = caja2;
}

/*
int	main(void)
{
	int	uno = 25;
	int	dos = 2;

	ft_ultimate_div_mod(&uno, &dos);
	printf("division: %d\n", uno);
	printf("mod: %d\n", dos);
}
*/
