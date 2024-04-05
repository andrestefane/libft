/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:44:31 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 08:54:46 by astefane         ###   ########.fr       */
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
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");

	node1->next = node2;
	node2->next = node3;

	int size = ft_lstsize(node1);

	printf("El tamaño de la lista es: %d\n", size);

	free(node1);
	free(node2);
	free(node3);

	return (0);
} */