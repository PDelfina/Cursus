/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:47:32 by dparada           #+#    #+#             */
/*   Updated: 2023/10/17 13:54:59 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_clean(char *line, char *buffer)
{
	int		j;
	int		n;
	int		i;
	int		size;
	char	*aux;

	j = ft_strlen(line);
	n = ft_strlen(buffer);
	i = 0;
	size = n - j;
	aux = ft_calloc ((size + 1), sizeof(char));
	if (!aux)
		return (NULL);
	while (j < n)
		aux[i++] = buffer[j++];
	free(buffer);
	return (aux);
}

char	*ft_readfd(int fd, char *line)
{
	int		readline;
	char	*buffer;
	int		i;

	i = 0;
	if (!line)
	{
		line = malloc (1 * sizeof(char));
		if (!line)
			return (NULL);
	}
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	readline = 1;
	while (!(ft_strchr(buffer, '\n') && readline > 0))
	{
		readline = read(fd, buffer, BUFFER_SIZE);
		buffer[readline] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free(buffer);
	return (line);
}

char	*get_line(char *line)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (line[j] != '\n' && line[j])
		j++;
	dest = ft_calloc (j + 2, sizeof(char));
	if (!dest)
		return (NULL);
	while (i <= j)
	{
		dest[i] = line[i];
		i++;
	}
	return (dest);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	char		*aux;

	buffer = ft_readfd(fd, buffer);
	if (!buffer)
		return (NULL);
	line = get_line(buffer);
	aux = ft_clean(line, buffer);
	buffer = aux;
	return (line);
}

/*int	main(void)
{
	char	*buffer;
	int		fd;

	fd = open ("text.txt", O_RDONLY);
	buffer = get_next_line(fd);
	printf ("%s", buffer);
}*/
