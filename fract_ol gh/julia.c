/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:05:41 by dparada           #+#    #+#             */
/*   Updated: 2024/01/09 16:07:14 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	julia_init(t_fractol *info, char **argv)
{
	info->mlx = mlx_init(WIDTH, HEIGHT, "42 fract-ol", false);
	if (!info->mlx)
		exit(EXIT_FAILURE);
	info->img = mlx_new_image(info->mlx, WIDTH, HEIGHT);
	if (!info->img)
		exit(EXIT_FAILURE);
	info->max_iter = 1000;
	info->min_real = -2.0;
	info->max_real = 1.0;
	info->min_imag = -1.0;
	info->max_imag = 1.0;
	info->julia_real = ft_fatoi(0, 0.0, 1.0, argv[2]);
	info->julia_imag = ft_fatoi(0, 0.0, 1.0, argv[3]);
}

void	calcular_julia(t_fractol *info)
{
	double	range_r;
	double	range_i;

	range_r = info->max_real - info->min_real;
	range_i = info->max_imag - info->min_imag;
	info->z_r = info->min_real + info->x * (range_r / (WIDTH - 1));
	info->z_i = info->max_imag - info->y * (range_i / (HEIGHT - 1));
}

int	julia_iters(t_fractol *info)
{
	int		iters;
	double	temp;

	iters = 0;
	while (iters < info->max_iter && ft_mod(info->z_r, info->z_i) <= 4.0)
	{
		temp = (info->z_r * info->z_r - info->z_i * info->z_i) + info->julia_real;
		info->z_i = 2.0 * info->z_r * info->z_i + info->julia_imag;
		info->z_r = temp;
		iters++;
	}
	return (iters);
}

void	julia(t_fractol *info)
{
	info->x = 0;
	info->y = 0;
	while (info->y < HEIGHT)
	{
		while (info->x < WIDTH)
		{
			calcular_julia(info);
			 info->iters = julia_iters(info);
			if (info->iters == info->max_iter)
				mlx_put_pixel(info->img, info->x, info->y, 0x2f2f2fFF);
			else
			{
				info->color = color(info->iters);
				mlx_put_pixel(info->img, info->x, info->y, info->color);
			}
			info->x++;
		}
		info->x = 0;
		info->y++;
	}
}