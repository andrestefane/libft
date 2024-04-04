/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:53:40 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 19:21:17 by astefane         ###   ########.fr       */
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
	// Creamos un nodo de lista enlazada con un entero
	t_list *node = ft_lstnew(ft_strdup("Hello"));

	// Imprimimos el contenido antes de eliminarlo
	printf("Contenido antes de eliminar: %s\n", (char *)node->content);

	// Eliminamos el nodo de la lista
	ft_lstdelone(node, &ft_del_int);

	// El nodo ha sido eliminado, por lo que no deberíamos acceder a su contenido
	// Si intentamos acceder a él, obtendremos un comportamiento indefinido
	// Por lo tanto, no hay necesidad de imprimir el contenido después de eliminarlo

	return 0;
}
 */