/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:57:17 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 09:03:13 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 // buscamos la ultima aparacion de un caracter especifica en un string
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		 //comparamos entre el caracter de la posicion 'i' de la cadena 's' y el caracter 'c' que se busca
		if (s[i] == (char)c)
		 //devolvemos la posicion del caracter que buscamos
			return ((char *)(s + i));
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