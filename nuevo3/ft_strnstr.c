/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:26:22 by dparada           #+#    #+#             */
/*   Updated: 2023/09/21 15:03:09 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cmp(const char *s1, const char *s2, size_t i)
{
	size_t	n;
	int		t;

	t = 1;
	n = 0;
	while (s2[n])
	{
		if (s1[i] != s2[n])
			t = 0;
		i++;
		n++;
	}
	return (t);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i <= len)
	{
		if (needle[0] == haystack[i])
		{
			if (ft_cmp(haystack, needle, i) == 1)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/*#include <string.h>

int	main(void)
{
	const char	*big = "Hola Alejo Miguel";
	const char	*little = " Al";
	size_t		x = 20;

	printf("%s\n", ft_strnstr(big, little, x));
	printf("%s\n", strnstr(big, little, x));
}*/
