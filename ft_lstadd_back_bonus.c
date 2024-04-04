/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:50:01 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 19:12:59 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new) //agregamos un elemento al final de la lista enlazada
{
	t_list	*temporal;

	temporal = (*alst);
	if ((*alst))
	{
		while (temporal->next != NULL)
			temporal = temporal->next; //despues de esta linea apuntamos al ultimo nodo de la lista o NULL  si el nodo actual es el ultimo
		temporal->next = new; // enlazamos el nuevo nodo new al final de la lista
	}
	// en caso de que apunte a NULL le decimos que new lo asignamos al principio de la lista
	if (!(*alst)) 
		((*alst) = new);
}

/* int	main(void)
{
	t_list *lst = ft_lstnew(ft_strdup("Hello"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("world")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("from")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Libft")));
	t_list *temp = lst;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    
    ft_lstclear(&lst, free);
    
    return (0);
} */