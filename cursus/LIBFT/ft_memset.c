/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:47:31 by dparada           #+#    #+#             */
/*   Updated: 2023/09/18 14:31:41 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*#include <string.h>

int	main(void)
{
	char	array[20];
	int		x = '.';
	size_t	size = 8;

	printf("%s\n",ft_memset(array, x, size));
	printf("%s\n",memset(array, x, size));
	return (0);
}*/
