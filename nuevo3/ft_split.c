/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:36:51 by dparada           #+#    #+#             */
/*   Updated: 2023/10/03 12:17:27 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_next(char const *s, char c, size_t i)
{	
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

size_t	ft_less(char **matrix, size_t count)
{
	matrix[count] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	count;
	size_t	co;

	co = 0;
	count = ft_words(s, c);
	matrix = malloc ((count + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = ft_less(matrix, count);
	while (co < count)
	{
		while (s[i])
		{	
			if (s[i] != c)
			{
				matrix[co++] = ft_substr(s, i, ft_next(s, c, i) - i);
				i = ft_next(s, c, i);
			}
			else
				i++;
		}
	}
	return (matrix);
}

/*int	main(void)
{
	char	*ptr = "Hola me llamo";
	char	c = 'l';
	int i = 0;
	char	**matrix;

	matrix = ft_split(ptr, c);
	while (matrix[i])
	{
		printf("%s\n", matrix[i]);
		i++;
	}
}*/
