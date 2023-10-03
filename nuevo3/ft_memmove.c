/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:45:41 by dparada           #+#    #+#             */
/*   Updated: 2023/09/21 16:53:57 by dparada          ###   ########.fr       */
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
		while (len != 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len --;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	dest[20] = "alightechs";
	size_t	n = 7;

	ft_memmove(dest + 5, dest, n);
	printf("%s\n", dest);
	memmove(dest + 5, dest, n);
	printf("%s\n", dest);
	return (0);
}*/
