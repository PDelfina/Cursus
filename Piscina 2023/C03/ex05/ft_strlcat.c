/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:51:06 by dparada           #+#    #+#             */
/*   Updated: 2023/07/22 10:23:46 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sz;
	unsigned int	i;
	unsigned int	k;

	sz = 0;
	i = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[sz] != '\0')
		sz++;
	if (size <= i)
		sz += size;
	else
		sz += i;
	while (src[k] != '\0' && (i + 1 < size))
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (sz);
}
/*
int	main(void)
{
	char	array1[] = "12345";
	char	array2[] = "123456789";
	int		num;

	num = ft_strlcat(array1, array2, 20);
	printf("%s %d", array1, num);
	return (0);
}*/
