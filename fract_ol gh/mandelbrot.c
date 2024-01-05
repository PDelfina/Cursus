/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:05:41 by dparada           #+#    #+#             */
/*   Updated: 2024/01/05 11:47:12 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int32_t	color(int iters)
{
	int32_t color;

	if (iters < 10)
		color = 0x8219e8FF;//violeta oscuro
	else if (iters < 30)
		color = 0xFF9944FF;//naranja
	else if (iters < 50)
		color = 0xFFF500FF;//amarillo
	else if (iters < 70)
		color = 0x5fefa8FF;//verde agua
	else if (iters < 90)
		color = 0xa6ef5fFF;//verde
	else if (iters < 110)
		color = 0xef605fFF;//rojo
	else if (iters < 130)
		color = 0xa85fefFF;//violeta
	else if (iters < 150)
		color = 0x5fa6efFF;//azul
	else if (iters < 170)
		color = 0xFF00FFFF;//fuxia
	else
		color = 0x2f2f2fFF;//negro
	return (color);
}

void	calcular_mandelbrot(t_fractol *fractal, t_real *c, int x, int y)
{
	double	range_r;
	double	range_i;

	range_r = fractal->max_real - fractal->min_real;
	range_i = fractal->max_imag - fractal->min_imag;
	c->real = x * (range_r / WIDTH) + fractal->min_real;
	c->imag = y * (range_i / HEIGHT) + fractal->min_imag;
}

int	mandelbrot_iters(t_fractol *fractal, t_real *c)
{
	int		iters;
	double	temp;
	t_real	z;

	iters = 0;
	z.real = 0.0;
	z.imag = 0.0;
	while (iters < fractal->max_iter && \
	(z.real * z.real - z.imag * z.imag <= 4.0))
	{
		temp = (z.real * z.real - z.imag * z.imag) + c->real;
		z.imag = 2.0 * z.real * z.imag + c->imag;
		z.real = temp;
		iters++;
	}
	return (iters);
}

void	mandelbrot(t_fractol *fractal)
{
	double	x;
	double	y;
	t_real	c;

	x = 0.0;
	y = 0.0;
	while (y < HEIGHT)
	{
		while (x < WIDTH)
		{
			calcular_mandelbrot(fractal, &c, x, y);
			fractal->iters = mandelbrot_iters(fractal, &c);
			fractal->color = color(fractal->iters);
			mlx_put_pixel(fractal->img, x, y, fractal->color);
			x++;
		}
		x = 0;
		y++;
	}
}
