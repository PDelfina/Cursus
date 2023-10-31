/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:50:56 by dparada           #+#    #+#             */
/*   Updated: 2023/10/31 10:26:21 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*punt;
	int		i;
	int		n;

	i = 0;
	n = (count * size);
	punt = malloc(n);
	if (punt == NULL || punt < 0)
		return (NULL);
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
	ptr = malloc(ft_strlen(line) + readline + 1);
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

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	return (0);
}
