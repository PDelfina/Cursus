/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:05:41 by dparada           #+#    #+#             */
/*   Updated: 2024/01/29 11:29:37 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	calcular_complex(t_fractol *info)
{
	double	range_r;
	double	range_i;

	range_r = info->max_real - info->min_real;
	range_i = info->max_imag - info->min_imag;
	if (info->set == 1 || info->set == 3)
	{
		info->c_r = info->min_real + (info->x * info->shift);
		info->c_i = info->max_imag - (info->y * info->shift);
	}
	else if (info->set == 2)
	{
		info->z_r = info->min_real + (info->x * info->shift);
		info->z_i = info->max_imag - (info->y * info->shift);
	}
}

double	ft_esc(double coor, double new_min, double new_max, double old_max)
{
	return ((new_max - new_min) * coor / old_max + new_min);
}

double	ft_esc_dos(double coor, double new_min, double new_max)
{
	return ((new_max - new_min) * coor + new_min);
}

int	mandelbrot_iters(t_fractol *info)
{
	int		iters;
	double	temp;

	iters = 0;
	info->z_i = 0.0;
	info->z_r = 0.0;
	while (iters < info->max_iter && ft_mod(info->z_r, info->z_i) <= 4.0)
	{
		temp = (info->z_r * info->z_r - info->z_i * info->z_i) + info->c_r;
		info->z_i = 2.0 * info->z_r * info->z_i + info->c_i;
		info->z_r = temp;
		iters++;
	}
	return (iters);
}

void	mandelbrot(t_fractol *info)
{
	info->x = 0;
	info->y = 0;
	while (info->y < HEIGHT)
	{
		while (info->x < WIDTH)
		{
			calcular_complex(info);
			info->iters = mandelbrot_iters(info);
			printimg(info);
			info->x++;
		}
		info->x = 0;
		info->y++;
	}
}
