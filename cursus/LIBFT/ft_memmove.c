/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:45:41 by dparada           #+#    #+#             */
/*   Updated: 2023/09/19 11:07:05 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	((unsigned char *)dst)[i] = '\0';
	return (dst);
}

int	main(void)
{
	/*char	source[] = "1234567891011";*/
	char	dest[20] = "alightechs";
	size_t n = 7;

	ft_memmove(dest + 5, dest, n);
	printf("%s\n", dest);
	memmove(dest + 5, dest, n);
	printf("%s\n", dest);
	return (0);
}
