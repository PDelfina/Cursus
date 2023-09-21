/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:06:32 by dparada           #+#    #+#             */
/*   Updated: 2023/09/15 14:37:22 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c < 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <ctype.h>

int	main(void)
{
	char	x = 'A';

	printf("%d\n", ft_isalpha(x));
	printf("%d\n", isalpha(x));
	return (0);
}*/
