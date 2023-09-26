# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dparada <dparada@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 11:56:30 by dparada           #+#    #+#              #
#    Updated: 2023/09/26 14:08:38 by dparada          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCE = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strchr.c ft_memcmp.c ft_strlcpy.c ft_strlen.c \
		ft_strncmp.c  ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_strlcat.c\

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) 
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)
		
re: fclean all

.PHONY: all clean fclean re