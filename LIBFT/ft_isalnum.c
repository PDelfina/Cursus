/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:14:12 by dparada           #+#    #+#             */
/*   Updated: 2023/10/09 12:25:04 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c <= '9' && c >= '0'))
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	int	x = 56;

	printf("%d\n", ft_isalnum(x));
	printf("%d\n", isalnum(x));
	return (0);
}*/
