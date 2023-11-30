/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:01:06 by dparada           #+#    #+#             */
/*   Updated: 2023/11/30 15:27:17 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_new(char *ptr)
{
	int 	i;
	int		n;
	int		len;
	char	*s;

	i = 0;
	len = ft_strlen(ptr);
	s = malloc (len + 1);
	if (!s)
		return (NULL);
	n = len - 1;
	while (len > i)
	{
		s[i] = ptr[n];
		i++;
		n--;
	}
	s[i] = '\0';	
	return (s);
}

char	*ft_convert_he(int nb, char *base)
{
	int		i;
	int		resto;
	char	*ptr;
	char	*s;

	i = 0;
	ptr = malloc(1);
	if (nb > 16)
	{
		while (nb > 0)
		{
			resto = nb % 16;
			ptr[i] = base[resto];
			nb /= 16;
			i++;
		}
	}
	else 
		ptr[i] = base[nb];
	ptr[i] = '\0';
	s = ft_new(ptr);
	free(ptr);
	return (s);
}

int	ft_hexa(int nb, char word)
{
	char	*low;
	char	*upper;
	char	*total;
	int		i;

	upper = "0123456789ABCDEF";
	low = "0123456789abcdef";
	if (nb < 0)
		nb *= -1;
	if (word == 'x')
		total = ft_convert_he(nb, low);
	else
		total = ft_convert_he(nb, upper);
	i = ft_putstr(total);
	free(total);
	return (i);
}
