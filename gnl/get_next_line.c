/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:47:32 by dparada           #+#    #+#             */
/*   Updated: 2023/10/26 11:52:26 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_readfd(int fd, char *line)
{
	int		readline;
	char	*buffer;

	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	readline = 1;
	while (!ft_strchr(buffer, '\n') && readline > 0)
	{
		readline = read(fd, buffer, BUFFER_SIZE);
		if (readline == -1)
		{
			free(line);
			return (NULL);
		}
		line = ft_strjoin(line, buffer, readline);
		if (!line)
			return (free(buffer), NULL);
	}
	free(buffer);
	return (line);
}

char	*get_the_line(char *line)
{
	int		j;
	char	*dest;

	j = 0;
	if (!line)
		return (NULL);
	while (line[j] != '\n' && line[j])
		j++;
	j++;
	dest = ft_calloc (j + 1, 1);
	if (!dest)
		return (NULL);
	dest[j] = '\0';
	j = 0;
	while (line[j] != '\n' && line[j] != '\0')
	{
		dest[j] = line[j];
		j++;
	}
	if (line[j] == '\n')
	{
		dest[j] = '\n';
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_clean(char *buffer)
{
	int		j;
	int		i;
	char	*aux;

	if (!buffer)
		return (free(buffer), NULL);
	j = 0;
	i = 0;
	while (buffer[j] != '\0' && buffer[j] != '\n')
		j++;
	aux = ft_calloc (((ft_strlen(buffer) - j) + 1), 1);
	if (!aux)
		return (NULL);
	j++;
	while (buffer[j] != '\0')
		aux[i++] = buffer[j++];
	aux[i] = '\0';
	free(buffer);
	return (aux);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || read (fd, 0, 0) < 0)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	buffer = ft_readfd(fd, buffer);
	if (!buffer)
		return (NULL);
	line = get_the_line(buffer);
	buffer = ft_clean(buffer);
	return (line);
}

/*void	leaks(void)
{
	system("leaks a.out");
	atexit(leaks);
}

int	main(void)
{
	char	*buffer;
	int		fd;

	fd = open ("text.txt", O_RDWR);
	buffer = get_next_line(fd);
	printf ("%s", buffer);
	free(buffer);
}
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=10 
get_next_line.c get_next_line_utils.c*/