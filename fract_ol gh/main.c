/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:44:14 by dparada           #+#    #+#             */
/*   Updated: 2024/01/05 11:00:56 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	main(int argc, char **argv)
{
	t_fractol	fractal;
	t_real		con;

	if (check_fractal(argc, argv, &fractal, &con) == 0)
		return (EXIT_FAILURE);
	declaring(&fractal);
	print_fractal(&fractal);
	if (mlx_image_to_window(fractal.mlx, fractal.img, 0, 0) < 0)
		exit(EXIT_FAILURE);
	mlx_loop_hook(fractal.mlx, ft_hook, fractal.mlx);
	mlx_loop(fractal.mlx);
	mlx_terminate(fractal.mlx);
	return (EXIT_SUCCESS);
}
