/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:08:01 by dparada           #+#    #+#             */
/*   Updated: 2023/10/10 14:42:42 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void 	iter(unsigned int i, char *s)
{
	while (s[i])
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
}

int	main(void)
{
	char	s[] = "holis";

	ft_striteri(s, iter);
	printf("%s\n", s);
	return (0);
}*/
