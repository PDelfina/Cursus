/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colores.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/29 16:29:10 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	colores_blu(t_color *rango)
{
	rango->r = 0;
	rango->g = 0;
	rango->b = 255;
	rango->iters_r = 10;
	rango->iters_g = 10;
	rango->iters_b = 0;
}

int32_t	coloresuno(t_color *rango, int iters)
{
	int	i;

	i = 0;
	rango->r = 0;
	rango->g = 0;
	rango->b = 255;
	while (i <= iters && \
	(rango->r <= 255 && rango->g <= 255 && rango->b <= 255))
	{
		rango->r += 10;
		rango->g += 10;
		rango->b += 0;
		i += 2;
	}
	return (get_color(rango->r, rango->g, rango->b, 255));
}
