/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:10:13 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 11:09:03 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n) // busca la primera ocurrencia de un byte espacifico
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n--) // va restando la longitud de la string para que encuentra la ocurrencia
		if (*p != (unsigned char)c) //mientras p sea distinto a c vamos avanzando por la string p para encontrar la ocurrencia
			p++; 
	else
	{
		return (p);
	}
	return (0);
}
