/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:37:07 by dparada           #+#    #+#             */
/*   Updated: 2023/09/19 11:11:37 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	((unsigned char *)dst)[i] = '\0';
	return (dst);
}

#include <string.h>

int	main(void)
{/*
	char	d[10]*/
	/*char	ds[] = "abcdefghijkl";*/
	char	s[20] = "alightechs";
	size_t	x = 7;

	ft_memcpy(s, s, x);
	printf("%s\n",s );
	memcpy(s, s, x);
	printf("%s\n", s);
}
