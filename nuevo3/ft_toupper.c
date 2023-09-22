/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:17:14 by dparada           #+#    #+#             */
/*   Updated: 2023/09/21 15:03:31 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*#include <ctype.h>

int	main(void)
{
	int				f ='a';

	printf("%c\n", ft_toupper(f));
	printf("%c\n", toupper(f));
	return (0);
}*/
