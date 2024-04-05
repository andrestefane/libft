/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:41:30 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 14:58:57 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	//le decimos que el nuevo nodo '*alst' apuntara al primer nodo de la lista
	new->next = *alst;
	//apuntara al primer nodo de la lista
	*alst = new; 
}
/* int	main(void)
{
	t_list *new_node = ft_lstnew(ft_strdup("contenido"));
	t_list *lst = NULL;
	ft_lstadd_front(&lst, new_node);
	t_list *temp = lst;
	while ( temp != NULL)
	{
		printf("%s\n", (char *)temp -> content);
		temp = temp->next;
	}
	ft_lstclear(&lst, &free);
	return(0);
} */