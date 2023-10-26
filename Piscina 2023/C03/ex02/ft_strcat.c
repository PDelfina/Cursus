/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:22:39 by dparada           #+#    #+#             */
/*   Updated: 2023/07/22 10:19:24 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (dest[i] != '\0')
		i++;
	while (src[num] != '\0')
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

	ft_strcat(array1, array2);
	printf("%s", array1);
}*/
