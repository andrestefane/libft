/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:47:12 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 19:27:47 by astefane         ###   ########.fr       */
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
/* int	main(void)
{
	// Creamos algunos nodos de lista enlazada
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");

	// Creamos una lista enlazada con los nodos
	node1->next = node2;
	node2->next = node3;

	// Obtenemos el último nodo de la lista
	t_list *last_node = ft_lstlast(node1);

	// Imprimimos el contenido del último nodo
	if (last_node)
		printf("El último nodo contiene: %s\n", (char *)last_node->content);
	else
		printf("La lista está vacía.\n");

	// Liberamos la memoria asociada a los nodos
	free(node1);
	free(node2);
	free(node3);

	return (0);
} */