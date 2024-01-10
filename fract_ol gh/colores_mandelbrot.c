/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colores_mandelbrot.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/10 14:37:32 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int32_t	color_mandelbrotu(int iters)
{
	int32_t	color;

	if (iters < 2)
		color = 0x000FFFFF;
	else if (iters < 5)
		color = 0x003EFFFF;
	else if (iters < 10)
		color = 0x0055FFFF;
	else if (iters < 20)
		color = 0x007CFFFF;
	else if (iters < 50)
		color = 0x00A6FFFF;
	else if (iters < 90)
		color = 0x00C1FFFF;
	else if (iters < 120)
		color = 0x00CDFFFF;
	else
		color = 0xFFFFFFFF;
	return (color);
}

int32_t	color_mandelbrotd(int iters)
{
	int32_t	color;

	if (iters < 2)
		color = 0xFFFFFFFF;
	else if (iters < 5)
		color = 0x00CDFFFF;
	else if (iters < 10)
		color = 0x00C1FFFF;
	else if (iters < 20)
		color = 0x00A6FFFF;
	else if (iters < 50)
		color = 0x007CFFFF;
	else if (iters < 90)
		color = 0x0055FFFF;
	else if (iters < 120)
		color = 0x003EFFFF;
	else
		color = 0x000FFFFF;
	return (color);
}