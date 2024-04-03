/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:31:31 by astefane          #+#    #+#             */
/*   Updated: 2024/04/03 12:12:45 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size) //Asignamos un bloque de memoria a 0
{
	size_t	total;
	void	*ptr;
//multiplicamos count y size para saber el total que le vamos a asignar en la memoria
	total = count * size;
	ptr = malloc(total);
	if (ptr != NULL)
	{
		// se convierte todos el espacio acumulado en 0 
		ft_memset(ptr, 0, total);
		return (ptr);
	}
	return (NULL);
}
