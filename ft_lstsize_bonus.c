/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:44:31 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 19:30:15 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//calculamos el tamaño de la lista
int	ft_lstsize(t_list *lst)
{
	int		n;

	n = 0;
	while (lst != NULL)
	{
		++n;
		//movemos el puntero lst al siguiente nodo
		lst = lst->next;
	}
	return (n);
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

	// Obtenemos el tamaño de la lista
	int size = ft_lstsize(node1);

	// Imprimimos el tamaño de la lista
	printf("El tamaño de la lista es: %d\n", size);

	// Liberamos la memoria asociada a los nodos
	free(node1);
	free(node2);
	free(node3);

	return (0);
} */