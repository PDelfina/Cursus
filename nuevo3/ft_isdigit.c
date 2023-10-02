/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:05:57 by dparada           #+#    #+#             */
/*   Updated: 2023/09/21 15:01:49 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>

int	main(void)
{
	int	x = '2';

	printf("%d\n", ft_isdigit(x));
	printf("%d\n", isdigit(x));
	return (0);
}*/
