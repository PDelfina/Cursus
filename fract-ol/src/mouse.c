/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/29 15:27:51 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	ft_scrollhook(double xdelta, double ydelta, void *param)
{
	t_fractol	*info;

	info = param;
	xdelta = 0;
	if (ydelta > 0)
		info->zoom *= 1.05;
	else if (ydelta < 0)
		info->zoom *= 0.85;
	printf_fractal(info);
}
