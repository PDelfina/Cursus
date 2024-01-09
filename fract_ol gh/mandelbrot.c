/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:05:41 by dparada           #+#    #+#             */
/*   Updated: 2024/01/09 16:06:11 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	mandelbrot_init(t_fractol	*info)
{
	info->mlx = mlx_init(WIDTH, HEIGHT, "42 fract-ol", false);
	if (!info->mlx)
		exit(EXIT_FAILURE);
	info->img = mlx_new_image(info->mlx, WIDTH, HEIGHT);
	if (!info->img)
		exit(EXIT_FAILURE);
	info->max_iter = 200;
	info->min_real = -2.0;
	info->max_real = 1.0;
	info->min_imag = -1.0;
	info->max_imag = 1.0;
}

void	calcular_mandelbrot(t_fractol *info, t_real *c, int x, int y)
{
	double	range_r;
	double	range_i;

	range_r = info->max_real - info->min_real;
	range_i = info->max_imag - info->min_imag;
	c->real = x * (range_r / (WIDTH - 1)) + info->min_real;
	c->imag = info->max_imag - y * (range_i / (HEIGHT - 1));
}

int	mandelbrot_iters(t_fractol *info, t_real *c)
{
	int		iters;
	double	temp;
	t_real	z;

	iters = 0;
	z.real = 0.0;
	z.imag = 0.0;
	while (iters < info->max_iter && ft_mod(z.real, z.imag) <= 4.0)
	{
		temp = (z.real * z.real - z.imag * z.imag) + c->real;
		z.imag = 2.0 * z.real * z.imag + c->imag;
		z.real = temp;
		iters++;
	}
	return (iters);
}

void	mandelbrot(t_fractol *info)
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
			calcular_mandelbrot(info, &c, x, y);
			info->iters = mandelbrot_iters(info, &c);
			if (info->iters == info->max_iter)
				mlx_put_pixel(info->img, x, y, 0x2f2f2fFF);
			else
			{
				info->color = color(info->iters);
				mlx_put_pixel(info->img, x, y, info->color);
			}
			x++;
		}
		x = 0;
		y++;
	}
}
