/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:53:40 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 08:51:51 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*)) //eliminamos un unico nodo de una lista enlazada y liberamos la memoria asiciada a él
{
	del(lst->content); // llamamos a del pasando content del nodo lst (liberamos cualquier recurso asociado con el contenido del nodo)
	free(lst);
}
/* static void ft_del_int(void *content)
{
	free(content);
}

int main(void)
{
	t_list *node = ft_lstnew(ft_strdup("Hello"));

	printf("Contenido antes de eliminar: %s\n", (char *)node->content);

	ft_lstdelone(node, &ft_del_int);

	return 0;
}
 */