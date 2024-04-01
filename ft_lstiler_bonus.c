/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiler_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:58:28 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 09:27:17 by astefane         ###   ########.fr       */
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
