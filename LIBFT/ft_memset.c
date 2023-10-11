/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:47:31 by dparada           #+#    #+#             */
/*   Updated: 2023/10/10 10:58:02 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int	main(void)
{
	char	array[20];
	int		x = '.';
	size_t	size = 8;

	printf("%s\n",ft_memset(array + 2, x, size));
	printf("%s\n",memset(array + 2, x, size));
	return (0);
}*/
