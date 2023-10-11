/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:06:28 by dparada           #+#    #+#             */
/*   Updated: 2023/10/09 12:03:48 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*punt;

	punt = malloc(count * size);
	if (punt == NULL || punt < 0)
		return (NULL);
	ft_bzero(punt, (count * size));
	return (punt);
}

/*int	main(void)
{
	printf("%s\n", ft_calloc(1, 1));
	printf("%s\n", calloc(1, 1));
}*/
