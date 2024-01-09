/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:44:14 by dparada           #+#    #+#             */
/*   Updated: 2024/01/09 15:40:08 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	main(int argc, char **argv)
{
	t_fractol	info;

	// printf("%s %s\n", argv[0], argv[1]);
	if (check_fractal(argc, argv, &info) == 0)
		return (EXIT_FAILURE);
	print_fractal(&info, argv);
	if (mlx_image_to_window(info.mlx, info.img, 0, 0) < 0)
		exit(EXIT_FAILURE);
	mlx_loop_hook(info.mlx, ft_hook, &info);
	mlx_loop(info.mlx);
	mlx_terminate(info.mlx);
	return (EXIT_SUCCESS);
}
