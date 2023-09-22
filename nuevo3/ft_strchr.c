/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:37:55 by dparada           #+#    #+#             */
/*   Updated: 2023/09/21 15:02:38 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*#include <string.h>

int	main(void)
{
	const char	*array = "Hola Mundo";
	int			x = 'M';
	printf("%s\n", ft_strchr(array, x));
	printf("%s\n", strchr(array, x));
	return (0);
}*/
