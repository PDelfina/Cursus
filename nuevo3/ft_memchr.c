/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:21:26 by dparada           #+#    #+#             */
/*   Updated: 2023/09/25 10:44:36 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	c1;

	i = 0;
	s1 = ((char *)s);
	c1 = ((char )c);
	while (i < n)
	{
		if (s1[i] == c1)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s = "Hola mundo";
	char *pos = memchr(s, '\0', 10);
	char *posi = ft_memchr(s, '\0', 10);

	printf("%s\n", pos);
	printf("%s\n", "a");
	printf("%s\n", posi);
	return (0);
}*/
