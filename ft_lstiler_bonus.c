/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiler_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:58:28 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 15:22:40 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *)) //permitimos aplicar una funcion a cada elemento de una lista
{
	while (lst)
	{
		f(lst->content); //llamamos a 'f' y le pasamos el contenido de nodo actual
		lst = lst->next; //apuntamos al siguiente nodo de la lista
	}
}

/* void print_int(void *content)
{
	printf("%d ", *((int *)content));
}

int main(void)
{
	t_list *node1 = ft_lstnew(ft_calloc(1, sizeof(int)));
	t_list *node2 = ft_lstnew(ft_calloc(1, sizeof(int)));
	
	*((int *)node1->content) = 10;
	*((int *)node2->content) = 20;
	node1->next = node2;
	
	printf("Contenido de la lista: ");
	
	ft_lstiter(node1, &print_int);
	
	printf("\n");

	ft_lstclear(&node1, &free);
	
	return 0;
} */