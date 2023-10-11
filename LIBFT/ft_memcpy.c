/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:37:07 by dparada           #+#    #+#             */
/*   Updated: 2023/10/10 10:49:29 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = ((char *)dst);
	source = ((char *)src);
	if (src == 0 && dst == 0)
		return (dst);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	s[] = "alightechs";
	char	s1[] = "alightechs";
	char	s2[] = "holis";
	size_t	x = 9;
	printf("%s\n", ft_memcpy(s + 5, s, x));
	printf("%s\n", memcpy(s1 + 5, s1, x));
}*/
