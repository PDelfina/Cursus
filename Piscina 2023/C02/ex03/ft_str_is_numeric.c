/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:21:42 by dparada           #+#    #+#             */
/*   Updated: 2023/07/17 11:58:11 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	uno;

	i = 0;
	uno = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			uno = 0;
		i++;
	}
	return (uno);
}
/*
int	main(void)
{
	char	array[] = "avdffe";
	int		num;

	num = ft_str_is_numeric(array);
	printf("%d", num);
	return (0);
}*/
