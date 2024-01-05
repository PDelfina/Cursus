/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_fractal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:05:41 by dparada           #+#    #+#             */
/*   Updated: 2024/01/05 10:26:11 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	print_fractal(t_fractol *fractal)
{
	if (fractal->set == 1)
		mandelbrot(fractal);
	else if (fractal->set == 2)
		julia(fractal);
	else
	printf("no hay fractal");
}

void	msj_error(void)
{
	ft_printf("---------------------------------------\n");
	ft_printf("Si quiere ejecutar Mandelbrot, escriba:\n");
	ft_printf("./fractol Mandelbrot o ./fractol 1\n");
	ft_printf("Si quiere ejecutar Julia, escriba:\n");
	ft_printf("./fractol Julia x y  o ./fractol 2 x y\n");
	ft_printf("---------------------------------------\n");
}