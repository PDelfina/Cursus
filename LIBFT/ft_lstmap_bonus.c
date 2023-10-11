/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dparada <dparada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:37:24 by dparada           #+#    #+#             */
/*   Updated: 2023/10/11 10:12:30 by dparada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*aux;

	if (!f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		aux = ft_lstnew(NULL);
		if (!aux)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		aux->content = f(lst->content);
		ft_lstadd_back(&new, aux);
		lst = lst->next;
	}
	return (new);
}

/*void	*str_tou(void *s)
{
	int	i;

	i = 0;
	while (((char *)s)[i])
	{
		((char *)s)[i] = ft_toupper(((char *)s)[i]);
		i++;
	}
	return (s);
}

void	ft_delete(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*aux;

	nodo1 = ft_lstnew(ft_strdup("Hola"));
	nodo2 = ft_lstnew(ft_strdup("como estas"));
	nodo1->next = nodo2;
	aux = nodo1;
	printf("La lista original:\n");
	while (aux->next)
	{
		printf("%s ", aux->content);
		aux = aux->next;
	}
	printf("%s\n", aux->content);
	printf("La lista despues de la funcion:\n");
	ft_lstmap(nodo1, str_tou, ft_delete);
	aux = nodo1;
	while (aux->next)
	{
		printf("%s ", aux->content);
		aux = aux->next;
	}
	printf("%s\n", aux->content);
}*/
