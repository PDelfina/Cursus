/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/05 11:49:17 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

// void    mouse_hook()

void	ft_hook(void *param)
{
	t_fractol	*fractal;

	fractal = param;
	// mlx_key_hook(fractal->mlx, &key_hook, param);
}

void	key_hook(mlx_key_data_t esc, void *param)
{
	t_fractol	*fractal;

	fractal = param;
	if (esc.key == MLX_KEY_ESCAPE && esc.action == MLX_PRESS)
		mlx_close_window(fractal->mlx);
}