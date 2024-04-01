/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:53:40 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 09:27:18 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*)) //eliminamos un unico nodo de una lista enlazada y liberamos la memoria asiciada a él
{
	del(lst->content); // llamamos a del pasando content del nodo lst (liberamos cualquier recurso asociado con el contenido del nodo)
	free(lst);
}
