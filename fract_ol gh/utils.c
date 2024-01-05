/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/05 10:33:42 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

void	declaring(t_fractol	*fractal)
{
	fractal->mlx = mlx_init(WIDTH, HEIGHT, "42 fract-ol", false);
	if (!fractal->mlx)
		exit(EXIT_FAILURE);
	fractal->img = mlx_new_image(fractal->mlx, WIDTH, HEIGHT);
	if (!fractal->img)
		exit(EXIT_FAILURE);
	fractal->max_iter = 200;
	fractal->min_real = -2.0;
	fractal->max_real = 1.0;
	fractal->min_imag = -1.0;
	fractal->max_imag = 1.0;
}

int	check_fractal(int argc, char **argv, t_fractol *fractal, t_real *con)
{
	if (argc > 1)
	{
		if ((ft_strcmp(argv[1], "Mandelbrot") || argv[1][0] == '1') \
		&& argc == 2)
		{
			fractal->set = 1;
			return (1);
		}
		else if ((ft_strcmp(argv[1], "Julia") || argv[1][0] == '2'))
		{
			con->real = (double)ft_atoi(argv[3]);
			con->imag = (double)ft_atoi(argv[4]);
			fractal->set = 2;
			return (1);
		}
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
}
