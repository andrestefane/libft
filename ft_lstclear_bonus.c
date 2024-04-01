/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:58:58 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 09:27:18 by astefane         ###   ########.fr       */
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
