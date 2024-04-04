/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiler_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:58:28 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 19:25:51 by astefane         ###   ########.fr       */
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
/* // Función para imprimir un entero
void print_int(void *content)
{
	printf("%d ", *((int *)content));
}

int main(void)
{
	// Creamos algunos nodos de lista enlazada con enteros
	t_list *node1 = ft_lstnew(ft_calloc(1, sizeof(int)));
	t_list *node2 = ft_lstnew(ft_calloc(1, sizeof(int)));
	t_list *node3 = ft_lstnew(ft_calloc(1, sizeof(int)));

	// Asignamos algunos valores a los enteros
	*((int *)node1->content) = 10;
	*((int *)node2->content) = 20;
	*((int *)node3->content) = 30;

	// Creamos una lista enlazada con los nodos
	node1->next = node2;
	node2->next = node3;

	// Iteramos sobre la lista e imprimimos cada elemento
	printf("Contenido de la lista: ");
	ft_lstiter(node1, &print_int);
	printf("\n");

	// Liberamos la memoria asociada a los nodos
	ft_lstclear(&node1, &free);

	return 0;
} */