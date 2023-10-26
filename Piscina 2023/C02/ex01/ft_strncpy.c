/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:44:20 by dparada           #+#    #+#             */
/*   Updated: 2023/07/19 10:34:32 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	nom[] = "Alejo";
	char	ape[] = "Parada";
	int	num = 3;
	
	printf("Original: %s", nom);
	printf("%s\n", ape);
	ft_strncpy(nom, ape, num);
	printf("Cambiado: %s", nom);
	printf("%s", ape);
}*/
