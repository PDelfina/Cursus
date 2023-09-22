/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:48:03 by dparada           #+#    #+#             */
/*   Updated: 2023/09/21 15:03:12 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*l;

	i = 0;
	l = NULL;
	while (s[i])
	{
		if (s[i] == c)
			l = &s[i];
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	return ((char *)l);
}

/*#include <string.h>

int	main(void)
{
	const char	*array = "Hola Mundo Ale";
	int x = 'o';
	printf("%s\n", ft_strrchr(array, x));
	printf("%s\n", strrchr(array, x));
	return (0);
}*/
