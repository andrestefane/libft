/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:50:01 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 09:27:20 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new) //agregamos un elemento al final de la lista enlazada
{
	t_list	*temporal;

	temporal = (*alst);
	if ((*alst))
	{
		while (temporal->next != NULL) //mientras temporal que apunta a next es distinto a NULL
			temporal = temporal->next; //despues de esta linea apuntamos al ultimo nodo de la lista o NULL  si el nodo actual es el ultimo
		temporal->next = new; // enlazamos el nuevo nodo new al final de la lista
	}
	if (!(*alst)) // en caso de que apunte a NULL le decimos que new lo asignamos al principio de la lista
		((*alst) = new);
}
