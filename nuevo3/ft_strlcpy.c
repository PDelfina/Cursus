/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:30:32 by dparada           #+#    #+#             */
/*   Updated: 2023/09/29 11:28:38 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		while ((i < dstsize - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (n);
}

/*int	main(void)
{
	char	dest[0];
	char	src[] = "Hola Mundo";

	printf("%zu\n", ft_strlcpy(dest, src, 0));
	printf("%s\n", dest);
	printf("%zu\n", strlcpy(dest, src, 0));
	return (0);
}*/
