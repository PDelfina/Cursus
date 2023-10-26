/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:17:06 by dparada           #+#    #+#             */
/*   Updated: 2023/07/22 10:20:29 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	num;

	i = 0;
	num = 0;
	while (dest[i] != '\0')
		i++;
	while (src[num] != '\0' && num < nb)
	{
		dest[i] = src[num];
		num++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	array1[] = "Ale";
	char	array2[] = "Parada";

	ft_strncat(array1, array2, 2);
	printf("%s", array1);
	return (0);
}*/
