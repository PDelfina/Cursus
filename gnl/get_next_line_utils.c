/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:50:56 by dparada           #+#    #+#             */
/*   Updated: 2023/10/23 17:02:24 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*punt;
	int		i;
	int		n;

	i = 0;
	punt = malloc(count * size);
	if (punt == NULL || punt < 0)
		return (NULL);
	n = (count * size);
	while (i < n)
	{
		((unsigned char *)punt)[i] = 0;
		i++;
	}
	return (punt);
}

char	*ft_strjoin(char *line, char *buffer, int readline)
{
	char	*ptr;
	int		i;
	int		j;

	if (!line)
		line = ft_calloc(1, 1);
	ptr = malloc ((ft_strlen(line) + ft_strlen(buffer) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (line[j])
		ptr[i++] = line[j++];
	j = 0;
	while (j < readline)
		ptr[i++] = buffer[j++];
	ptr[i] = '\0';
	free(line);
	return (ptr);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;
	char	c1;

	i = 0;
	s1 = ((char *)s);
	c1 = ((char )c);
	while (s1[i])
	{
		if (s1[i] == c1)
			return ((char *)&s[i]);
		i++;
	}
	if (c1 == '\0' && s1[i] == '\0')
		return ((char *)&s[i]);
	return (0);
}
