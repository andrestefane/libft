/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:04:25 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 11:17:15 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n) //compara 2 strings y dice la diferencia de bytes
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--) // vamos restando la longitud indicada que comparamos de las 2 strings
	{
		if (*p1 != *p2) 
			return (*p1 - *p2); //devolve la diferencia de bytes entre una y otra
		else //en caso de que sean los mismo bytes vamos avanzando por la string para que no nos quedemos en un bucle infinito
		{
			p1++;
			p2++;
		}
	}
	return (0);
}
