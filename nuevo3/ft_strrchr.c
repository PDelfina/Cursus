/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:48:03 by dparada           #+#    #+#             */
/*   Updated: 2023/09/22 11:54:51 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*l;

	i = 0;
	l = 0;
	while (s[i])
	{
		if (s[i] == (char )c)
			l = &s[i];
		i++;
	}
	if ((char )c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	return ((char *)l);
}

/*int	main(void)
{
	const char	*array = "tripouille";

	printf("%s\n", ft_strrchr(array, 't' + 256));
	printf("%s\n", strrchr(array, 't' + 256));
	return (0);
}*/
