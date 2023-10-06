/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:00:03 by dparada           #+#    #+#             */
/*   Updated: 2023/10/05 15:01:14 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*aux;

	if (!lst)
		return (0);
	i = 1;
	aux = lst;
	while (aux->next)
	{		
		aux = aux->next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	int		size;

	nodo1 = ft_lstnew(ft_strdup("Holis"));
	nodo2 = ft_lstnew(ft_strdup("Como estas?"));
	nodo1->next = nodo2;
	nodo2->next = NULL;
	size = ft_lstsize(nodo1);
	printf("%d\n", size);
}*/
