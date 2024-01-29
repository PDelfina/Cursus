/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_fractal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:05:41 by dparada           #+#    #+#             */
/*   Updated: 2024/01/26 12:50:33 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	pick_fractal(t_fractol *info)
{
	if (info->set == 1)
		mandelbrot(info);
	else if (info->set == 2)
		julia(info);
	else if (info->set == 3)
		burningship(info);
}

int	check_fractal(int argc, char **argv, t_fractol *info)
{
	if (argc > 1)
	{
		if ((ft_strcmp(argv[1], "Mandelbrot") || argv[1][0] == '1') \
		&& argc == 2)
			info->set = 1;
		else if ((ft_strcmp(argv[1], "Julia") || argv[1][0] == '2'))
		{
			julia_args(info);
			info->set = 2;
		}
		else if ((ft_strcmp(argv[1], "Burningship") || argv[1][0] == '3') \
		&& argc == 2)
			info->set = 3;
		else
		{
			msj_error();
			return (0);
		}
	}
	else
	{
		msj_error();
		return (0);
	}
	return (1);
}

void	julia_args(t_fractol *info)
{
	info->min_real = -1.5;
	info->max_real = 1.5;
	info->min_imag = -1.5;
	info->max_imag = 1.5;
	if (info->argv[2] && info->argv[3])
	{
		info->j_real = ft_fatoi(0, 0.0, 1.0, info->argv[2]);
		info->j_imag = ft_fatoi(0, 0.0, 1.0, info->argv[3]);
	}
	else
	{
		info->j_real = 0.35;
		info->j_imag = 0.35;
	}
}
