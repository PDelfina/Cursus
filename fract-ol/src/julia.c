/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:05:41 by dparada           #+#    #+#             */
/*   Updated: 2024/01/26 12:45:35 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	julia_iters(t_fractol *info)
{
	int		iters;
	double	temp;

	iters = 0;
	while (iters < info->max_iter && (ft_mod(info->z_r, info->z_i) <= 4.0))
	{
		temp = (info->z_r * info->z_r - info->z_i * info->z_i) \
		+ info->j_real;
		info->z_i = 2.0 * info->z_r * info->z_i + info->j_imag;
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
			calcular_complex(info);
			info->iters = julia_iters(info);
			printimg(info);
			info->x++;
		}
		info->x = 0;
		info->y++;
	}
}