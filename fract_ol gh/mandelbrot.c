/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:05:41 by dparada           #+#    #+#             */
/*   Updated: 2024/01/10 14:38:46 by dparada          ###   ########.fr       */
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

void	calcular_mandelbrot(t_fractol *info, t_real *c)
{
	double	range_r;
	double	range_i;

	range_r = info->max_real - info->min_real;
	range_i = info->max_imag - info->min_imag;
	c->real = info->x * (range_r / WIDTH) + info->min_real;
	c->imag = info->y * (range_i / HEIGHT) + info->min_imag;
}

int	mandelbrot_iters(t_fractol *info, t_real *c)
{
	int		iters;
	double	temp;

	iters = 0;
	info->z_i = 0.0;
	info->z_r = 0.0;
	while (iters < info->max_iter && ft_mod(info->z_r, info->z_i) <= 4.0)
	{
		temp = (info->z_r * info->z_r - info->z_i * info->z_i) + c->real;
		info->z_i = 2.0 * info->z_r * info->z_i + c->imag;
		info->z_r = temp;
		iters++;
	}
	return (iters);
}

void	mandelbrot(t_fractol *info)
{
	t_real	c;

	info->x = 0;
	info->y = 0;
	while (info->y < HEIGHT)
	{
		while (info->x < WIDTH)
		{
			calcular_mandelbrot(info, &c);
			info->iters = mandelbrot_iters(info, &c);
			if (info->iters == info->max_iter)
				info->color = 0x2f2f2fFF;
			else
				info->color = color_mandelbrotd(info->iters);
			mlx_put_pixel(info->img, info->x, info->y, info->color);
			info->x++;
		}
		info->x = 0;
		info->y++;
	}
}
