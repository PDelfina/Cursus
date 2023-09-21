/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:21:26 by dparada           #+#    #+#             */
/*   Updated: 2023/09/19 12:55:38 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == c)
			return ((unsigned char *)&s[i]);
		i++;
	}
	if (c == '\0' && ((char *)s)[i] == '\0')
		return ((unsigned char*) &s[i]);
	return (NULL);
}

int	main(void)
{
	char	s[] = {'q', 'r', 's', 't', 'p', 'a', 'x'};
	
	char *pos = memchr(s, 't', 3);
	char *posi = ft_memchr(s, 't', 3);
	if (pos == NULL || posi == NULL)
		printf(NULL);
	else
	{
		printf("%c\n", pos[0]);
		printf("%c\n", posi[0]);
	}
	return (0);
}
