/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:22:20 by dparada           #+#    #+#             */
/*   Updated: 2023/07/19 10:29:57 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src);
}
/*
int	main(void)
{
	char	nom[] = "Alejo";
	char	ape[] = "Parada";

	printf("Original: %s ", nom);
	printf("%s\n", ape);
	ft_strcpy(ape, nom);
	printf("Cambiado: %s ", nom);
	printf("%s", ape);
}*/
