/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:29:30 by dparada           #+#    #+#             */
/*   Updated: 2023/09/26 13:21:01 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s1 = "";
	char	*s2 = "\xff\0\0\xaa\0\xde\x00MBS";

	printf("%d\n", ft_memcmp("abc", "abc", 7));
	printf("%d\n", memcmp("abc", "abc", 7));
}
*/