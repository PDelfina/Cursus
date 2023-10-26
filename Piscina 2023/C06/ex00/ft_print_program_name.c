/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:18:13 by dparada           #+#    #+#             */
/*   Updated: 2023/07/26 18:23:15 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	o;

	o = 0;
	if (argc > 0)
	{
		while (argv[0][o] != '\0')
		{
			write(1, &argv[0][o], 1);
			o++;
		}
		write(1, "\n", 1);
	}
}
