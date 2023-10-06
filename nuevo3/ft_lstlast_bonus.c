/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:23:42 by dparada           #+#    #+#             */
/*   Updated: 2023/10/06 10:25:30 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo;

	nodo1 = ft_lstnew(ft_strdup("Holi"));
	nodo2 = ft_lstnew(ft_strdup("Como estas?"));
	nodo1->next = nodo2;
	nodo2->next = NULL;
	nodo = ft_lstlast(nodo1),
	printf("%s\n", nodo->content);
	return (0);
}*/
