/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:25:50 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 15:30:27 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c) //Tiene que encontrar el primer caracter en la string que se indique
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c)
	{
		if (!s[i])// verificamos si hemos llegado alfinal de la caneda sin encontrar el caracter 'c' sino lo ha encontrado devuelvo NULL
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)s + i); // devolvemos 's + i' porque estamos recoriendo con i toda la string
}
