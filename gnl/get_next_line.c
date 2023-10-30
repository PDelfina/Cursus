/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:47:32 by dparada           #+#    #+#             */
/*   Updated: 2023/10/30 11:04:24 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_readfd(int fd, char *line)
{
	int		readline;
	char	*buffer;
	char	*auxiliar;

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
		auxiliar = line;
		line = ft_strjoin(auxiliar, buffer, readline);
		if (!line)
			return (free(buffer), NULL);
	}
	free(buffer);
	return (line);
}

char	*get_the_line(char *buffer)
{
	int		j;
	int		i;
	char	*line;

	j = 0;
	while (buffer[j] != '\n' && buffer[j] != '\0')
		j++;
	j++;
	line = ft_calloc ((j + 1), sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (i < j)
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_clean(char *buffer)
{
	int		j;
	int		i;
	char	*aux;

	j = 0;
	while (buffer[j] != '\0' && buffer[j] != '\n')
		j++;
	i = j;
	while (buffer[i] != '\0')
		i++;
	if (i - j <= 0)
		return (free(buffer), NULL);
	aux = ft_calloc (i - j, sizeof(char));
	if (!aux)
		return (NULL);
	j++;
	i = 0;
	while (j < ft_strlen(buffer))
		aux[i++] = buffer[j++];
	free(buffer);
	buffer = NULL;
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
}

int	main(void)
{
	char	*buffer;
	int		fd;

	atexit(leaks);
	fd = open ("text.txt", O_RDWR);
	buffer = get_next_line(fd);
	buffer = get_next_line(fd);
	printf("%s\n", buffer);
	free(buffer);
}

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=10 
get_next_line.c get_next_line_utils.c*/