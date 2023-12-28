/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:44:14 by dparada           #+#    #+#             */
/*   Updated: 2023/12/28 09:38:04 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/LIBFT/libft.h"
#include "../lib/MLX42/include/MLX42/MLX42.h"
#define WIDTH 1200
#define HEIGHT 800

static void	ft_error(void)
{
	fprintf(stderr, "%s", mlx_strerror(mlx_errno));
	exit(EXIT_FAILURE);
}

static void	ft_hook(void *param)
{
	const mlx_t	*mlx;

	mlx = param;
	/*ft_printf("WIDTH: %d | HEIGHT: %d\n", mlx->width, mlx->height);*/
}

int32_t	main(void)
{
	mlx_t		*mlx;
	mlx_image_t	*img;
	int32_t		x;
	int32_t		y;
	
	x = 0;
	y = 0;
	mlx_set_setting(MLX_STRETCH_IMAGE, false);
	mlx = mlx_init(WIDTH, HEIGHT, "fract-ol", false);
	if (!mlx)
		ft_error();
	img = mlx_new_image(mlx, 1200, 800);
	if (!img || (mlx_image_to_window(mlx, img, 0, 0) < 0))
		ft_error();
	while (x < 793)
	{
		while (y < 10001)
		{
			mlx_put_pixel(img, y, x, 0xa6ef5fFF);
			y++;
		}
		printf("%d %d\n", y, x);
		y = 0;
		x++;
	}
	mlx_loop_hook(mlx, ft_hook, mlx);
	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (EXIT_SUCCESS);
}
