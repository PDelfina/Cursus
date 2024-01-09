/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:25 by dparada           #+#    #+#             */
/*   Updated: 2024/01/09 16:14:37 by dparada          ###   ########.fr       */
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

void	msj_error(void)
{
	ft_printf("|----------------------------------------|\n");
	ft_printf("|Si quiere ejecutar Mandelbrot, escriba: |\n");
	ft_printf("|./fractol Mandelbrot o ./fractol 1      |\n");
	ft_printf("|----------------------------------------|\n");
	ft_printf("|Si quiere ejecutar Julia, escriba:      |\n");
	ft_printf("|./fractol Julia x y  o ./fractol 2 x y  |\n");
	ft_printf("|----------------------------------------|\n");
}

int32_t	color(int iters)
{
	int32_t color;


	if (iters < 1000)
		color = 0xFFFFFFFF;
	// else if (iters < 20)
		// color = 0xFF9944FF;//naranja
	// else if (iters < 30)
	// 	color = 0xFFF500FF;//amarillo
	// else if (iters < 40)
	// 	color = 0x5fefa8FF;//verde agua
	// else if (iters < 50)
	// 	color = 0xa6ef5fFF;//verde
	// else if (iters < 60)
	// 	color = 0xef605fFF;//rojo
	// else if (iters < 70)
	// 	color = 0xa85fefFF;//violeta
	// else if (iters < 80)
	// 	color = 0x8219e8FF;//violeta oscuro
	// else if (iters < 90)
	// 	color = 0xFFF500FF;//amarillo
	else
		color = 0x5fa6efFF;//azul
	return (color);
}

double	ft_fatoi(int i, double n, double t, char *str)
{
	int	decimal;
	
	decimal = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			t = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] == '.')
			decimal = 1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (decimal == 1)
				t /= 10.00;
			n = (n * 10.00) + (str[i] - '0');
		}
		i++;
	}
	return (t * n);
}

int	ft_mod(double z_real, double z_imag)
{
	return ((z_real * z_real) + (z_imag * z_imag));
}
