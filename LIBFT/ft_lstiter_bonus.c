/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:45:58 by dparada           #+#    #+#             */
/*   Updated: 2023/10/10 16:32:47 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	f(lst->content);
	while (lst->next)
	{
		lst = lst->next;
		f(lst->content);
	}
}

/*void	print(void *contenido)
{
	t_list	*nodo;

	nodo = ft_lstnew(contenido);
	while (nodo->next)
	{
		printf("%s", nodo->content);
		nodo = nodo->next;
	}
	printf("%s", nodo->content);
}

int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;

	nodo1 = ft_lstnew(ft_strdup("como "));
	nodo2 = ft_lstnew(ft_strdup("estas"));
	nodo1->next = nodo2;
	ft_lstiter(nodo1, print);
}*/
