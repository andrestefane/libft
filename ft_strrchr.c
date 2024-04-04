/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:57:17 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 15:49:22 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c) // buscamos la ultima aparacion de un caracter especifica en un string
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c) //comparamos entre el caracter de la posicion 'i' de la cadena 's' y el caracter 'c' que se busca
			return ((char *)(s + i)); //devolvemos la posicion del caracter que buscamos
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	char	*s = "ola";
	int		c = 'h';
	char	*result = ft_strrchr(s, c);
	if(result != NULL)
		printf("Se encuentra el carácter '%c'en la string %s.\n", c, result);
	else
		printf("no se encuentra %c en la string", c);
	return (0);
} */