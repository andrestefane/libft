/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:45:09 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 09:03:18 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, unsigned int size) //copia una string hasta un numero de bytes
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
	{
		return (src_len);
	}
	while (i < size - 1 && src[i] != '\0') // mientras guardamos el byte de '\0'
	{
		dest[i] = src[i]; //copiamos en dest lo que src tiene
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/* int	main(void)
{
	char	dest[] = "";
	char	*source = "hola que tal";
	int		result;

	result = ft_strlcpy(dest, source, 4);
	printf("la nueva string es %s\n", dest);
	return (0);
} */