/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:29:23 by dparada           #+#    #+#             */
/*   Updated: 2023/09/26 15:42:44 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	n = 0;
	while (dst_len >= dstsize)
		return (dstsize + src_len);
	while (i < (dstsize - 1) && src[n])
	{
		dst[i] = src[n];
		i++;
		n++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}

/*int	main(void)
{
	char				dest[11] = "a";
	const char	*source = "Ale";
	size_t				size = 9;

	printf("%zu\n", ft_strlcat(dest, "lorem", 15));
	printf("%lu\n", strlcat(dest, "lorem", 15));
}*/
