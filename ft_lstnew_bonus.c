/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:18:48 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 15:30:52 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content) //añadir un nuevo nodo a la lista
{
	t_list	*new; //el nodo que vamos a añadir

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
//le decimo que el new apunta content y que new sera el siguiente nodo.
	new -> content = content; 
	new -> next = NULL; 
	return (new);
}

/* int	main(void)
{
	char	*content = "hola mundo";
	t_list *new	= ft_lstnew(content);
	if(content)
	{
		printf("se ha creado un nuevo nodo\n\n");
		printf("Contenido del nodo %s\n", (char *)new -> content);
		free(new);
	}
	else
		printf("no se ha podido crear nodo\n");
	return (0);
} */