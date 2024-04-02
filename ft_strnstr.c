/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:33:04 by astefane          #+#    #+#             */
/*   Updated: 2024/04/02 11:49:42 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len) //buscamos una subcadena dentro de otra cadena con un limite de bytes
{
	size_t	nlen;
	char	c;

	nlen = ft_strlen(s2);
	c = *s2;
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 != '\0' && len >= nlen)
	{
		if (*s1 == c && ft_strncmp(s1, s2, nlen) == 0)//mientras s1 y s2 sean iguales y comparamos los primeros 'nlen' caracteres s1 con los de s2, si devolvemos 0 significa que son identicas.
		{
			return ((char *)(s1));
		}
		s1++;
		len--;
	}
	return (NULL);
}
