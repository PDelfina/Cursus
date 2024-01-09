/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_fractal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:05:41 by dparada           #+#    #+#             */
/*   Updated: 2024/01/09 16:09:19 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	print_fractal(t_fractol *info, char **argv)
{
	if (info->set == 1)
	{
		mandelbrot_init(info);
		mandelbrot(info);
	}
	else if (info->set == 2)
	{
		julia_init(info, argv);	
		julia(info);
	}
	else
		printf("no hay fractal");
}

int	check_fractal(int argc, char **argv, t_fractol *info)
{
	if (argc > 1)
	{
		if ((ft_strcmp(argv[1], "Mandelbrot") || argv[1][0] == '1') \
		&& argc == 2)
			info->set = 1;
		else if ((ft_strcmp(argv[1], "Julia") || argv[1][0] == '2'))
			info->set = 2;
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