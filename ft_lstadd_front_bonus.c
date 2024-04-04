/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:41:30 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 19:17:40 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	//enlaza el nodo new al nodo que esta al principio de la lista
	new->next = *alst;
	//actualizamos el puntero para que apunte al nuevo nodo, new en este caso
	*alst = new; 
}
/* int main(void)
{
    // Creamos un nuevo nodo
    t_list *new_node = ft_lstnew(ft_strdup("new_node_content"));
    
    // Creamos una lista vacía
    t_list *lst = NULL;
    
    // Agregamos el nuevo nodo al frente de la lista
    ft_lstadd_front(&lst, new_node);
    
    // Ahora la lista contiene solo un nodo, que es el nuevo nodo
    
    // Recorremos la lista e imprimimos el contenido del nodo
    t_list *temp = lst;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    
    // Liberamos la memoria
    ft_lstclear(&lst, free);
    
    return (0);
} */