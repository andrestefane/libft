/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:50:01 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 14:46:37 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new) //agregamos un elemento al final de la lista enlazada
{
	t_list	*temporal;

	temporal = (*alst);
	if ((*alst))
	{
		//verificamos si 'temporal' apunta a un nodo que tiene un nodo siguiente
		//si no es NULL significa que hay mas nodos en al lista
 		while (temporal->next != NULL)
		// Esta avanza 'temporal' al siguiente nodo en la lista enlazada
			temporal = temporal->next;
		//temporal apuntara al ultimo nodo de la lista
		temporal->next = new;
	}
	// verificamos si '*alst' es NULL, si lo es decimos que 'new' se asigna como el primer elemento de la lista
	if (!(*alst)) 
		((*alst) = new);
}

/* int	main(void)
{
	t_list	*lst = ft_lstnew(ft_strdup("Hello"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("world")));
	t_list	*temp = lst;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&lst, free);

	return (0);
} */