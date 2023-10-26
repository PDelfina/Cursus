/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:46:39 by dparada           #+#    #+#             */
/*   Updated: 2023/07/16 15:59:12 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	uno;

	i = 0;
	uno = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			uno = 0;
		i++;
	}
	return (uno);
}
/*
int	main(void)
{
	char array[] = "ABCD";
	int num;

	num = ft_str_is_lowercase(array);
	printf("%d", num);
	return (0);
}*/
