/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:41:30 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 08:51:49 by astefane         ###   ########.fr       */
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
    t_list *new_node = ft_lstnew(ft_strdup("new_node_content"));
    
    t_list *lst = NULL;
    
    // Agregamos el nuevo nodo al frente de la lista
    ft_lstadd_front(&lst, new_node);
    
    t_list *temp = lst;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    
    free(&lst);
    
    return (0);
} */