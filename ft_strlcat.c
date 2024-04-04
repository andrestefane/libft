/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:25:40 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 12:58:02 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size) //concatenamos 2 strings sin que exceda el size
{
	size_t				i;
	unsigned int		x;
	unsigned int		st_len;

	st_len = ft_strlen(dst);
	x = ft_strlen(src);
	i = 0;
	if (size <= st_len) // si size es mayor que la longitud de destino si es verdadero no hay suficiente espacio para copiar una string completa
		return (size + x); // es el tamaño total que tendria la cadena concatenada
	while (dst[i] && i < size - 1) // dejamos espacio para '\0'
	{
		i++;
	}
	while (*src && i < size - 1)
	{
		dst[i++] = *src++; //copiamos '*src' en dst
	}
	dst[i] = '\0';
	return (st_len + x); //devolvemos la string 'dst + src'
}

/* int	main(void)
{
	char	dest[20] = "hola";
	const char *source = " que tal";
	int		result;
	size_t 	size = sizeof(dest);

	result = ft_strlcat(dest, source, size);
	printf("la nueva cadena es %s\n", dest);
	return (0);
} */