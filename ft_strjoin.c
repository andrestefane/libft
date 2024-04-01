/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:17:24 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 16:21:29 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2) //concadena 2 strings
{
	size_t	lens1;
	size_t	lens2;
	char	*result;

	lens1 = ft_strlen(s1); 
	lens2 = ft_strlen(s2);
	result = malloc(lens1 + lens2 + 1); // reservamos la memoria para ambas strings
	if (!s1 || !s2)
		return (NULL);
	if (result)
	{
		ft_memcpy(result, s1, lens1); // copiamos s1 en el bloque apuntado por result con lens1
		ft_memcpy(result + lens1, s2, lens2 + 1); // copiamos s2 justo despues en memoria de s1
	}
	return (result);
}
