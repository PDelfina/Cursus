/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/29 15:26:58 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	ft_hook(void *param)
{
	t_fractol	*info;

	info = param;
}

void	my_keyhook(mlx_key_data_t keys, void *param)
{
	t_fractol	*info;

	info = param;
	(void)keys;
	if (mlx_is_key_down(info->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(info->mlx);
	printf_fractal(info);
}

// void	ft_move_key(t_fractol *info)
// {
// 	if (mlx_is_key_down(info->mlx, MLX_KEY_RIGHT))
// 	{
// 		info->min_real += info->shift * info->zoom * WIDTH / 2;
// 	else if (mlx_is_key_down(info->mlx, MLX_KEY_LEFT))
// 		info->min_real -= info->shift * info->zoom * WIDTH / 2;
// 	else if (mlx_is_key_down(info->mlx, MLX_KEY_UP))
// 		info->max_imag -= info->shift * info->zoom * WIDTH / 2;
// 	else if (mlx_is_key_down(info->mlx, MLX_KEY_DOWN))
// 		info->max_imag += info->shift * info->zoom * WIDTH / 2;
// }