/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:47:32 by dparada           #+#    #+#             */
/*   Updated: 2023/10/31 11:58:15 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
			line = NULL;
			return (NULL);
		}
		auxiliar = line;
		line = ft_strjoin(auxiliar, buffer, readline);
	}
	free(buffer);
	if (ft_strlen(line) == 0)
		return (free(line), NULL);
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
	line = ft_calloc ((j + 1 + (buffer[j] == '\n')), sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_free(char *buffer)
{
	free(buffer);
	return (NULL);
}

char	*ft_clean(char *buffer)
{
	int		j;
	int		i;
	char	*aux;

	j = 0;
	while (buffer[j] != '\0' && buffer[j] != '\n')
		j++;
	if (ft_strlen(buffer) - j <= 0)
	{
		buffer = ft_free(buffer);
		return (NULL);
	}
	aux = ft_calloc (ft_strlen(buffer) - j + 1, sizeof(char));
	if (!aux)
		return (NULL);
	j++;
	i = 0;
	while (buffer[j] != '\0')
		aux[i++] = buffer[j++];
	buffer = ft_free(buffer);
	return (aux);
}

char	*get_next_line(int fd)
{
	static char	*buffer[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || read (fd, 0, 0) < 0)
	{
		buffer[fd] = ft_free(buffer[fd]);
		return (NULL);
	}
	buffer[fd] = ft_readfd(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = get_the_line(buffer[fd]);
	buffer[fd] = ft_clean(buffer[fd]);
	return (line);
}

/*void	leaks(void)
{
	system("leaks a.out");
}

int	main(void)
{	
	char	*buffer;
	int		fd1;
	int		fd2;

	fd1 = open("text.txt", O_RDWR);
	fd2 = open("holi.txt", O_RDWR);
	buffer = get_next_line(fd1);
	printf("fd1 %s\n", buffer);
	buffer = get_next_line(fd2);
	printf("fd2 %s\n", buffer);
}*/
