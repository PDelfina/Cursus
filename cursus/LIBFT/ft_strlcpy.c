/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:30:32 by dparada           #+#    #+#             */
/*   Updated: 2023/09/18 10:59:51 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	if (dstsize != 0)
	{
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (n);
}

/*#include <string.h>

int	main(void)
{
	char	dest[20];
	char	src[] = "Hola Mundo";

	printf("%zu\n", ft_strlcpy(dest, src, 7));
	printf("%s\n", dest);
	printf("%zu\n", strlcpy(dest, src, 7));
	return (0);
}*/
