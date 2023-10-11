/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:11:32 by dparada           #+#    #+#             */
/*   Updated: 2023/10/05 16:37:33 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	**lst;
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*newnodo;
	t_list	*aux;

	nodo1 = ft_lstnew(ft_strdup("Hola"));
	nodo2 = ft_lstnew(ft_strdup("holi"));
	newnodo = ft_lstnew(ft_strdup("como estas?"));
	*lst = nodo1;
	nodo1->next = nodo2;
	aux = *lst;
	while (aux->next != NULL)
	{
		printf("Lista original:\n%s\n", aux->content);
		aux = aux->next;
	}
	printf("%s\n", aux->content);
	ft_lstadd_front(lst, newnodo);
	aux = *lst;
	
	ft_lstadd_front(lst, ft_lstnew(ft_strdup("como estas?")));

	while (aux->next != NULL)
	{
		printf("Lista con el nuevo nodo: \n%s\n", aux->content);
		aux = aux->next;
	}
	printf("%s\n", aux->content);
}*/
