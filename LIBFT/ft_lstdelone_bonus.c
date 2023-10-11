/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:51:07 by dparada           #+#    #+#             */
/*   Updated: 2023/10/10 16:18:52 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	else
	{
		del(lst->content);
		free(lst);
	}
}

/*void	ft_delete(void *content)
{
	(void)content;
	free(content);
}

int	main(void)
{
	t_list	*nodo;
	t_list	*nodo1;
	t_list	*aux;
	nodo = ft_lstnew(ft_strdup(""));
	nodo1 = ft_lstnew(ft_strdup("dude"));
	ft_lstadd_back(&nodo, nodo1);
	aux = nodo;
	printf("Lista orginal:\n");
	while (aux->next)
	{
		printf("%s ", aux->content);
		aux = aux->next;
	}
	printf("%s ", aux->content);
	ft_lstdelone(nodo, ft_delete);
	aux = nodo;
	printf("Lista modificada:\n");
	while (aux->next)
	{
		printf("%s ", aux->content);
		aux = aux->next;
	}
	printf("%s ", aux->content);
}*/
