/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:10:44 by dparada           #+#    #+#             */
/*   Updated: 2023/07/22 10:12:18 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	num;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && s2[i] != '\0')
		i++;
	num = (s1[i] - s2[i]);
	return (num);
}
/*
int	main(void)
{
	char	array1[] = "abcdfgh";
	char	array2[] = "abcefgh";
	int	num;
	
	num = ft_strcmp(array1, array2);
	printf("%d", num);
	return (0);
}*/
