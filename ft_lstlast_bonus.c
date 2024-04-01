/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:47:12 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 09:27:15 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst) // recorremos lsl ista enlazada hasta encontrar el ultimo nodo
{
	t_list	*p;

	p = lst;
	if (p == NULL || lst == NULL)
		return (NULL);
	if (p->next == NULL)
		return (p);
	while (p)
	{
		if (p->next == NULL) // comprobamos si es el ultimo nodo de la lista
			return (p);
		p = p->next; // recorremos la lista para encontrar el ultimo nodo
	}
	return (p);
}
