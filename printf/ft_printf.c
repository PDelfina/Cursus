/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:43:28 by dparada           #+#    #+#             */
/*   Updated: 2023/11/30 16:18:31 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char const *str, va_list parametros, int total)
{
	int		i;
	char	word;
	char	*ptr;

	i = 0;
	word = str[i];
	if (str[i] == '%')
		total += ft_putchar('%');
	else if (str[i] == 'c')
		total += ft_putchar(va_arg(parametros, int));
	else if (str[i] == 's')
		total += ft_putstr(va_arg(parametros, char *));
	else if (str[i] == 'd' || str[i] == 'i')
	{
		ptr = ft_itoa(va_arg(parametros, int));
		total += ft_putstr(ptr);
		free(ptr);
	}
	else if (str[i] == 'X' || str[i] == 'x')
		total += ft_hexa(va_arg(parametros, unsigned int), word);
	else if (str[i] == 'p')
		total += ft_hexa(va_arg(parametros, unsigned int), word);
	return (total);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		cont;
	va_list	parametros;

	i = 0;
	cont = 0;
	va_start(parametros, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			cont = ft_check(&str[i], parametros, cont);
		}
		else
			cont += ft_putchar(str[i]);
		i++;
	}
	va_end(parametros);
	return (cont);
}

/*int	main(void)
{
	char	*line; 

	line = "13434";
	printf("org: %p\n", line);
	ft_printf("mio: %p\n", line);
}*/
