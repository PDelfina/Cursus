/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/09 16:01:45 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

// void    mouse_hook()

void	ft_hook(void *param)
{
	t_fractol	*info;

	info = param;
	mlx_key_hook(info->mlx, &my_keyhook, info);
}

void	my_keyhook(mlx_key_data_t esc, void *param)
{
	t_fractol	*info;

	info = param;
	if (esc.key == MLX_KEY_ESCAPE && esc.action == MLX_PRESS)
		mlx_close_window(info->mlx);
}