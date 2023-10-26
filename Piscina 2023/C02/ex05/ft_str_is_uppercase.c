/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:26:13 by dparada           #+#    #+#             */
/*   Updated: 2023/07/16 16:42:03 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	uno;

	i = 0;
	uno = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			uno = 0;
		i++;
	}
	return (uno);
}
/*
int	main(void)
{
	char	array[] = "AASK";
	int	num;

	num = ft_str_is_uppercase(array);
	printf("%d", num);
	return (0);
}*/
