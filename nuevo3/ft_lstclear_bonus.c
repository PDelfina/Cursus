/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:38:58 by dparada           #+#    #+#             */
/*   Updated: 2023/10/06 12:36:47 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	aux = *lst;
	while (*lst)
	{
		aux = aux->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
}

/*void	ft_delete(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	**nodo;
	t_list	*aux;

	*nodo = ft_lstnew(ft_strdup("Hola"));
	ft_lstadd_back(nodo, ft_lstnew(ft_strdup("dude")));
	ft_lstadd_back(nodo, ft_lstnew(ft_strdup("queondis")));
	ft_lstadd_back(nodo, ft_lstnew(ft_strdup("duuuude")));
	aux = *nodo;
	printf("Lista original:\n");
	while(aux->next)
	{
		printf("%s ",aux->content);
		aux = aux->next;
	}
	printf("%s ", aux->content);
	aux = *nodo;
	ft_lstclear(&((*nodo)->next), ft_delete);
	printf("Lista modificada:\n");
	while(aux->next)
	{
		printf("%s ", aux->content);
		aux = aux->next;
	}
	printf("%s ", aux->content);
}*/
