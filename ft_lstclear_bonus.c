/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:58:58 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 19:31:09 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *)) // limpia y liberamos memoria de una lista enlazada
{
	t_list	*gon;
	t_list	*aux;

	aux = *lst; 
	if (!(*lst)) // Nos aseguramos de que la lista no este vacia.
		return ;
	while (aux) //recoremos el nodo desde el principio
	{
		gon = aux->next; //guardamos el puntero al siguiente nodo
		del(aux->content); // liberamos cualquier recurso asociado con el contenido del nodo
		free(aux); // liberamos memoria
		aux = gon; // actualizamos el nodo  para que apunte al nodo 
	}
	*lst = NULL;
}

/* static void free_content(void *content)
{
    free(content);
}

int main(void)
{
    // Creamos algunos nodos para la lista
    t_list *node1 = ft_lstnew(ft_strdup("Node 1 content"));
    t_list *node2 = ft_lstnew(ft_strdup("Node 2 content"));
    t_list *node3 = ft_lstnew(ft_strdup("Node 3 content"));
    
    // Creamos la lista y agregamos los nodos
    t_list *lst = NULL;
    ft_lstadd_back(&lst, node1);
    ft_lstadd_back(&lst, node2);
    ft_lstadd_back(&lst, node3);
    
    // Llamamos a ft_lstclear para liberar la memoria de la lista y sus nodos
    ft_lstclear(&lst, &free_content);
    
    // Ahora la lista debería estar vacía
    
    return (0);
} */