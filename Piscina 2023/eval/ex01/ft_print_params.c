/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:43:27 by dparada           #+#    #+#             */
/*   Updated: 2023/07/21 12:59:29 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	o;

	i = 1;
	o = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			while (argv[i][o] != '\0')
			{
				write(1, &argv[i][o], 1);
				o++;
			}
			i++;
			o = 0;
			write(1, "\n", 1);
		}
	}
}
