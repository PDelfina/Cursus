/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:18:03 by dparada           #+#    #+#             */
/*   Updated: 2023/09/14 14:16:02 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_cmp(char *str, char *to_find, int i)
{
	int	k;
	int	num;

	num = 1;
	k = 0;
	while (to_find[k] != '\0')
	{
		if (str[i] != to_find[k])
			num = 0;
		i++;
		k++;
	}
	return (num);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_cmp(str, to_find, i) == 1)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	array1[] = "Hola Mumundo hola";
	char	array2[] = "";

	printf("%s", (ft_strstr(array1, array2)));
	return (0);
}
