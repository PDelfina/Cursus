/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiteri_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:45:58 by dparada           #+#    #+#             */
/*   Updated: 2023/10/06 15:16:58 by dparada          ###   ########.fr       */
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
	ft_lstiteri(nodo1, print);
}*/
