/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:17:01 by dparada           #+#    #+#             */
/*   Updated: 2023/10/30 16:34:50 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef LIM
#  define LIM 1024
# endif
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *line, char *buffer, int readline);
char	*ft_strchr(char *s, int c);
char	*ft_readfd(int fd, char *line);
char	*ft_clean(char *buffer);
char	*get_the_line(char *line);
char	*nl(void);
void	*ft_calloc(size_t count, size_t size);
int		ft_strlen(char *s);
#endif