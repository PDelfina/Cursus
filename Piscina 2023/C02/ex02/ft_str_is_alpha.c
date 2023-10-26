/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 13:47:12 by dparada           #+#    #+#             */
/*   Updated: 2023/07/19 10:38:59 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	uno;

	i = 0;
	uno = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				uno = 0;
		}
		i++;
	}
	return (uno);
}
/*
int	main(void)
{
	char	array[] = "abcd";
	int	num;

	num = ft_str_is_alpha(array);
	printf("%d", num);
	return (0);
}*/
