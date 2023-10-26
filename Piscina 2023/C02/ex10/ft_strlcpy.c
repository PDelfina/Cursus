/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:57:42 by dparada           #+#    #+#             */
/*   Updated: 2023/07/19 13:14:36 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	num;

	i = 0;
	num = 0;
	while (src[num] != '\0')
		num++;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (num);
}
/*
int	main(void)
{
	char	destino[] = "Hola";
	char	source[] = "fundacion";
	int		num;

	printf("Destino original %s\n", destino);
	num = ft_strlcpy(destino, source, 5);
	printf("%d\n", num);
	printf ("Destino cambiado %s\n", destino);
}*/
