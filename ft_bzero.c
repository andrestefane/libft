/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:21:30 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 08:34:31 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_char; //hacemos casting de tipo char al puntero de 's' de la funcion
	size_t			i; //size_t lo usamos para poder reccorrer la array

	i = 0;
	s_char = (unsigned char *)s;
	while (i < n)
	{
		s_char[i] = 0; // convertimos todo en 0 
		i++;
	}
}
