/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:09:25 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 15:27:22 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//aplica una funcion a cada elemento de la lista y crea una lista con los resultados
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

	t_list	*new_list;
	t_list	*node;

	new_list = NULL;
	while (lst)
	{
		//creamos un nuevo nodo y decimos que lst apuntara al contenido
		node = ft_lstnew(f(lst->content));
		//si hay algun error en el lodo liberamos el nodo y retornamos NULL
		if (!node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		//agregamos el nodo en una nueva lista
		ft_lstadd_back(&new_list, node);
		//nos movemos al siguiente nodo de la lista original
		lst = lst->next;
	}
	return (new_list);
}

/* void	*ft_map_to_upper(void *content)
{
	char	*str = (char *)content;
	size_t	len = ft_strlen(str);
	size_t	i = 0;
	char	*result = (char *)malloc(len +1);

	if (!result)
		return (NULL);
	while (i < len)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			result[i] = str[i] - 32;
		else
			result[i] = str[i];
		i++;
	}
	result[len] = '\0';
	return (result);
}

void	ft_delete_content(void *content)
{
	free(content);
}

int	main (void)
{
	t_list *lst = ft_lstnew("hello");
	ft_lstadd_back(&lst, ft_lstnew("world"));
	ft_lstadd_back(&lst, ft_lstnew("from"));
	ft_lstadd_back(&lst, ft_lstnew("42_MADRID"));

	t_list *new_list = ft_lstmap(lst, &ft_map_to_upper, &ft_delete_content);
    t_list *current = new_list;

	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	free(lst);
	free(new_list);
	return (0);
} */