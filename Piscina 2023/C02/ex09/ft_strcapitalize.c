/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:52:30 by dparada           #+#    #+#             */
/*   Updated: 2023/07/18 18:27:48 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_alphabetic(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	si;

	i = 0;
	si = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphabetic(str[i]) == 0 && !(str[i] >= '0' && str[i] <= '9'))
			si = 1;
		else if (si)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			si = 0;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string[] = "salut, comment tu vas ? 42mots quarante-deux";
	
	ft_strcapitalize(string);
	printf("%s", string);
	return (0);
}*/
