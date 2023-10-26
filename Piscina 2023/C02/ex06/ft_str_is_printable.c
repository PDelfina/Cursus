/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:10:34 by dparada           #+#    #+#             */
/*   Updated: 2023/07/16 17:19:46 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	uno;

	i = 0;
	uno = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			uno = 0;
		i++;
	}
	return (uno);
}
/*
int	main(void)
{
	char	array[] = "á";
	int	num;

	num = ft_str_is_printable(array);
	printf("%d", num);
	return (0);
}*/
