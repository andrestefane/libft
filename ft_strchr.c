/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:25:50 by astefane          #+#    #+#             */
/*   Updated: 2024/04/03 15:31:43 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//encuentra la primer encurrencia el primer caracter en la string que se indique

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c)
	{
		if (!s[i])
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)s + i); // devolvemos 's + i' porque estamos recoriendo con i toda la string
}
/* int	main(void)
{
	char	*string;
	int		c;
	char	*result;

	string = "hola";
	c = 'a';
	result = ft_strchr(string, c),
	printf("se encontro '%c' en el byte %ld\n", c, result - string);
	return (0);
}
 */