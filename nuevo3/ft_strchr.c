/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:37:55 by dparada           #+#    #+#             */
/*   Updated: 2023/09/25 10:44:03 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;
	char	c1;

	i = 0;
	s1 = ((char *)s);
	c1 = ((char )c);
	while (s1[i])
	{
		if (s1[i] == c1)
			return ((char *)&s[i]);
		i++;
	}
	if (c1 == '\0' && s1[i] == '\0')
		return ((char *)&s[i]);
	return (0);
}

/*int	main(void)
{
	const char	*array = "Tripouille";
	int			x = '';
	printf("%s\n", ft_strchr(array, 't' + 256));
	printf("%s\n", strchr(array, 't' + 256));
	return (0);
}*/
