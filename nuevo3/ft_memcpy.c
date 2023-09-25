/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:37:07 by dparada           #+#    #+#             */
/*   Updated: 2023/09/25 12:02:45 by dparada          ###   ########.fr       */
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
	char	s[20] = "alightechs";
	size_t	x = 7;
	printf("%s\n", ft_memcpy(((void *)0), "segfaulter tu dois", 17));
	printf("%s\n", memcpy(((void *)0), "segfaulter tu dois", 17));
}*/
