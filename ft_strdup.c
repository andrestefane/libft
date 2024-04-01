/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:49:35 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 15:41:38 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src) // copiamos la string de una a otra 
{
	char	*temp;

	temp = dest;
	while (*src != '\0')
		*dest++ = *src++; // copia la string de src a dest
	*dest = '\0'; // con esto nos aseguramos que el destino este correctamente terminado con el caracter nulo
	return (temp);
}

char	*ft_strdup(const char *s1) // se utiliza para duplicar una cadena de caracteres
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1) +1; // le sumamos 1 para incluir el '\0'
	dup = (char *)malloc(len);
	if (dup != NULL)
	{
		ft_strcpy(dup, s1);
	}
	return (dup);
}
