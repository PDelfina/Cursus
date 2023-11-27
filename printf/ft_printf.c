/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:43:28 by dparada           #+#    #+#             */
/*   Updated: 2023/11/27 16:25:32 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check(const char *str, va_list parametros)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	if (str[i] == '%')
		total = ft_putchar(str[i]);
	else if (str[i] == 'c')
		total = ft_putchar(va_arg(parametros, int));
	else if (str[i] == 's')
		total = ft_putstr(va_arg(parametros, char *));
	else if (str[i] == 'i' || str[i] == 'd')
		total = ft_putnbr(va_arg(parametros, int));
	return (total);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		total;
	va_list	parametros;

	va_start(parametros, str);
	i = 0;
	total = 0;
	while (str[i])
	{
		if (str[i] == '%')
			total += ft_check(&str[++i], parametros);
		else
		{
			printf("no");
			write(1, &str[i], 1);
			total++;
		}
		i++;
	}
	va_end(parametros);
	return (total);
}

int	main(void)
{
	ft_printf("%d", 12.23);
}
