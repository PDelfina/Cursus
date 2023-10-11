/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:45:41 by dparada           #+#    #+#             */
/*   Updated: 2023/10/10 10:48:34 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	if (dst > src)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len --;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	dest[] = "alightechs";
	char 	include[] = "holis";
	char	src[] = "alightechs";

	size_t	n = 9;

	ft_memmove(dest + 5, dest, n);
	printf("%s\n", dest);
	memmove(src + 5, src, n);
	printf("%s\n", src);
	return (0);
}*/
