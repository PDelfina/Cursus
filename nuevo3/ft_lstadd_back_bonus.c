/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:39:53 by dparada           #+#    #+#             */
/*   Updated: 2023/10/06 10:28:55 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst == NULL)
		*lst = new;
	else
	{
		aux = ft_lstlast(*lst);
		aux->next = new;
	}
}

/*int	main(void)
{
	t_list	**header;
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*newnodo;
	t_list	*aux; 

	nodo1 = ft_lstnew(ft_strdup("Hola."));
	nodo2 = ft_lstnew(ft_strdup("Como"));
	newnodo = ft_lstnew(ft_strdup("estas?"));
	*header = nodo1; 
	nodo1->next = nodo2;
	nodo2->next = NULL;
	aux = *header;
	printf("Lista original: \n");
	while (aux->next)
	{
		printf("%s ", aux->content);
		aux = aux->next;
	}
	printf("%s\n", aux->content);
	ft_lstadd_back(header, newnodo);
	aux = *header;
	printf("Lista con el nodo nuevo: \n");
	while(aux->next)
	{
		printf("%s ", aux->content);
		aux = aux->next;
	}
	printf("%s\n", aux->content);
}*/
